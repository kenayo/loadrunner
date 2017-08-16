vuser_end()
{
	lr_start_transaction("logout_button");
	
	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t33.inf", 
		LAST);
	
	lr_end_transaction("logout_button", LR_AUTO);
	
	
	return 0;
}
