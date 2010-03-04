<?php
// $Id$

/**
 * @file
 * Defines administative functions.
 *
 */
 
 
 
/**
 * Used to define Time Limit module settings form
 */ 
function time_limit_settings() {
  $form = array();
  
  $form['time_limit_time'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Time limit'),
    '#description'    => t('(in seconds)'),
    '#default_value'  => variable_get('time_limit_time', 300),
  );

  $form['time_limit_landing_page'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Landing page'),
    '#description'    => t('Use internal path for page on which user will be redirect after time limit.'),
    '#default_value'  => variable_get('time_limit_landing_page', 'user/register'),
  );

  $form['time_limit_message'] = array(
    '#type'           => 'textarea',
    '#title'          => t('Limit message'),
    '#description'    => t('This message will be shown after redirecting user to landing page.'),
    '#default_value'  => variable_get('time_limit_message', 'Please, register or login to continue using of the site.'),
  );

  $form['time_limit_exclude'] = array(
    '#type'           => 'textarea',
    '#title'          => t('Exclude paths'),
    '#description'    => t('Place internal paths where module should not work. One path per line.'),
    '#default_value'  => variable_get('time_limit_exclude', "user/register\nuser/register\nuser/password"),
  );

  return system_settings_form($form);
}
