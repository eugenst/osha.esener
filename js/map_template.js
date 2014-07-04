function map_template(data) {
    function pointClick() {
        $div = $('<div>test</div>')
            .dialog({
                title: this.name,
                width: 400,
                height: 300
            });

		$div.highcharts({
			chart: {
				type: 'column'
			},
			title: {
				text: 'title'
			},
			subtitle: {
				text: 'subtitle'
			},
			xAxis: {
				categories: [
					'Yes',
					'No',
					'DK/NA'
				]
			},
			yAxis: {
				min: 0,
				title: {
				text: 'yAxis'
				}
			},
			tooltip: {
				headerFormat: '<span style="font-size:10px">{point.key}</span><table>',
				pointFormat: '<tr><td style="color:{series.color};padding:0">{series.name}: </td>' +
				'<td style="padding:0"><b>{point.y:.1f} mm</b></td></tr>',
				footerFormat: '</table>',
				shared: true,
				useHTML: true
			},
			plotOptions: {
				column: {
					pointPadding: 0.2,
					borderWidth: 0
				}
			},
			series: [{
				data: [this.value, (100 - this.value), 0]
			}]
		});
     }

    $('#container-map').highcharts('Map', {
        title : {
            text : null
        },
        
        legend: {
            enabled: true
        },

        plotOptions: {
            map: {
                joinBy: ['iso-a2', 'code'],
                dataLabels: {
                    enabled: true,
                    color: 'white',
                    formatter: function () {
                        if(this.point.properties && this.point.properties.labelrank.toString() < 5) {
                            return this.point.properties['iso-a2'];
                        }
                    },
                    format: null,
                    style: {
                        fontWeight: 'bold'
                    }
                },
                mapData: Highcharts.maps['custom/europe'],
                tooltip: {
                    headerFormat: '',
                    pointFormat: '{point.name}{point.text}</b>'
                }

            }
        },
        colorAxis: {
            min: Math.floor(_.min(_.pluck(data, 'value'))),
            max: Math.ceil(_.max(_.pluck(data, 'value'))),
            minColor: '#EEEEFF',
            maxColor: '#000022',
            stops: [
                [0, '#FFFFFF'],
                [0.8, '#4444FF'],
                [1, '#000022']
            ]
        },
        series : [{
            name: 'countries',
            data: $.map(data, function (code) {
                if(code.Country == "UK") return {
                    code: "GB",
                    value: code.value,
                    text: ": <b>" + code.value + "%</b>"
                };

                if(code.Country == "GR") return {
                    code: "EL",
                    value: code.value,
                    text: ": <b>" + code.value + "%</b>"
                };

            	return {
            		code: code.Country,
            		value: code.value,
            		text: ": <b>" + code.value + "%</b>"
            	};
        	}),
        	states: {
				hover: {
					color: '#EB9D17'
				}
			},
			point: {
				events: {
					click: pointClick
				}
			},
			cursor: 'pointer'
        }]
    });
}