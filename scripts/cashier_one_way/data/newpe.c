newpe()
{

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_submit_form("login.pl", 
		"Snapshot=t35.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t36.inf", 
		LAST);

	lr_think_time(5);

	web_submit_form("reservations.pl", 
		"Snapshot=t37.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=08/16/2017", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=08/17/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=findFlights.x", "Value=57", ENDITEM, 
		"Name=findFlights.y", "Value=12", ENDITEM, 
		LAST);

	lr_think_time(17);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t38.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=000;0;08/16/2017", ENDITEM, 
		"Name=returnFlight", "Value=000;0;08/17/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=35", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		LAST);

	return 0;
}