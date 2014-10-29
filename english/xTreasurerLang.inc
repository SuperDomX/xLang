<?php
/** 
 */
class xTreasurerLang {
	// Used for Complex values.
	var $_LANG = array(
		'ICON'  => 'fa-credit-card',	
		'JUMBO' => array( 
			'HEAD' => 'Treasurer',
			'QUOTE' => 'Control how money is collected online.',
			'BTN'	=> array(
				// 'settings'	=> array(
					// 	'a'     => '<i class="fa fa-gear"></i> Settings &nbsp; ',
					// 	'class' => 'btn-info btn-sm'
				// ),
				// 'shipments'	=> array(
					// 	'a'     => '<i class="fa fa-truck"></i> Shipments &nbsp; ',
					// 	'class' => 'btn-danger'
				// )
			)
		),
		'settings' => array(
			'ICON'  => 'fa-money',
			'JUMBO' => array(
				'HEAD' => 'P.O.S. Settings',
				'QUOTE' => 'Collect payments through Paypal & Stripe',	
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
			),
			'input' => array(
				'paypal_email' => array( 
					'txt'  => '',
					'desc' => 'Enter the main email address that will be collecting funds through paypal.',
					'icon' => 'fa fa-envelope',
				),
				'stripe_live_test' => array(
					'txt'  => 'Stripe Test or Live',
					'desc' => 'Turn to test mode to test fake credit card numbers and trasactions. Switch to LIVE when ready to accept real cards.',
					'type' => 'radio',
					'icon' => 'fa fa-credit-card',
					'labels' => array(
						array(
							'txt' => 'Live',
							'value' => 'live'
						),
						array(
							'txt' => 'Test',
							'value' => 'test'
						),
						array(
							'txt' => 'Off',
							'value' => false
						)
					)
				),
				'stripe_test_secret'  => array(
					'txt'  => '',
					'href' => 'https://dashboard.stripe.com/account/apikeys',
					'icon' => 'fa fa-lock',
				),
				'stripe_test_publish' => array(
					'txt'  => '',
					'href' => 'https://dashboard.stripe.com/account/apikeys',
					'icon' => 'fa fa-key fa-rotate-90',
				),
				'stripe_live_secret'  => array(
					'txt'  => '',
					'href' => 'https://dashboard.stripe.com/account/apikeys',
					'icon' => 'fa fa-lock',
				),
				'stripe_live_publish'  => array(
					'txt'  => '',
					'href' => 'https://dashboard.stripe.com/account/apikeys',
					'icon' => 'fa fa-key',
				)
			)
		) 
	);
}
?>