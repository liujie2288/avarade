<?php
$z[0]=Array("top","\r\n  <m:item name='网站栏目管理' link='catalog_main.php' ischannel='1' addalt='创建栏目' linkadd='catalog_add.php?listtype=all' rank='t_List,t_AccList' target='main' />\r\n  \r\n  <m:item name='内容回收站' link='recycling.php' ischannel='1' addalt='清空回收站' addico='images/gtk-del.png' linkadd='archives_do.php?dopost=clear&aid=no&recycle=1' rank='a_List,a_AccList,a_MyList' target='main' />\r\n",53,525);
$z[0][4]['item']="1_";
$z[0][4]['name']="常用操作";
$z[0][4]['display']="block";
$z[1]=Array("top","\r\n    <m:item name='普通文章' ischannel='1' link='content_list.php?channelid=1' linkadd='article_add.php?channelid=1' channelid='1' rank='' target='main' />\r\n\r\n",529,754);
$z[1][4]['item']="1_";
$z[1][4]['name']="内容管理";
$z[1][4]['display']="block";
$z[2]=Array("top","\r\n  <m:item name='自定义表单' link='diy_main.php' rank='c_List' target='main' />\r\n",762,950);
$z[2][4]['item']="1_";
$z[2][4]['name']="频道模型";
$z[2][4]['display']="block";
$z[2][4]['rank']="t_List,t_AccList,c_List,temp_One";
$z[3]=Array("top","\r\n  <m:item name='采集节点管理' link='co_main.php' rank='co_ListNote' target='main' />\r\n  <m:item name='临时内容管理' link='co_url.php' rank='co_ViewNote' target='main' />\r\n  <m:item name='导入采集规则' link='co_get_corule.php' rank='co_GetOut' target='main'/>\r\n  <m:item name='监控采集模式' link='co_gather_start.php' rank='co_GetOut' target='main'/>\r\n  <m:item name='采集未下载内容' link='co_do.php?dopost=coall' rank='co_GetOut' target='main'/>\r\n",956,1558);
$z[3][4]['item']="3_";
$z[3][4]['name']="采集管理";
$z[3][4]['display']="none";
$z[3][4]['rank']="co_NewRule,co_ListNote,co_ViewNote,co_Switch,co_GetOut";
$z[4]=Array("top","\r\n  <m:item name='一键更新网站' link='makehtml_all.php' rank='sys_MakeHtml' target='main' />\r\n  \r\n",1566,1767);
$z[4][4]['item']="5_";
$z[4][4]['name']="自动任务";
$z[4][4]['notshowall']="1";
$z[4][4]['display']="block";
$z[4][4]['rank']="sys_MakeHtml";
$z[5]=Array("top","\r\n  <m:item name='更新主页HTML' link='makehtml_homepage.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新栏目HTML' link='makehtml_list.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新文档HTML' link='makehtml_archives.php' rank='sys_MakeHtml' target='main' />\r\n",1771,2165);
$z[5][4]['item']="5_";
$z[5][4]['name']="HTML更新";
$z[5][4]['notshowall']="1";
$z[5][4]['display']="none";
$z[5][4]['rank']="sys_MakeHtml";
$z[6]=Array("top","\r\n  <m:item name='注册会员列表' link='member_main.php' rank='member_List' target='main' />\r\n  <m:item name='会员级别设置' link='member_rank.php' rank='member_Type' target='main' />\r\n  <m:item name='积分头衔设置' link='member_scores.php' rank='member_Type' target='main' />\r\n  <m:item name='会员模型管理' link='member_model_main.php' rank='member_Type' target='main' />\r\n  <m:item name='会员短信管理' link='member_pm.php' rank='member_Type' target='main' />\r\n  <m:item name='会员留言管理' link='member_guestbook.php' rank='member_Type' target='main' />\r\n  <m:item name='会员动态管理' link='member_info_main.php?type=feed' rank='member_Type' target='main' />\r\n  <m:item name='会员心情管理' link='member_info_main.php?type=mood' rank='member_Type' target='main' />\r\n",2169,3071);
$z[6][4]['item']="6_";
$z[6][4]['name']="会员管理";
$z[6][4]['display']="none";
$z[6][4]['rank']="member_List,member_Type";
$z[7]=Array("top","\r\n  <m:item name='默认模板管理' link='templets_main.php' rank='temp_All' target='main'/>\r\n  <m:item name='标签源码管理' link='templets_tagsource.php' rank='temp_All' target='main'/>\r\n  <m:item name='自定义宏标记' link='mytag_main.php' rank='temp_MyTag' target='main'/>\r\n  <m:item name='智能标记向导' link='mytag_tag_guide.php' rank='temp_Other' target='main'/>\r\n  <m:item name='全局标记测试' link='tag_test.php' rank='temp_Test' target='main'/>\r\n",3075,3668);
$z[7][4]['item']="7_";
$z[7][4]['name']="模板管理";
$z[7][4]['display']="none";
$z[7][4]['rank']="temp_One,temp_Other,temp_MyTag,temp_test,temp_All";
$z[8]=Array("top","\r\n  <m:item name='系统基本参数' link='sys_info.php' rank='sys_Edit' target='main' />\r\n  <m:item name='系统用户管理' link='sys_admin_user.php' rank='sys_User' target='main' />\r\n  <m:item name='数据库备份/还原' link='sys_data.php' rank='sys_Data' target='main' />\r\n",3672,4067);
$z[8][4]['item']="10_";
$z[8][4]['name']="系统设置";
$z[8][4]['display']="none";
$z[8][4]['rank']="sys_User,sys_Group,sys_Edit,sys_Log,sys_Data";

?>