Action_new()
{

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_submit_form("login.pl", 
		"Snapshot=t17.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t18.inf", 
		LAST);

	lr_think_time(12);

	web_submit_form("reservations.pl", 
		"Snapshot=t19.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Frankfurt", ENDITEM, 
		"Name=departDate", "Value=08/16/2017", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=08/17/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=Aisle", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=40", ENDITEM, 
		"Name=findFlights.y", "Value=12", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t20.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=100;386;08/16/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=24", ENDITEM, 
		"Name=reserveFlights.y", "Value=1", ENDITEM, 
		LAST);

	lr_think_time(14);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t21.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=12345123", ENDITEM, 
		"Name=expDate", "Value=06/18", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=59", ENDITEM, 
		"Name=buyFlights.y", "Value=8", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t22.inf", 
		LAST);

	lr_think_time(28);

	web_image("Search Flights Button_2", 
		"Alt=Search Flights Button", 
		"Snapshot=t23.inf", 
		LAST);

	web_submit_form("reservations.pl_4", 
		"Snapshot=t24.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Paris", ENDITEM, 
		"Name=departDate", "Value=08/16/2017", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=08/17/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=33", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_5", 
		"Snapshot=t25.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=400;350;08/16/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=33", ENDITEM, 
		"Name=reserveFlights.y", "Value=15", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_6", 
		"Snapshot=t26.inf", 
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
		"Name=buyFlights.y", "Value=5", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_image("Home Button", 
		"Alt=Home Button", 
		"Snapshot=t27.inf", 
		LAST);

	web_image("Search Flights Button_3", 
		"Alt=Search Flights Button", 
		"Snapshot=t28.inf", 
		LAST);

	web_submit_form("reservations.pl_7", 
		"Snapshot=t29.inf", 
		ITEMDATA, 
		"Name=depart", "Value=London", ENDITEM, 
		"Name=departDate", "Value=08/16/2017", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=08/17/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=27", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_8", 
		"Snapshot=t30.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=200;338;08/16/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=52", ENDITEM, 
		"Name=reserveFlights.y", "Value=11", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_9", 
		"Snapshot=t31.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=71", ENDITEM, 
		"Name=buyFlights.y", "Value=6", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_10", 
		"Snapshot=t32.inf", 
		ITEMDATA, 
		"Name=Book Another.x", "Value=43", ENDITEM, 
		"Name=Book Another.y", "Value=11", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t33.inf", 
		LAST);

	return 0;
}