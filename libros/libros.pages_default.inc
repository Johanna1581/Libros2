<?php
/**
 * @file
 * libros.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function libros_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_ffd0bc68-6371-4a54-8a33-529c8a6e4487';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Libros',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:libros:field_autor',
          'settings' => array(
            'field_autor' => array(
              'und' => array(),
            ),
            'field_autor_value' => array(),
            'field_autor_format' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:libros:body',
          'settings' => array(
            'body' => array(
              'und' => array(),
            ),
            'body_value' => array(),
            'body_summary' => array(),
            'body_format' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:libros:field_isbn',
          'settings' => array(
            'field_isbn' => array(
              'und' => array(),
            ),
            'field_isbn_value' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:libros:field_image',
          'settings' => array(
            'type' => array(),
          ),
          'context' => '',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '09971ccf-aabd-44b9-bfc9-0e6f6e1add22';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_ffd0bc68-6371-4a54-8a33-529c8a6e4487';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0e26add8-1901-42b3-aa67-4fc4b5cab480';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0e26add8-1901-42b3-aa67-4fc4b5cab480';
  $display->content['new-0e26add8-1901-42b3-aa67-4fc4b5cab480'] = $pane;
  $display->panels['left'][0] = 'new-0e26add8-1901-42b3-aa67-4fc4b5cab480';
  $pane = new stdClass();
  $pane->pid = 'new-0f09d364-a895-453e-9ec0-1790ae0071cd';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0f09d364-a895-453e-9ec0-1790ae0071cd';
  $display->content['new-0f09d364-a895-453e-9ec0-1790ae0071cd'] = $pane;
  $display->panels['left'][1] = 'new-0f09d364-a895-453e-9ec0-1790ae0071cd';
  $pane = new stdClass();
  $pane->pid = 'new-84898de5-a6f9-4419-b71e-f3bf25fb6faa';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_autor';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '84898de5-a6f9-4419-b71e-f3bf25fb6faa';
  $display->content['new-84898de5-a6f9-4419-b71e-f3bf25fb6faa'] = $pane;
  $display->panels['right'][0] = 'new-84898de5-a6f9-4419-b71e-f3bf25fb6faa';
  $pane = new stdClass();
  $pane->pid = 'new-786bc109-2dcf-4546-9557-a4211e7c5cee';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_isbn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '786bc109-2dcf-4546-9557-a4211e7c5cee';
  $display->content['new-786bc109-2dcf-4546-9557-a4211e7c5cee'] = $pane;
  $display->panels['right'][1] = 'new-786bc109-2dcf-4546-9557-a4211e7c5cee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_ffd0bc68-6371-4a54-8a33-529c8a6e4487'] = $handler;

  return $export;
}
