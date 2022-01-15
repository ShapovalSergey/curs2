#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <ctime>
#include <string.h>
#include <string>
#include <sstream>
#include <fstream>
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include "visit.h"
#include "ISaveOpros.h"

/*ќпросник дл€ посещени€ оториноларинголога (лор)*/
class opros1 :public ISaveOpros
{
private:
	//visit vis;
	bool sopli;
	bool kashel;
	bool bol_v_gorle;
	bool zalozhen_nos;
	bool bol_v_ushah;
	bool golov_bol;
	bool oznob;
	double temperature;
	bool zhar;
	std::string rezult() 
	{
		std::string vivod=" ";
		if (sopli == true)
		{
			vivod += " 1 ";
		}
		else
		{
			vivod += " 0 ";
		}	if (kashel == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (bol_v_gorle == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (zalozhen_nos == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (bol_v_ushah == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (golov_bol == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (oznob == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (zhar == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	
		msclr::interop::marshal_context context;
		std::ostringstream strs;
		strs << temperature;
		vivod += strs.str();


		//vivod = vivod+context.marshal_as<std::string>(temperature.ToString());
		return vivod;
	
	};
public:
	opros1() {};
	opros1( bool sopli, bool kashel, bool bol_v_gorle, bool zalozhen_nos, bool bol_v_ushah, bool golov_bol, bool oznob, bool zhar, double temperature)
	{

		this->sopli = sopli;
		this->kashel = kashel;
		this->bol_v_gorle = bol_v_gorle;
		this->zalozhen_nos = zalozhen_nos;
		this->bol_v_ushah = bol_v_ushah;
		this->golov_bol = golov_bol;
		this->oznob = oznob;
		this->zhar = zhar;
		this->temperature = temperature;
	};
	//visit return_vis() { return vis; };
	double return_temperature() { return temperature; };
	bool return_sopli() { return sopli; };
	bool return_kashel() { return kashel; };
	bool return_bol_v_gorle() { return bol_v_gorle; };
	bool return_bol_v_ushah() { return bol_v_ushah; };
	bool return_zalozhen_nos() { return zalozhen_nos; };
	bool return_golov_bol() { return golov_bol; };
	bool return_oznob() { return oznob; };
	bool return_zhar() { return zhar; };
	virtual void saveopros(std::string doc, std::string pat)
	{
		std::string str; time_t now = time(0); tm* ltm = localtime(&now); int day, month, year, hour, minute;
		day = ltm->tm_mday;
		month = 1 + ltm->tm_mon;
		year = 1900 + ltm->tm_year;
		hour = ltm->tm_hour;
		minute = ltm->tm_min;
		str = doc + " " + pat + " " + std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year) + "_" + std::to_string(hour) + "-" + std::to_string(minute) + " " + rezult();
		for (int i = str.length(); i < 113; i++)
		{
			str += " ";
		}
		str += '\0';
		std::ofstream out1("opros1.txt", std::ios::app);
		out1 << str << std::endl;
		out1.close();
	};
};

