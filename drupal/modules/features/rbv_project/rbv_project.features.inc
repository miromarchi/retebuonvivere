<?php
/**
 * @file
 * rbv_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rbv_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Progetto/attività'),
      'base' => 'node_content',
      'description' => t('Un progetto o attività iniziata dalla propria organizzazione. '),
      'has_title' => '1',
      'title_label' => t('Nome'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function rbv_project_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: project
  $schemaorg['node']['project'] = array(
    'rdftype' => array(
      0 => 'schema:Organization/Project',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_com_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
      'type' => 'rel',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_com_tagline' => array(
      'predicates' => array(
        0 => 'schema:slogan',
      ),
    ),
    'field_com_foundingdate' => array(
      'predicates' => array(
        0 => 'schema:foundingDate',
      ),
    ),
    'field_com_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
      ),
    ),
    'field_com_categories' => array(
      'predicates' => array(
        0 => 'schema:issueArea',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
      'type' => 'rel',
    ),
    'field_com_mission' => array(
      'predicates' => array(
        0 => 'schema:mission',
      ),
    ),
    'field_com_history' => array(
      'predicates' => array(
        0 => 'schema:history',
      ),
    ),
    'field_com_location' => array(
      'predicates' => array(
        0 => 'schema:address',
      ),
    ),
    'field_com_email' => array(
      'predicates' => array(
        0 => 'schema:email',
      ),
    ),
    'field_com_phone' => array(
      'predicates' => array(
        0 => 'schema:telephone',
      ),
    ),
    'field_com_more_contacts' => array(
      'predicates' => array(
        0 => 'schema:otherContacts',
      ),
    ),
    'field_com_tags' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
      'type' => 'rel',
    ),
    'field_com_telephone' => array(
      'predicates' => array(
        0 => 'schema:telephone',
      ),
    ),
    'field_collaborates_on' => array(
      'predicates' => array(),
    ),
    'og_group_ref' => array(
      'predicates' => array(
        0 => 'schema:sourceOrganization',
      ),
    ),
    'field_com_social_links' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
    ),
    'field_com_date' => array(
      'predicates' => array(
        0 => 'schema:foundingDate',
      ),
    ),
    'field_com_scope' => array(
      'predicates' => array(
        0 => 'schema:scope',
      ),
      'type' => 'rel',
    ),
    'field_com_more' => array(
      'predicates' => array(
        0 => 'schema:moreContacts',
      ),
    ),
    'field_quick_links_links' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
    ),
  );

  return $schemaorg;
}
