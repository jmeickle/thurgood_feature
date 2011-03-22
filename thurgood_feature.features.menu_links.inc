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
    'weight' => '-40',
  );
  // Exported menu link: primary-links:bounce/place/search
  $menu_links['primary-links:bounce/place/search'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'bounce/place/search',
    'router_path' => 'bounce',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-39',
  );
  // Exported menu link: primary-links:bounce/roundtables
  $menu_links['primary-links:bounce/roundtables'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'bounce/roundtables',
    'router_path' => 'bounce',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-37',
  );
  // Exported menu link: primary-links:contact
  $menu_links['primary-links:contact'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Get in touch with us.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => 'bounce/roundtables',
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
    'weight' => '-38',
  );
  // Exported menu link: primary-links:event/search
  $menu_links['primary-links:event/search'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'event/search',
    'router_path' => 'event/search',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Use a calendar to search for events by date, region, and tags.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => 'bounce/place/search',
  );
  // Exported menu link: primary-links:place/search
  $menu_links['primary-links:place/search'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'place/search',
    'router_path' => 'place/search',
    'link_title' => 'Places',
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
    'weight' => '-39',
    'parent_path' => 'bounce/place/search',
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
    'weight' => '-39',
    'parent_path' => 'bounce/roundtables',
  );
  // Exported menu link: primary-links:website
  $menu_links['primary-links:website'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'website',
    'router_path' => 'website',
    'link_title' => 'Website',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => 'bounce/roundtables',
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
    'weight' => '-34',
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
    'weight' => '-33',
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
    'weight' => '-35',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Contact');
  t('Dashboard');
  t('Events');
  t('Home');
  t('Places');
  t('Roundtables');
  t('Website');
  t('Search');
  t('Login');
  t('Register');
  t('Logout');


  return $menu_links;
}
