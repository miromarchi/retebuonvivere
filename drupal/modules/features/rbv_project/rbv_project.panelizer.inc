<?php
/**
 * @file
 * rbv_project.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function rbv_project_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'progetti
%node:title',
    'panels_breadcrumbs_paths' => 'progetti',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a66e9ea4-f4c7-4da7-91a1-653242bac6b8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4d911a70-1c61-4935-ae4d-7e464bbe1e82';
    $pane->panel = 'contentmain';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4d911a70-1c61-4935-ae4d-7e464bbe1e82';
    $display->content['new-4d911a70-1c61-4935-ae4d-7e464bbe1e82'] = $pane;
    $display->panels['contentmain'][0] = 'new-4d911a70-1c61-4935-ae4d-7e464bbe1e82';
    $pane = new stdClass();
    $pane->pid = 'new-ccbf2ba5-ecb5-4360-890a-4ef91b4340e4';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_view_graph-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'override_title' => '',
      'override_title_text' => '',
      'widget_title' => 'Rete',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ccbf2ba5-ecb5-4360-890a-4ef91b4340e4';
    $display->content['new-ccbf2ba5-ecb5-4360-890a-4ef91b4340e4'] = $pane;
    $display->panels['sidebar'][0] = 'new-ccbf2ba5-ecb5-4360-890a-4ef91b4340e4';
    $pane = new stdClass();
    $pane->pid = 'new-19fcee49-ebb7-40eb-8fc7-9da4a729de02';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'vmode_group_content',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Organizzazione promotrice',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '19fcee49-ebb7-40eb-8fc7-9da4a729de02';
    $display->content['new-19fcee49-ebb7-40eb-8fc7-9da4a729de02'] = $pane;
    $display->panels['sidebar'][1] = 'new-19fcee49-ebb7-40eb-8fc7-9da4a729de02';
    $pane = new stdClass();
    $pane->pid = 'new-d7aa5e19-3e26-4f9f-b8a8-e408347acace';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_view_projectcollaborations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd7aa5e19-3e26-4f9f-b8a8-e408347acace';
    $display->content['new-d7aa5e19-3e26-4f9f-b8a8-e408347acace'] = $pane;
    $display->panels['sidebar'][2] = 'new-d7aa5e19-3e26-4f9f-b8a8-e408347acace';
    $pane = new stdClass();
    $pane->pid = 'new-40e5ff09-461a-4ae7-a30b-6ac557c66c7d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_view_projectcollaborations-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'vmode_group_content',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => 0,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '40e5ff09-461a-4ae7-a30b-6ac557c66c7d';
    $display->content['new-40e5ff09-461a-4ae7-a30b-6ac557c66c7d'] = $pane;
    $display->panels['sidebar'][3] = 'new-40e5ff09-461a-4ae7-a30b-6ac557c66c7d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:project:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bd6cc581-2e5f-497b-ab4c-bb8c7cd4a23a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-97c96b1f-f860-4e9f-bee8-3f573668101c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '97c96b1f-f860-4e9f-bee8-3f573668101c';
    $display->content['new-97c96b1f-f860-4e9f-bee8-3f573668101c'] = $pane;
    $display->panels['center'][0] = 'new-97c96b1f-f860-4e9f-bee8-3f573668101c';
    $pane = new stdClass();
    $pane->pid = 'new-2cd7ca46-1f88-4d0f-8633-469db83d8f3d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_access';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2cd7ca46-1f88-4d0f-8633-469db83d8f3d';
    $display->content['new-2cd7ca46-1f88-4d0f-8633-469db83d8f3d'] = $pane;
    $display->panels['center'][1] = 'new-2cd7ca46-1f88-4d0f-8633-469db83d8f3d';
    $pane = new stdClass();
    $pane->pid = 'new-64ae2e98-1844-43b4-9d83-d41aedf20497';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'thumbnail',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '64ae2e98-1844-43b4-9d83-d41aedf20497';
    $display->content['new-64ae2e98-1844-43b4-9d83-d41aedf20497'] = $pane;
    $display->panels['center'][2] = 'new-64ae2e98-1844-43b4-9d83-d41aedf20497';
    $pane = new stdClass();
    $pane->pid = 'new-3c8a172c-d316-4c75-8b26-f740162bb7db';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_tagline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c8a172c-d316-4c75-8b26-f740162bb7db';
    $display->content['new-3c8a172c-d316-4c75-8b26-f740162bb7db'] = $pane;
    $display->panels['center'][3] = 'new-3c8a172c-d316-4c75-8b26-f740162bb7db';
    $pane = new stdClass();
    $pane->pid = 'new-1c7d5e49-54b2-4f0f-96d2-d1ca11b18f1e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1c7d5e49-54b2-4f0f-96d2-d1ca11b18f1e';
    $display->content['new-1c7d5e49-54b2-4f0f-96d2-d1ca11b18f1e'] = $pane;
    $display->panels['center'][4] = 'new-1c7d5e49-54b2-4f0f-96d2-d1ca11b18f1e';
    $pane = new stdClass();
    $pane->pid = 'new-9a9f58fc-4ff3-4abd-9b66-dca9e0777f7a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_more_contacts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a9f58fc-4ff3-4abd-9b66-dca9e0777f7a';
    $display->content['new-9a9f58fc-4ff3-4abd-9b66-dca9e0777f7a'] = $pane;
    $display->panels['center'][5] = 'new-9a9f58fc-4ff3-4abd-9b66-dca9e0777f7a';
    $pane = new stdClass();
    $pane->pid = 'new-59f1af60-c548-4fc1-986b-d03897fc6652';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59f1af60-c548-4fc1-986b-d03897fc6652';
    $display->content['new-59f1af60-c548-4fc1-986b-d03897fc6652'] = $pane;
    $display->panels['center'][6] = 'new-59f1af60-c548-4fc1-986b-d03897fc6652';
    $pane = new stdClass();
    $pane->pid = 'new-7598c5f1-0510-48b1-b32d-43d85fd3c77f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_telephone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7598c5f1-0510-48b1-b32d-43d85fd3c77f';
    $display->content['new-7598c5f1-0510-48b1-b32d-43d85fd3c77f'] = $pane;
    $display->panels['center'][7] = 'new-7598c5f1-0510-48b1-b32d-43d85fd3c77f';
    $pane = new stdClass();
    $pane->pid = 'new-67c9634a-9c77-49f3-9362-01f8126ef8ca';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_mission';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67c9634a-9c77-49f3-9362-01f8126ef8ca';
    $display->content['new-67c9634a-9c77-49f3-9362-01f8126ef8ca'] = $pane;
    $display->panels['center'][8] = 'new-67c9634a-9c77-49f3-9362-01f8126ef8ca';
    $pane = new stdClass();
    $pane->pid = 'new-58bd19c1-7fd9-40af-b54e-3296716caa9e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58bd19c1-7fd9-40af-b54e-3296716caa9e';
    $display->content['new-58bd19c1-7fd9-40af-b54e-3296716caa9e'] = $pane;
    $display->panels['center'][9] = 'new-58bd19c1-7fd9-40af-b54e-3296716caa9e';
    $pane = new stdClass();
    $pane->pid = 'new-0f73a63e-fb6a-404b-bc65-141a3ac21e43';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f73a63e-fb6a-404b-bc65-141a3ac21e43';
    $display->content['new-0f73a63e-fb6a-404b-bc65-141a3ac21e43'] = $pane;
    $display->panels['center'][10] = 'new-0f73a63e-fb6a-404b-bc65-141a3ac21e43';
    $pane = new stdClass();
    $pane->pid = 'new-7556b2b6-7a3e-4ffc-9949-cf01287395af';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_foundingdate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7556b2b6-7a3e-4ffc-9949-cf01287395af';
    $display->content['new-7556b2b6-7a3e-4ffc-9949-cf01287395af'] = $pane;
    $display->panels['center'][11] = 'new-7556b2b6-7a3e-4ffc-9949-cf01287395af';
    $pane = new stdClass();
    $pane->pid = 'new-100a8fe4-decb-45c7-94a6-92318c91fb78';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_history';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '100a8fe4-decb-45c7-94a6-92318c91fb78';
    $display->content['new-100a8fe4-decb-45c7-94a6-92318c91fb78'] = $pane;
    $display->panels['center'][12] = 'new-100a8fe4-decb-45c7-94a6-92318c91fb78';
    $pane = new stdClass();
    $pane->pid = 'new-70c46dae-7ed0-4e69-94f6-c69b9819bc7e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70c46dae-7ed0-4e69-94f6-c69b9819bc7e';
    $display->content['new-70c46dae-7ed0-4e69-94f6-c69b9819bc7e'] = $pane;
    $display->panels['center'][13] = 'new-70c46dae-7ed0-4e69-94f6-c69b9819bc7e';
    $pane = new stdClass();
    $pane->pid = 'new-5fa52de6-5879-4c20-a959-0d3cf3a4564f';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5fa52de6-5879-4c20-a959-0d3cf3a4564f';
    $display->content['new-5fa52de6-5879-4c20-a959-0d3cf3a4564f'] = $pane;
    $display->panels['center'][14] = 'new-5fa52de6-5879-4c20-a959-0d3cf3a4564f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5fa52de6-5879-4c20-a959-0d3cf3a4564f';
  $panelizer->display = $display;
  $export['node:project:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project:default:vmode_group_content';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'vmode_group_content';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '17285cfe-9a40-468b-a4c6-244367e80972';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9e980ea-e37a-4ff6-a727-c0c43d5a533e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_tagline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9e980ea-e37a-4ff6-a727-c0c43d5a533e';
    $display->content['new-a9e980ea-e37a-4ff6-a727-c0c43d5a533e'] = $pane;
    $display->panels['center'][0] = 'new-a9e980ea-e37a-4ff6-a727-c0c43d5a533e';
    $pane = new stdClass();
    $pane->pid = 'new-5868530f-721d-4f2d-8307-bacc9d104c5c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_more_contacts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5868530f-721d-4f2d-8307-bacc9d104c5c';
    $display->content['new-5868530f-721d-4f2d-8307-bacc9d104c5c'] = $pane;
    $display->panels['center'][1] = 'new-5868530f-721d-4f2d-8307-bacc9d104c5c';
    $pane = new stdClass();
    $pane->pid = 'new-7b72b9aa-dbfa-4148-9027-33bb41558ec6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b72b9aa-dbfa-4148-9027-33bb41558ec6';
    $display->content['new-7b72b9aa-dbfa-4148-9027-33bb41558ec6'] = $pane;
    $display->panels['center'][2] = 'new-7b72b9aa-dbfa-4148-9027-33bb41558ec6';
    $pane = new stdClass();
    $pane->pid = 'new-3f54c844-26b3-4a3d-9515-23cf1335ba37';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_telephone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f54c844-26b3-4a3d-9515-23cf1335ba37';
    $display->content['new-3f54c844-26b3-4a3d-9515-23cf1335ba37'] = $pane;
    $display->panels['center'][3] = 'new-3f54c844-26b3-4a3d-9515-23cf1335ba37';
    $pane = new stdClass();
    $pane->pid = 'new-0e4da66a-3a0f-486b-a306-112aa8a7d4a7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e4da66a-3a0f-486b-a306-112aa8a7d4a7';
    $display->content['new-0e4da66a-3a0f-486b-a306-112aa8a7d4a7'] = $pane;
    $display->panels['center'][4] = 'new-0e4da66a-3a0f-486b-a306-112aa8a7d4a7';
    $pane = new stdClass();
    $pane->pid = 'new-897d16d1-5e3b-4c35-9f2d-9042b0431f5a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_access';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '897d16d1-5e3b-4c35-9f2d-9042b0431f5a';
    $display->content['new-897d16d1-5e3b-4c35-9f2d-9042b0431f5a'] = $pane;
    $display->panels['center'][5] = 'new-897d16d1-5e3b-4c35-9f2d-9042b0431f5a';
    $pane = new stdClass();
    $pane->pid = 'new-a3160caa-896e-425e-ac0c-589bc75b9f7d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_mission';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3160caa-896e-425e-ac0c-589bc75b9f7d';
    $display->content['new-a3160caa-896e-425e-ac0c-589bc75b9f7d'] = $pane;
    $display->panels['center'][6] = 'new-a3160caa-896e-425e-ac0c-589bc75b9f7d';
    $pane = new stdClass();
    $pane->pid = 'new-c2193ab4-4460-4a67-a10c-ed89a0bad29a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'thumbnail',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2193ab4-4460-4a67-a10c-ed89a0bad29a';
    $display->content['new-c2193ab4-4460-4a67-a10c-ed89a0bad29a'] = $pane;
    $display->panels['center'][7] = 'new-c2193ab4-4460-4a67-a10c-ed89a0bad29a';
    $pane = new stdClass();
    $pane->pid = 'new-4ba9c892-2e13-4ba3-bde5-7856714e5de7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4ba9c892-2e13-4ba3-bde5-7856714e5de7';
    $display->content['new-4ba9c892-2e13-4ba3-bde5-7856714e5de7'] = $pane;
    $display->panels['center'][8] = 'new-4ba9c892-2e13-4ba3-bde5-7856714e5de7';
    $pane = new stdClass();
    $pane->pid = 'new-042a264c-30ec-45d7-bf7c-9e3c6d6fb96f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '042a264c-30ec-45d7-bf7c-9e3c6d6fb96f';
    $display->content['new-042a264c-30ec-45d7-bf7c-9e3c6d6fb96f'] = $pane;
    $display->panels['center'][9] = 'new-042a264c-30ec-45d7-bf7c-9e3c6d6fb96f';
    $pane = new stdClass();
    $pane->pid = 'new-c340fdfc-affb-477b-bbb2-54f8388b4e7a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_foundingdate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c340fdfc-affb-477b-bbb2-54f8388b4e7a';
    $display->content['new-c340fdfc-affb-477b-bbb2-54f8388b4e7a'] = $pane;
    $display->panels['center'][10] = 'new-c340fdfc-affb-477b-bbb2-54f8388b4e7a';
    $pane = new stdClass();
    $pane->pid = 'new-b5f0626d-4e0a-4fea-a5f3-5a6f2bdd3de9';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_history';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5f0626d-4e0a-4fea-a5f3-5a6f2bdd3de9';
    $display->content['new-b5f0626d-4e0a-4fea-a5f3-5a6f2bdd3de9'] = $pane;
    $display->panels['center'][11] = 'new-b5f0626d-4e0a-4fea-a5f3-5a6f2bdd3de9';
    $pane = new stdClass();
    $pane->pid = 'new-996e29d7-36a1-44bb-9f83-d8ab0e3ab204';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '996e29d7-36a1-44bb-9f83-d8ab0e3ab204';
    $display->content['new-996e29d7-36a1-44bb-9f83-d8ab0e3ab204'] = $pane;
    $display->panels['center'][12] = 'new-996e29d7-36a1-44bb-9f83-d8ab0e3ab204';
    $pane = new stdClass();
    $pane->pid = 'new-6f4decb1-cb8f-4566-a799-89b7764cbea6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f4decb1-cb8f-4566-a799-89b7764cbea6';
    $display->content['new-6f4decb1-cb8f-4566-a799-89b7764cbea6'] = $pane;
    $display->panels['center'][13] = 'new-6f4decb1-cb8f-4566-a799-89b7764cbea6';
    $pane = new stdClass();
    $pane->pid = 'new-06ed3324-6a6b-448c-b60c-837848a7512d';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'vmode_group_content',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06ed3324-6a6b-448c-b60c-837848a7512d';
    $display->content['new-06ed3324-6a6b-448c-b60c-837848a7512d'] = $pane;
    $display->panels['center'][14] = 'new-06ed3324-6a6b-448c-b60c-837848a7512d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-06ed3324-6a6b-448c-b60c-837848a7512d';
  $panelizer->display = $display;
  $export['node:project:default:vmode_group_content'] = $panelizer;

  return $export;
}
