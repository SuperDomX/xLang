<?php
/** 
 * @BTN1 New<br/>Section
 * @BTN2 Copy<br/>Section
 * @BTN3 ReDraw<br/>Section
 * @BTN4 ?
 * @BTN5 New
 * @BTN6 Load Blueprint
 * @BTN7 Save
 * @BTN8 Load Box
 * @DELETEBTN Remove<br/>Section
 * @blah
 */
class xUsersLang {
	// Used for Complex values.
	var $_LANG = array(
		'USERS' => array(
			'cover' => array(
				'name' => 'Coversheet',
				'desc' => 'Every great Website deserves a professionally sexy coverpage',
				'icon' => ''
			),
		),
		'ICON' => 'fa-group',
		'JUMBO' => array( 
			'HEAD' => 'Who\'s Online Anyway?',
			'QUOTE' => 'A great Host makes sure their company is well kept.',
			'BTN'	=> array( 
				
				'read'	=> array(
					'a' => '<i class="fa fa-book"></i>  Master List',
					'class' => 'btn-info'
				),
				'create'	=> array(
					'a' => '<i class="fa fa-cube"></i>  Create User ',
					'class' => 'btn-success'
				),
				'update'	=> array(
					'a' => '<i class="fa fa-cubes"></i>  Manage Roles ',
					'class' => 'btn-primary'
				),
				'delete'	=> array(
					'a' 	=> '<i class="fa fa-bomb"></i>   Delete/Ban User',
					'class' => 'btn-danger'
				),
			)
		),
		'create'=> array(
			'ICON' => 'fa-cube',
			'JUMBO' => array( 
				'HEAD' => 'Create a New Blox',
				'QUOTE' => 'Blox are made up of HTML, CSS, Javascript, with a Splash of Server Side Power.' 
			),
			'input' => array(
				'html','css','js'
			)
		),
		'read'=> array(
			'ICON' => 'fa-book',
			'JUMBO' => array( 
				'HEAD' => 'Countless Numbers of Blox',
				'QUOTE' => 'The Nexus is Home to a Million Blox. Be sure to find your favorite ones.' 
			)
		),
		'update'=> array(
			'ICON' => 'fa-cubes',
			'JUMBO' => array( 
				'HEAD' => 'Edit Blox to Your Liking',
				'QUOTE' => 'Change a Blox the way You want it to behave.' 
			)
		),
		'delete'=> array(
			'ICON' => 'fa-bomb',
			'JUMBO' => array( 
				'HEAD' => 'Delete Blox',
				'QUOTE' => 'Jump right in! Become aquainted with the many different blocks to use to build your Kingdom.' 
			)
		)

	);
}
?>