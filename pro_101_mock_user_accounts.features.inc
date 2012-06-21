<?php
/**
 * @file
 * pro_101_mock_user_accounts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_mock_user_accounts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
