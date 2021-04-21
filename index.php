<?php

/**
 * Copyright (C) 2008-2012 FluxBB
 * based on code by Rickard Andersson copyright (C) 2002-2008 PunBB
 * License: http://www.gnu.org/licenses/gpl.html GPL version 2 or higher
 */

// Tell header.php to use the admin template
define('PUN_ADMIN_CONSOLE', 1);

define('PUN_ROOT', dirname(__FILE__).'/');
require PUN_ROOT.'include/common.php';
require PUN_ROOT.'include/common_admin.php';


if (!$pun_user['is_admmod'])
	message($lang_common['No permission'], false, '403 Forbidden');

// Load the admin_index.php language file
require PUN_ROOT.'lang/'.$admin_language.'/admin_index.php';

$action = isset($_GET['action']) ? $_GET['action'] : null;

// Check for upgrade
if ($action == 'check_upgrade')
{
	if (!ini_get('allow_url_fopen'))
		message($lang_admin_index['fopen disabled message']);

	$latest_version = trim(@file_get_contents('http://fluxbb.org/latest_version'));
	if (empty($latest_version))
		message($lang_admin_index['Upgrade check failed message']);

	if (version_compare($pun_config['o_cur_version'], $latest_version, '>='))
		message($lang_admin_index['Running latest version message']);
	else
		message(sprintf($lang_admin_index['New version available message'], '<a href="http://fluxbb.org/">FluxBB.org</a>'));
}
// Remove install.php
else if ($action == 'remove_install_file')
{
	$deleted = @unlink(PUN_ROOT.'install.php');

	if ($deleted)
		redirect('admin_index.php', $lang_admin_index['Deleted install.php redirect']);
	else
		message($lang_admin_index['Delete install.php failed']);
}

$install_file_exists = is_file(PUN_ROOT.'install.php');

$page_title = array(pun_htmlspecialchars($pun_config['o_board_title']), $lang_admin_common['Admin'], $lang_admin_common['Index']);
define('PUN_ACTIVE_PAGE', 'admin');
require PUN_ROOT.'header.php';

generate_admin_menu('index');

?>
	<div class="block">
		<h2><span><?php echo $lang_admin_index['Forum admin head'] ?></span></h2>
		<div id="adintro" class="box">
			<div class="inbox">
				<p><?php echo $lang_admin_index['Welcome to admin'] ?></p>
				<ul>
					<li><span><?php echo $lang_admin_index['Welcome 1'] ?></span></li>
					<li><span><?php echo $lang_admin_index['Welcome 2'] ?></span></li>
					<li><span><?php echo $lang_admin_index['Welcome 3'] ?></span></li>
					<li><span><?php echo $lang_admin_index['Welcome 4'] ?></span></li>
					<li><span><?php echo $lang_admin_index['Welcome 5'] ?></span></li>
					<li><span><?php echo $lang_admin_index['Welcome 6'] ?></span></li>
					<li><span><?php echo $lang_admin_index['Welcome 7'] ?></span></li>
					<li><span><?php echo $lang_admin_index['Welcome 8'] ?></span></li>
					<li><span><?php echo $lang_admin_index['Welcome 9'] ?></span></li>
					<li><span>Manager users requests.</span></li>
					<li><span>Change loader settings.</span></li>
				</ul>
			</div>
		</div>

<?php if ($install_file_exists) : ?>
		<h2 class="block2"><span><?php echo $lang_admin_index['Alerts head'] ?></span></h2>
		<div id="adalerts" class="box">
			<p><?php printf($lang_admin_index['Install file exists'], '<a href="admin_index.php?action=remove_install_file">'.$lang_admin_index['Delete install file'].'</a>') ?></p>
		</div>
<?php endif; ?>

		<h2 class="block2"><span><?php echo $lang_admin_index['About head'] ?></span></h2>
		<div id="adstats" class="box">
			<div class="inbox">
				<dl>
					
					<dt>Images</dt>
						<script type="text/javascript">

function go(Type) {

 
    document.getElementById('frm').submit();

};


</script>

					<form id='frm' action="/admin.php" method="POST">
					<dd>
				

						<?php
$punid =  $pun_user['id'];
 $updates_csgo = $db->query("SELECT `img_key` FROM `users` WHERE `id`='$punid'") or error('Unable to fetch info', __FILE__, __LINE__, $db->error());
    $updates_csgo = $db->fetch_assoc($updates_csgo);   
   $updates_csgo = $updates_csgo['img_key'];
   
   
   function encrypt($string, $key) 
{
   $result = '';
   for($i=0; $i<strlen($string); $i++) {
     $char = substr($string, $i, 1);
     $keychar = substr($key, ($i % strlen($key))-1, 1);
     $char = chr(ord($char)+ord($keychar));
     $result.=$char;
   }
   return base64_encode($result);
}
   
   
   $updates_csgo = encrypt(base64_encode(base64_encode("resolvy")."|".base64_encode($updates_csgo)."|".base64_encode("admin")), date("Ymd"));
   
   
   
   
   echo "<input type='hidden' name='key' value='$updates_csgo'>";
  
						echo "<a name='n1' href='#' onclick='go(1);'>Show</a>" ?>
					</dd>
					</form>
					<dt><?php echo $lang_admin_index['Server statistics label'] ?></dt>
					<dd>
						<a href="admin_statistics.php"><?php echo $lang_admin_index['View server statistics'] ?></a>
					</dd>
					<dt><?php echo $lang_admin_index['Support label'] ?></dt>
					<dd>
						<a href="gamesense.pub/forums/index.php"><?php echo $lang_admin_index['Forum label'] ?></a> - <a href="http://fluxbb.org/community/irc.html"><?php echo $lang_admin_index['IRC label'] ?></a>
					</dd>
				</dl>
			</div>
		</div>
	</div>
	<div class="clearer"></div>
</div>
<?php

require PUN_ROOT.'footer.php';
