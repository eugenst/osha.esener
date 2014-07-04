$(document).ready(function() {

	// return json file as variable
	function get_json(path) {
		var json = null;

		$.ajax({
			'async': false,
			'global': false,
			'url': path,
			'dataType': "json",
			'success': function(data) {
				json = data;
			}
		});

		return json;
	}

	// open json files
	var path = Drupal.settings.osha_esener.path;
	var data = get_json(path + "/data/data.json");
	var taxonomy = get_json(path + "/data/taxonomy.json");
	console.log(taxonomy);

	$.each(taxonomy['Indicator']['children'], function(key, value) { 
		$('#categories')
			.append($('<option id="' + value.code + '">', { values: key })
			.text(key)); 
	});

	$("#categories").change(function() {
			$("#variables").html('<option>-</option>');
			$("#breakdown1").html('<option>-</option>');
			$("#breakdown2").html('<option>-</option>');
			$("#breakdown3").html('<option>-</option>');

			$.each(taxonomy['Indicator']
				['children']
				[$("#categories option:selected").text()]
				['children'], function(key, value) { 
				
				$('#variables')
					.append($('<option id="' + value.code + '">', { values: key })
					.text(key));

			});
	});

	$("#variables").change(function() {
		$("#breakdown1").html('<option>-</option>');
		$("#breakdown2").html('<option>-</option>');
		$("#breakdown3").html('<option>-</option>');

    	breakdown1 = _.uniq(_.map(_.filter(data, function(val) {
    		return val.Variable == $("#variables option:selected").attr('id');
    	}), function(val) { return val.breakdown1; }));

		$.each(breakdown1, function(key, value) {

			cat = taxonomy['Size']['children'];

			var label;

			$.each(cat, function(each_key, each_value) {
				$.each(each_value['children'], function(each2_key, each2_value) {
					if(each2_value.code == value) {
						label = each2_key;
						return false;
					}
				});
			});

			$('#breakdown1')
				.append($('<option id="' + value + '">', { values: key })
				.text(label));
		});
	});

	$("#breakdown1").change(function() {
		$("#breakdown2").html('<option>-</option>');
		$("#breakdown3").html('<option>-</option>');

    	breakdown2 = _.uniq(_.map(_.filter(data, function(val) {
    		return val.Variable == $("#variables option:selected").attr('id') &&
    		       val.breakdown1 == $("#breakdown1 option:selected").attr('id');
    	}), function(val) { return val.breakdown2; }));

		$.each(breakdown2, function(key, value) {

			cat = taxonomy['Sector']['children'];

			var label;

			$.each(cat, function(each_key, each_value) {
				$.each(each_value['children'], function(each2_key, each2_value) {
					if(each2_value.code == value) {
						label = each2_key;
						return false;
					}
				});
			});

			$('#breakdown2')
				.append($('<option id="' + value + '">', { values: key })
				.text(label));
		});
	});

	$("#breakdown2").change(function() {
		$("#breakdown3").html('<option>-</option>');

    	breakdown3 = _.uniq(_.map(_.filter(data, function(val) {
    		return val.Variable == $("#variables option:selected").attr('id') &&
    		       val.breakdown1 == $("#breakdown1 option:selected").attr('id') &&
    		       val.breakdown2 == $("#breakdown2 option:selected").attr('id');
    	}), function(val) { return val.breakdown3; }));

		$.each(breakdown3, function(key, value) {

			cat = taxonomy['Answer']['children'];

			var label;

			$.each(cat, function(each_key, each_value) {
				$.each(each_value['children'], function(each2_key, each2_value) {
					if(each2_value.code == value) {
						label = each2_key;
						return false;
					}
				});
			});

			$('#breakdown3')
				.append($('<option id="' + value + '">', { values: key })
				.text(label));
		});
	});

	$("#breakdown3").change(function() {
		$("#container-bar").hide();
		$("#container-map").show();
		map_template(filter(data));
	});

	function filter(data) {
		return _.filter(data, function(val) {
    		return val.Variable == $("#variables option:selected").attr('id') &&
    		       val.breakdown1 == $("#breakdown1 option:selected").attr('id') &&
    		       val.breakdown2 == $("#breakdown2 option:selected").attr('id') &&
    		       val.breakdown3 == $("#breakdown3 option:selected").attr('id');
		})
	}


	$("#container-bar").show();
	$("#container-map").hide();
	bar_template(data);

	$("#btn-bar").click(function() {
		$("#container-bar").show();
		$("#container-map").hide();
		bar_template(filter(data));
	});
	$("#btn-map").click(function() {
		$("#container-bar").hide();
		$("#container-map").show();
		map_template(filter(data));
	});
});
