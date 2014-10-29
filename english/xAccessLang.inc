<?php
/** 
 * @NEW New<br/>Link
 * @HEAD Empty Space <i class="fa fa-eye-slash"></i>
 * @MSG Only those whom have the key shall pass.
 * @BTN4 ?
 * @BTN5 New
 * @BTN6 Load Blueprint
 * @BTN7 Save
 * @BTN8 Load Box
 * @DELETEBTN Remove<br/>Section
 * @blah
 */
class xAccessLang {
	// Used for Complex values.
	var $_LANG = array(
		'emails'		=> array(
			'key' => array(
				'sub' => " has given you a Key to ",
				'msg' => "Hello1"
			)
		),
		'ICON' => 'fa-lock',
		'JUMBO' => array(

			'HEAD' => "Locks to the Kingdom",
			'QUOTE' => 'Manage Locks to be sure how you want to grant access to throughout your domain.',
			'BTN'	=> array(
				'windKeys'	=> array(
					'a' => '<i class="fa fa-flag"></i>  Entry Lock  &nbsp; ',
					'class' => 'btn-info'
				),
				'earthKeys'	=> array(
					'a' => '<i class="fa fa-leaf"></i>  Green Lock  &nbsp; ',
					'class' => 'btn-success'
				),
				'waterKeys'	=> array(
					'a' => '<i class="fa fa-user-md"></i>  Blue Lock  &nbsp; ',
					'class' => 'btn-info'
				),
				'fireKeys'	=> array(
					'a' => '<i class="fa fa-fire"></i>  Red Lock  &nbsp; ',
					'class' => 'btn-danger'
				),
				'masterKeys'	=> array(
					'a' => '<i class="fa fa-lock"></i> Master Lock &nbsp; ',
					'class' => 'btn-warning'
				)
			)
		),
		'keys' => array(
			'ICON' => 'fa-key',
			'JUMBO' => array(
				'HEAD' => 'Keys to the Kingdom',
				'QUOTE' => 'Create Keys to invite those whom you wish to grant such access to your domain.',
				'BTN'	=> array(
					'shelves'	=> array(
						'a' => '<i class="fa fa-book"></i> Catalog &nbsp; ',
						'class' => 'btn-info'
					),
					//'products'	=> '<i class="fa fa-coffee"></i> Products & Serives &nbsp; ',
					'orders'	=> array(
						'a' => '<i class="fa fa-truck"></i> Orders &nbsp; ',
						'class' => 'btn-success'
					)
				),
				'catalog' => array(
					''
				)
			)
		)

	);
}
?>