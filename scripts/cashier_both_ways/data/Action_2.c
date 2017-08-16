Action_2()
{

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_submit_form("login.pl", 
		"Snapshot=t40.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t41.inf", 
		LAST);

	lr_think_time(6);

	web_submit_form("reservations.pl", 
		"Snapshot=t42.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=08/17/2017", ENDITEM, 
		"Name=arrive", "Value=Frankfurt", ENDITEM, 
		"Name=returnDate", "Value=08/18/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=on", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=65", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t43.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=010;386;08/17/2017", ENDITEM, 
		"Name=returnFlight", "Value=100;386;08/18/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=59", ENDITEM, 
		"Name=reserveFlights.y", "Value=5", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t44.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=39", ENDITEM, 
		"Name=buyFlights.y", "Value=10", ENDITEM, 
		LAST);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUID=V=2&GUID=1A44C5B7441144C085DA2783D480A3C2&dmnchg=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170810; DOMAIN=iecvlist.microsoft.com");

	lr_think_time(5);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t45.inf", 
		EXTRARES, 
		"Url=https://iecvlist.microsoft.com/ie11blocklist/1401746408/versionlist.xml", "Referer=", ENDITEM, 
		LAST);

	return 0;
}