<?php
/**
 * @file
 * osha_esener.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function osha_esener_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'By Establishment Size',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '08bbc1e3-fa14-400a-b152-527301c7fbd5',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'by_establishment_size',
          'format' => NULL,
          'safe_value' => 'by_establishment_size',
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebc6adcd-8ea3-421a-b90c-6f183779e503',
    ),
  );
  $terms[] = array(
    'name' => 'Austria',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e34bf08-3590-4c3e-9743-aff09362d67b',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'AT',
          'format' => NULL,
          'safe_value' => 'AT',
        ),
      ),
    ),
    'parent' => array(
      0 => '5be75246-9d80-4ece-85d1-4f1cbcd88b99',
    ),
  );
  $terms[] = array(
    'name' => 'Indicator',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 27,
    'uuid' => '1ee012ec-f003-40aa-b50b-abd4bede9d7e',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
          'format' => NULL,
          'safe_value' => 'indicator',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'General health and safety management in the establishment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2296c16d-a640-4a58-a706-cc4cb6a97873',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'ghsme',
          'format' => NULL,
          'safe_value' => 'ghsme',
        ),
      ),
    ),
    'parent' => array(
      0 => '1ee012ec-f003-40aa-b50b-abd4bede9d7e',
    ),
  );
  $terms[] = array(
    'name' => 'Large Enterprises',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '308a205f-95fa-4d96-a50a-55ec90cdf678',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'xl250_499',
          'format' => NULL,
          'safe_value' => 'xl250_499',
        ),
      ),
    ),
    'parent' => array(
      0 => '08bbc1e3-fa14-400a-b152-527301c7fbd5',
    ),
  );
  $terms[] = array(
    'name' => 'Very Large Enterprises',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '3dfd59f6-c563-401e-8967-c53f7901e024',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'xxl_250plus',
          'format' => NULL,
          'safe_value' => 'xxl_250plus',
        ),
      ),
    ),
    'parent' => array(
      0 => '08bbc1e3-fa14-400a-b152-527301c7fbd5',
    ),
  );
  $terms[] = array(
    'name' => 'What health and safety services do you use, be it in-house or contracted externally? An occupational health physician',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3efcca2a-ab9d-40a2-9261-fb568bc3a755',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'mm1501',
          'format' => NULL,
          'safe_value' => 'mm1501',
        ),
      ),
    ),
    'parent' => array(
      0 => '2296c16d-a640-4a58-a706-cc4cb6a97873',
    ),
  );
  $terms[] = array(
    'name' => 'Total',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '47c211e6-1e02-4f9b-923d-e393bed438d4',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'total',
          'format' => NULL,
          'safe_value' => 'total',
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebc6adcd-8ea3-421a-b90c-6f183779e503',
    ),
  );
  $terms[] = array(
    'name' => 'Sector',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 26,
    'uuid' => '4c28b839-d334-4d34-aede-f19b9be64da7',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'sector',
          'format' => NULL,
          'safe_value' => 'sector',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Private Services',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4ffe7d72-7a31-431c-9afc-0f75ddbe6953',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'private',
          'format' => NULL,
          'safe_value' => 'private',
        ),
      ),
    ),
    'parent' => array(
      0 => '59e03a87-e4fa-4dac-8d4f-f8b176592482',
    ),
  );
  $terms[] = array(
    'name' => 'By Sector',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '59e03a87-e4fa-4dac-8d4f-f8b176592482',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'by_sector',
          'format' => NULL,
          'safe_value' => 'by_sector',
        ),
      ),
    ),
    'parent' => array(
      0 => '4c28b839-d334-4d34-aede-f19b9be64da7',
    ),
  );
  $terms[] = array(
    'name' => 'Country',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 28,
    'uuid' => '5be75246-9d80-4ece-85d1-4f1cbcd88b99',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'country',
          'format' => NULL,
          'safe_value' => 'country',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'DK/NA',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '61c41a76-f4af-4ab5-a8d2-72b0e7283524',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'dk_na',
          'format' => NULL,
          'safe_value' => 'dk_na',
        ),
      ),
    ),
    'parent' => array(
      0 => '8129a274-a029-4b84-9803-8740bdebe1aa',
    ),
  );
  $terms[] = array(
    'name' => 'Total',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6c1066ae-a3b9-49ce-aa13-ac49ff7648bb',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'total',
          'format' => NULL,
          'safe_value' => 'total',
        ),
      ),
    ),
    'parent' => array(
      0 => '868061d0-746f-4e87-91f0-a197fe613e7c',
    ),
  );
  $terms[] = array(
    'name' => 'Answer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 24,
    'uuid' => '7a32d0d3-aa38-4a32-8f1c-13d97982b0c0',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'answer',
          'format' => NULL,
          'safe_value' => 'answer',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Medium Enterprises',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '7fc5017f-3d58-4154-a04e-4948f6da4296',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'l50_249',
          'format' => NULL,
          'safe_value' => 'l50_249',
        ),
      ),
    ),
    'parent' => array(
      0 => '08bbc1e3-fa14-400a-b152-527301c7fbd5',
    ),
  );
  $terms[] = array(
    'name' => 'Yes No',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8129a274-a029-4b84-9803-8740bdebe1aa',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'yes_no',
          'format' => NULL,
          'safe_value' => 'yes_no',
        ),
      ),
    ),
    'parent' => array(
      0 => '7a32d0d3-aa38-4a32-8f1c-13d97982b0c0',
    ),
  );
  $terms[] = array(
    'name' => 'Total',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '83d0a9c6-74ae-4636-8feb-d2f01dfd3939',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'total',
          'format' => NULL,
          'safe_value' => 'total',
        ),
      ),
    ),
    'parent' => array(
      0 => '47c211e6-1e02-4f9b-923d-e393bed438d4',
    ),
  );
  $terms[] = array(
    'name' => 'Total',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '868061d0-746f-4e87-91f0-a197fe613e7c',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'total',
          'format' => NULL,
          'safe_value' => 'total',
        ),
      ),
    ),
    'parent' => array(
      0 => '4c28b839-d334-4d34-aede-f19b9be64da7',
    ),
  );
  $terms[] = array(
    'name' => 'Romania',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '9f2cfcba-0fb4-451b-927d-077aa01be9a4',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'RO',
          'format' => NULL,
          'safe_value' => 'RO',
        ),
      ),
    ),
    'parent' => array(
      0 => '5be75246-9d80-4ece-85d1-4f1cbcd88b99',
    ),
  );
  $terms[] = array(
    'name' => 'Bulgaria',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'b62d73d3-5114-46fd-bf91-b116cd8c14f9',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'BG',
          'format' => NULL,
          'safe_value' => 'BG',
        ),
      ),
    ),
    'parent' => array(
      0 => '5be75246-9d80-4ece-85d1-4f1cbcd88b99',
    ),
  );
  $terms[] = array(
    'name' => 'Production Sector',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'bcae9cf9-f4d0-4824-9646-84614044e2fb',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'production',
          'format' => NULL,
          'safe_value' => 'production',
        ),
      ),
    ),
    'parent' => array(
      0 => '59e03a87-e4fa-4dac-8d4f-f8b176592482',
    ),
  );
  $terms[] = array(
    'name' => 'Health and safety risks in the establishment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'be89494d-542f-4eb5-acb6-8f36945ace60',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'hsre',
          'format' => NULL,
          'safe_value' => 'hsre',
        ),
      ),
    ),
    'parent' => array(
      0 => '1ee012ec-f003-40aa-b50b-abd4bede9d7e',
    ),
  );
  $terms[] = array(
    'name' => 'Yes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd0f64d12-ecf6-4e0a-ab9e-c7c7bb900e80',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'yes',
          'format' => NULL,
          'safe_value' => 'yes',
        ),
      ),
    ),
    'parent' => array(
      0 => '8129a274-a029-4b84-9803-8740bdebe1aa',
    ),
  );
  $terms[] = array(
    'name' => 'No',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'd5469a07-79cb-439c-9073-6e1efd0658f9',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'no',
          'format' => NULL,
          'safe_value' => 'no',
        ),
      ),
    ),
    'parent' => array(
      0 => '8129a274-a029-4b84-9803-8740bdebe1aa',
    ),
  );
  $terms[] = array(
    'name' => 'Public Services',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'dd2d2e64-dc61-4f90-8b6d-e21b1c1e3282',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'public',
          'format' => NULL,
          'safe_value' => 'public',
        ),
      ),
    ),
    'parent' => array(
      0 => '59e03a87-e4fa-4dac-8d4f-f8b176592482',
    ),
  );
  $terms[] = array(
    'name' => 'Size',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 25,
    'uuid' => 'ebc6adcd-8ea3-421a-b90c-6f183779e503',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'size',
          'format' => NULL,
          'safe_value' => 'size',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Small Enterprises',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'f095304c-07be-4ff5-80bc-42dd6d561f2f',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'm20_49',
          'format' => NULL,
          'safe_value' => 'm20_49',
        ),
      ),
    ),
    'parent' => array(
      0 => '08bbc1e3-fa14-400a-b152-527301c7fbd5',
    ),
  );
  $terms[] = array(
    'name' => 'Micro Enterprises',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ff17f7e8-6766-43fc-a887-155cc2b4861e',
    'vocabulary_machine_name' => 'esener',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 's10_19',
          'format' => NULL,
          'safe_value' => 's10_19',
        ),
      ),
    ),
    'parent' => array(
      0 => '08bbc1e3-fa14-400a-b152-527301c7fbd5',
    ),
  );
  return $terms;
}
