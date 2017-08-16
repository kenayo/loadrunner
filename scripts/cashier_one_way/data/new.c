new()
{

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_submit_form("login.pl", 
		"Snapshot=t10.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t11.inf", 
		LAST);

	web_submit_form("reservations.pl", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=08/16/2017", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=08/17/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=66", ENDITEM, 
		"Name=findFlights.y", "Value=15", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t13.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=000;0;08/16/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=44", ENDITEM, 
		"Name=reserveFlights.y", "Value=0", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t14.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=48", ENDITEM, 
		"Name=buyFlights.y", "Value=4", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_4", 
		"Snapshot=t15.inf", 
		ITEMDATA, 
		"Name=Book Another.x", "Value=35", ENDITEM, 
		"Name=Book Another.y", "Value=3", ENDITEM, 
		LAST);

	return 0;
}