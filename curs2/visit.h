#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
//#include <vector>
#include <iostream>
#include "doctor.h"
#include "patient.h"

 class visit
{
private:
	doctor doc;
	patient pat;
	int day_date;
	int month_date;
	int year_date;
	int hour;
	int minute;
	std::string location;
	//opros opr;
public:
	void change_doc(doctor a) 
	{
		this->doc = a;
	};
	void change_pat(patient a) 
	{
		this->pat = a;
	};
	void change_day_date(int day_date) 
	{
		this->day_date = day_date;
	};
	void change_month_date(int month_date)
	{
		this->month_date = month_date;
	};
	void change_year_date(int year_date)
	{
		this->year_date = year_date;
	};
	void change_hour(int hour)
	{
		this->hour = hour;
	};
	void change_minute(int minute)
	{
		this->minute = minute;
	};
	void change_location(std::string loc) { this->location = loc; };
	std::string return_loc() { return location; };
	doctor return_doc() { return doc; };
	patient return_pat() { return pat; };
	int return_day_date() { return day_date; };
	int return_month_date() { return month_date; };
	int return_year_date() { return year_date; };
	int return_hour() { return hour; };
	int return_minute() { return minute; };
};

