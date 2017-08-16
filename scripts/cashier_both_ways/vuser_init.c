vuser_init()
{
	lr_start_transaction("load_html");

	web_url("WebTours", 
		"URL={url}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("load_html", LR_AUTO);


	lr_think_time(5);


	lr_start_transaction("login");

	web_submit_form("login.pl", 
		"Snapshot=t17.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	lr_end_transaction("login", LR_AUTO);
	
	return 0;
}
