<?php
/**
  * @name Language
  * @desc Install Languauges and Manage Translations
  * @version v0.1(160710)
  * @author  @xopherdeep
  * @icon applications-education-language.png 
  * @mini language 
  * @link lang
  * @see settings
  * @beta
  * @todo
  **/
class xLang extends Xengine {

	// Adds a language setting to the users profile table. 
	function dbSync(){
		return array(
			'Users' => array(
				'xlang_default'	=> array('Type' => 'varchar(255)')
			)
		);
	}

	function __construct($sdx=null){
		$this->sdx = $sdx;
	}

	function index(){

		return $r;
	}

	function autoRun($X){
		// Language Defaults to English.  
		
		$q = $this->q();
 
		
		// Get language Setting
		if($X->Key['is']['user']){
			$where['id'] = $_SESSION['user']['id'];
			$lang = $q->Select('xlang_default','Users',$where);
		}

		$c = 'config';
		if( empty($lang[0][0]) ){
		 	$lang = $q->Select("config_value",$c,array( "config_option" => 'lang_www')); 
			if( empty($lang) ){
				$lang = 'english';
			}else{
				$lang = $lang[0][0];
			}
		}else{
			$lang = $lang[0][0];
			
		}  

		$lang = $this->readLangDir($lang); 
		
		 

		// $this->dump($lang); 
		if($_SERVER['REQUEST_URI'] != '/.json'){ 

			// Current Method
			$a = 'X'.strtoupper($this->_SET['action']);
			$m = $this->_SET['method']; 

			if($a != 'XINDEX'){
				$l = $lang[$a];

				$talk = $lang[$a][$m];
				$tpl = $lang[$a]['UI'];

				return array(
					'L' => $lang[$a],
					'lan' => array(
						'class' => $l,
						'method' => $m
					),
					'TALK' => $talk,
					'UI' => $tpl,
					'_LANG' => $lang
				); 
			}	
		}

		

		
		// Read File Directory for Language files.  
	}

	private function readLangDir($dir)
	{
		// We should only run this once 
		$langDir = XPHP_DIR.'/xLang/'.$dir.'/';

		//$this->dump(scandir(XPHP_DIR.'/xLang/'.$dir));

		if ($handle = opendir($langDir)) {
			$time = microtime(true); 
			$this->_comment("Loading Language Files..."); 

			while (false !== ($file = readdir($handle))) {
		        if ($file != "." && $file != ".." && !is_dir($file)) {
		            $ext = explode(".",$file); 


					$class = str_replace('.inc','',$file);
					$this->_comment($file);
	            
	            	$this->_comment("Loaded Language File ".$file);
 
	            	require_once($langDir.'/'.$file);
	            	$rc = new ReflectionClass($class);
					$doc = $rc->getDocComment();
					
	            	//$this->dump($doc);
					if($doc){
						$data =  trim(preg_replace('/\r?\n *\* */', ' ', $doc));
						preg_match_all('/@([A-Za-z0-9]+)\s+(.*?)\s*(?=$|@[A-Za-z0-9]+\s)/s', $data, $matches);
						$info = array_combine($matches[1], $matches[2]);
						$ext  = explode('.',$file); 
						
						// Replace string
						// $file = str_replace('Lang', '', $file);
						$file = preg_replace('/Lang/', '', $file, 1);
						$file = str_replace('.inc', '', $file);						

						if (class_exists($class)){
							$class = new $class;  
							$info = array_merge_recursive($info,$class->_LANG);
						}

						$files[strtoupper($file)] = $info;
					}	else{
						$this->_comment("Could not load Language File ".$file);
					}

		            if(strtolower($ext[count($ext)-1]) === 'inc'){
		            	
		            }
		        }
		    }
		    closedir($handle);
			//ksort($files);
			//$this->set('xphp_files',$files);
			//$this->_xtras = $this->_SET['xtras'] = $files;

			$time = round(microtime(true) - $time,5); 
			//$this->_comment("Loaded ".count($files)." Language Files in ".$time);
		} 
		
		return $files;
	}
}
?>
