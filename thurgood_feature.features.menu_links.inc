<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function thurgood_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Return to the front page of the site.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:about
  $menu_links['primary-links:about'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'Information about the ctreentry.info website.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: primary-links:dashboard
  $menu_links['primary-links:dashboard'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'The starting point for adding content to the site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: primary-links:logout
  $menu_links['primary-links:logout'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => 'Log out of your account. You will need to log back in to create site content.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: primary-links:place/search
  $menu_links['primary-links:place/search'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'place/search',
    'router_path' => 'place/search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => 'Use a map to search for resources that meet your needs.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: primary-links:roundtables
  $menu_links['primary-links:roundtables'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'roundtables',
    'router_path' => 'roundtables',
    'link_title' => 'Roundtables',
    'options' => array(
      'attributes' => array(
        'title' => 'More information about the Reentry Roundtables located in Connecticut.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:user/login
  $menu_links['primary-links:user/login'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => 'Log in to your existing site account.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: primary-links:user/register
  $menu_links['primary-links:user/register'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new site account.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Dashboard');
  t('Home');
  t('Logout');
  t('Roundtables');
  t('Search');
  t('Login');
  t('Register');


  return $menu_links;
}
