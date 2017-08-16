Action()
{
	lr_think_time(5);


	lr_start_transaction("button_new_ticket");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		LAST);

	lr_end_transaction("button_new_ticket", LR_AUTO);


	lr_think_time(10);


	/*Correlation comment - Do not change!  Original value='100;386;08/16/2017' Name ='outboundFlight' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=outboundFlight",
		"RegExp=name=\"outboundFlight\"\\ value=\"(.*?)\"\\ checked",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);


	lr_start_transaction("reservation_page_1");

	web_submit_form("reservations.pl", 
		"Snapshot=t19.inf", 
		ITEMDATA, 
		"Name=depart", "Value={town_list}", ENDITEM, 
		"Name=departDate", "Value={date_tomorrow}", ENDITEM, 
		"Name=arrive", "Value={town_list}", ENDITEM, 
		"Name=returnDate", "Value={date_tomorrow}", ENDITEM, 
		"Name=numPassengers", "Value={passengers_amount}", ENDITEM, 
		"Name=roundtrip", "Value={roundtrip}", ENDITEM, 
		"Name=seatPref", "Value={seat_place}", ENDITEM, 
		"Name=seatType", "Value={seat_type}", ENDITEM, 
		"Name=findFlights.x", "Value=40", ENDITEM, 
		"Name=findFlights.y", "Value=12", ENDITEM, 
		LAST);

	lr_end_transaction("reservation_page_1", LR_AUTO);


	lr_think_time(20);


	lr_start_transaction("reservation_page_2");

	web_submit_form("reservations.pl_2",
		"Snapshot=t20.inf",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=reserveFlights.x", "Value=24", ENDITEM,
		"Name=reserveFlights.y", "Value=1", ENDITEM,
		LAST);

	lr_end_transaction("reservation_page_2", LR_AUTO);


	lr_think_time(10);


	lr_start_transaction("reservation_page_3");

	web_submit_form("reservations.pl_3", 
		"Snapshot=t21.inf", 
		ITEMDATA, 
		"Name=firstName", "Value={first_name}", ENDITEM, 
		"Name=lastName", "Value={last_name}", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value={first_name} {last_name}", ENDITEM, 
		"Name=creditCard", "Value={credit_card_num}", ENDITEM, 
		"Name=expDate", "Value={credit_card_exp_date}", ENDITEM, 
		"Name=saveCC", "Value={save_credit_card}", ENDITEM, 
		"Name=buyFlights.x", "Value=59", ENDITEM, 
		"Name=buyFlights.y", "Value=8", ENDITEM, 
		LAST);

	lr_end_transaction("reservation_page_3", LR_AUTO);

	return 0;
}