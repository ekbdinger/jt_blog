<?php
/**
 * @file
 * jt_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jt_blog_user_default_roles() {
  $roles = array();

  // Exported role: Blog contributor.
  $roles['Blog contributor'] = array(
    'name' => 'Blog contributor',
    'weight' => '3',
  );

  return $roles;
}
