<?php
/** 
 * @TITLE YouMeOS
 * @YOU OmniSelf
 * @OMNISELF Omni Self
 * @open Open Sesame
 * @login Who... R U?
 * @BTN7 Save
 * @BTN8 Load Box
 * @DELETEBTN Remove<br/>Section
 * @blah
 * @whatever THisis the value of whatver.
 */
class xYouMeOSLang {
	// Used for Complex values.
	var $_LANG = [
		'methods' => [ 
			'I' => [
				'col' => [[
					'col' => 'col-md-12',
					'type'  => 'bulletin',
					'html' 	=> [ 
						'h1' => [
							// 'i'	 => [
							// 	'class' => 'icon fa-3x pull-right',
							// 	'html' => '&#61698;'
							// ],
							'html' => 'Optimal Scope',
						],
						'blockquote' => 'Oversee your whole Web',
						'a' => [
							'html'  => '@whatever',
							'class' => 'btn-info btn-lg btn-alt',
							'attr'  => [
								'data-toggle'  => 'modal', 
								'href'  => '#aboutYou'
							]
						]
					],
				]]
			],
			'omniSelf' => [
				'col' => [[
					'col'   => 'col-md-7',
					'type'  => 'bulletin',
					'html' 	=> [ 
						'h1' => [
							'i'	 => [
								'class' => 'icon fa-3x pull-right',
								'html' => '&#61925;'
							],
							'html' => '@OMNISELF',
						],
						'blockquote' => 'Oragnize your Spectrum',
						'a' => [
							'html'  => '<i class="fa fa-sun-o"></i>',
							'class' => 'btn-info btn-lg btn-alt',
							'attr'  => [
								'data-toggle'  => 'modal', 
								'href'  => '#aboutYou'
							]
						]
					],
				],[
					'col'   => 'col-md-5',
					'type'  => 'widget',
					'title' => 'Ongoing Projects',
					'widget'	=> [

					]
				]],
				'bulletin' => [
					'head' => 'Omni Self',
					'cover'=> '/img/skin-greenish.jpg',
					'icon' => ' <span class="icon pull-right fa-5x">&#61925;</span>',
					'quote'=> 'Control All Spheres',
					'BTN'	=> [
						'aboutYou'	=> [
							// 'html' => '<i class="fa fa-user"></i> &nbsp;',
							'data' => 'data-toggle="modal"', 
							'class' => 'btn-info btn-lg btn-alt',
							'href' => 'aboutYou'
						],
						// 'addSphere'	=> [
						// 	'html' => '<i class="fa fa-plus"></i> Add Sphere&nbsp;',
						// 	// 'data' => 'data-toggle="modal"', 
						// 	'class' => 'btn-info btn-lg btn-alt disable',
						// 	'href' => ''
						// ] 
					]
				],
				'bulletin' => [
					'head' => 'Omni Self',
					'cover'=> '/img/skin-greenish.jpg',
					'icon' => ' <span class="icon pull-right fa-5x">&#61925;</span>',
					// 'quote'=> 'Control All Spheres',
					'BTN'	=> [
						'aboutYou'	=> [
							// 'html' => '<i class="fa fa-user"></i> &nbsp;',
							'data' => 'data-toggle="modal"', 
							'class' => 'btn-info btn-lg btn-alt',
							'href' => 'aboutYou'
						],
						// 'addSphere'	=> [
						// 	'html' => '<i class="fa fa-plus"></i> Add Sphere&nbsp;',
						// 	// 'data' => 'data-toggle="modal"', 
						// 	'class' => 'btn-info btn-lg btn-alt disable',
						// 	'href' => ''
						// ] 
					]
				]
			],
			'aboutYou' => [
				'type'        => 'tabs',
				'title'       => 'OmniSelf',
				'icon'        => 'fa fa-user', 
				'class'       => 'tile',
				// 'vertical' => true, 
				'menu'        => [[
					'title'  => 'Who',
					'icon'   => 'fa fa-user',
					'type'   => 'tabs', 
					'tip'    => 'Tell Me about You.',
					'active' => true,
					'menu'   => [[
						'title'  => 'You',
						'icon'   => 'fa fa-user-md',
						'header' => 'Tell Me about You',
						'quote'  => 'q',
						'type'   => 'ajax',
						
						'active' => true, 
						'input'  => [ 
							
							'name' => [ 
								'txt'  => 'Given Name',
								'desc' => 'This name is only known to you and who you choose to share it with.',
								'icon' => 'fa fa-user-md',
								'col'  => 'col-md-4'
							], 
							'username' => [
								'txt'     => 'Unique Name',
								'tip'     => 'This is your alias, the name of your avatar, your Unique Universe.',
								// 'type' => 'radio',
								'icon'    => 'fa fa-sun-o',
								'col'     => 'col-md-4'
							],
							'email'  => [
								'type'    => 'email',
								'txt'     => '',
								'tip'     => 'This is your email, the contact to this account.',
								// 'href' => 'https://dashboard.stripe.com/account/apikeys',
								'icon'    => 'fa fa-envelope',
								'col'     => 'col-md-4',
							],
							'desc' => [
								'col-md' => '12',
								'type'   => 'textarea',
								'txt'    => 'Describe Yourself',

								'desc' => 'Talk a little about yourself.',
								// 'href'   => 'https://dashboard.stripe.com/account/apikeys',
								'icon'   => 'fa fa-key fa-rotate-90',
							],
						]
					],[
						'title'  => 'Account',
						'icon'   => 'fa fa-key',
						'header' => '',
						'quote'  => '',
						'type'   => 'ajax',

						'tip'    => 'Account',
						'input'  => [
								'test' => [
									'col' => 'col-md-12',
									'txt' => 'im inside',
									'tip' => 'im a tip'	
								],
								'tutor' => [

								// 'txt'  => 'Tutor',
								
								'type' => 'radio',
								'icon' => 'fa fa-graduation-cap',
								'col'  => 'col-md-12',
								'labels' => [
									[
										'txt' => 'Tutor',
										'value' => 'live',
										'tip'  => 'Turn on the Tutor'
									],
									[
										'txt' => 'On',
										'value' => '99',
										'tip'  => 'Turn the Tutor'
									],
									[
										'txt' => 'Off',
										'value' => false,
										'tip'  => 'Turn off the Tutor'
									]
								]
							], 
							// ,
							// 'password'  => [
							// 	'type' => 'password',
							// 	'txt'  => 'Key',
							// 	'tip' => 'This is your Key Combo. String together a set of words that only you would know.',
							// 	// 'href' => 'https://dashboard.stripe.com/account/apikeys',
							// 	'icon' => 'fa fa-key',
							// 	'col'  => 'col-md-4',
							// ]
						]
					]]
				],[
					'title' => 'Where',
					'icon' => 'fa fa-map-marker',
					'tip'    => 'Where you have been in the World?',
					'type' => 'map',
					'menu'	=> [[
						'title' => 'World View', 
					]]
				],[
					'title' => 'When',
					'icon'  => 'fa fa-clock-o',
					'tip'   => 'Important Dates in your Life',
					'menu'  => []
				],[
					'title' => 'What',
					'icon' => 'fa fa-compass',
					'tip'    => 'Content Substance',
					'menu'	=> [[
						'title' => 'Pulse',
						'active' => true,
						'icon' => 'fa fa-heart',
						'type' => 'bulletin',
						'html'=> [
							'div' =>[
							'header'=> 'Explain the Blue Grid.',
							'title' => 'Pulse',
							'icon' => 'fa fa-heart',
							'quote' => 'Your PULSE magnetizes with the overall Heartbeat of the <a href="#/youMeOS/kinnexus" class="tooltips underline" data-toggle="tooltip" title="" data-original-title="The Nexus is your core to all communications">Nexus</a>, making this: Your Own System. Help the nexus help you find your community of action and the entities and projects with whom you resonate most. This is a dynamic field, ever changing, and you can update at any time to help the nexus stay current with your passions, focus, and outward expressions.',
							'select' => 'Share the top 5 one-word qualities that best resonate with and most describe YOU right now.',
							'type' => 'jumbotron'
						]]
					],[
						'title' => 'Reflection',

						'icon' => 'fa fa-eye',
						'header'=> 'What are you seeking...',
						'quote' => 'Your REFLECTION shines back at you that which you seek. Influence how your audience targets your content by showing them what you require, and let the nexus make the match which reunites you with your reflection. Always dynamic, your needs may shift and change, and updating this field regularly keeps the nexus humming along on your behalf.',
						'select' => 'Share the top 5 one-word qualities that best describe what You are currently seeking, in yourself, in your friends and collaborators, or in your personal endeavors.',
						'type' => 'jumbotron'
					]]
					],[
					'title' => 'Why',
					'icon'  => 'fa fa-road', 
					'tip'   => 'Motivation Sauce',
					'menu'	=> [[
						'title'  => 'Passion',
						'icon'   => 'fa fa-fire', 
						'active' => true,
						'header' => 'Inspiration comes from within...',
						'quote'  => 'Influence what gravitates towards you naturally. Please indicate the areas with which you resonate, which you are passionate about and deeply interested in learning more, spending time on, sharing, expounding upon, without any regard to your level of expertise. What do you LOVE and InJoy?',
						'select' => 'Share the top 5 one-word qualities that best describe the Passions which inspire you.',
						'type'   => 'jumbotron'
					],[
						'title'  => 'Purpose',
						'icon'   => 'fa fa-star',
						'header' => 'Driving Momentum...',
						'quote'  => 'What is the PURPOSE which drives you forward? What you enter here will influence the force behind your Expansion. Let the nexus help you find other like-minded kin driven by the same purposes, motivated by the same desires and goals. Together we ceate synergy in symbiosis!',
						'select' => 'Share the top 5 one-word qualities that best describe what motivates YOU and gives you purpose.',
						'type' => 'jumbotron'
					]]
				],[
					'title' => 'How',
					'icon' => 'fa fa-question',
					'type' => 'tabs', 
					'tip'    => 'How you do that thing you do',
					'menu'	=> [[
						'title'   => 'Super Powers',
						'icon'    => 'fa fa-bolt',
						'header'  => 'Fuel the Engine!',
						'active' => 1,
						'quote'   => 'Let us acknowledge the gifts and offerings which make us unique and which we bring to the collective table! Be bold and declare the ways in which you shine! Your strengths add to the collective power and of the overall engine and will help the nexus match you with KIN in need of those strengths.',
						'seclect' => 'Share the top 5 one-word qualities which best describe the Strengths that are the Heart of your Power.',
						'type' => 'jumbotron'
					]]
				]]
			],
			'openSonix' => [
				'col' => [[
					'col' => 'col-md-9',
					'type' => 'bb',
					'title' => 'Bulletin Board',
					'bb' => [
						'type' => 'a',
						'a' => [[
							'class' => 'btn btn-alt btn-sm hidden-xs',
							'tip'   => 'Have a Question? Ask it!',
							
							'i' => [
								'class' => 'fa fa-question', 
								
								'html' => 'Topic',
								// 'small' => [
								// 	'class' => 'label label-success pull-right',
								// 	'html' => ' +5'
								// ]
							],
						],[
							'class' => 'btn btn-alt btn-sm hidden-xs',
							'tip'   => 'Have a Quote? Archive it!',
							
							'i' => [
								'class' => 'fa fa-quote-right',
								'html'  => 'Quote',
								// 'small' => [
								// 	'class' => 'label label-success pull-right',
								// 	'html' => ' +1'
								// ]
							]
						],[
							'class' => 'btn btn-alt btn-sm hidden-xs',
							'tip'   => 'ReQuest? Announce it!',
							'i' => [
								'class' => 'fa fa-bullhorn',
								'html' => 'Bulletin',
								// 'small' => [
								// 	'class' => 'label label-danger pull-right',
								// 	'html' => ' -5'
								// ]
							]
						],[
							'class' => 'btn btn-alt btn-sm hidden-xs',
							'tip'   => 'Back from a Quest? Tell us!',
							'i' => [
								'class' => 'fa fa-star-half-o',
								'html' => 'Testimonial',
								// 'small' => [
								// 	'class' => 'label label-success pull-right',
								// 	'html' => ' +10'
								// ]
							]
						]]
					]
				],[
					'col' => 'col-md-3',
					'type' => 'widget',
					'title' => 'Statistics',
					'widget' => [
						'div' => [
							'inc' => '../../X/xYouMeOS/_user_xstats.tpl'	
						]
					]
				],[
					'col' => 'col-md-5',
					'type' => 'widget',
					'title' => 'Community Forum'
				],[
					'col' => 'col-md-4',
					'type' => 'widget',
					'title' => 'Recent Activity',
				],[
					'col' => 'col-md-3',
					'type' => 'widget',
					'title' => 'Statistics',
				]]
			],
			'kinnexus' => [
				'bulletin' => [
					'head' => 'Orbiting Systems',
					'cover'=> 'kinnexus',
					'icon' => 'fa fa-ge',
					'quote'=> 'Welcome to the Kinnexus; Connect your dots, Empower your Center.',
					'BTN'	=> [
						'kinnexus'	=> [
							'html' => '<i class="fa fa-ge"></i> Add a Nexus &nbsp; ',
							'data' => 'data-toggle="modal"', 
							'class' => 'btn-info btn-lg btn-alt',
							'href' => 'addNexus'
						], 
						'settings'	=> [
							'html' => '<i class="fa fa-gear"></i> Settings &nbsp; ',
							'class' => 'btn-info btn-lg btn-alt'
						]
					]
				]
			]
		]
	];
}
?>