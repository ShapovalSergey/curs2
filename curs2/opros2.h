#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
//#include <ctime>
#include "visit.h"
#include "ISaveOpros.h"

/*Опросник для посещения невролога*/
class opros2 :public ISaveOpros
{
private:
	//visit vis;
	bool onemenie;
	bool golovokruzhenie;
	bool slabost;
	bool pokalivanie;
	bool podergivanie;
	bool golov_bol;
	bool epilep_pripadki;
	bool shataet_pri_hodbe;
	bool bol_v_spine;
	std::string rezult()
	{
		std::string vivod;
		if (onemenie == true)
		{
			vivod += " 1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (golovokruzhenie == true)
		{
			vivod += " 1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (slabost == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (pokalivanie == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (podergivanie == true)
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
		}	if (epilep_pripadki == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}	if (shataet_pri_hodbe == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}if (bol_v_spine == true)
		{
			vivod += "1 ";
		}
		else
		{
			vivod += "0 ";
		}

		return vivod;

	};
public:
	opros2() {};
	opros2( bool onemenie, bool golovokruzhenie, bool slabost, bool pokalivanie, bool podergivanie, bool golov_bol, bool epilep_pripadki, bool bol_v_spine, bool shataet_pri_hodbe)
	{
		this->onemenie = onemenie;
		this->golovokruzhenie = golovokruzhenie;
		this->slabost = slabost;
		this->pokalivanie = pokalivanie;
		this->podergivanie = podergivanie;
		this->golov_bol = golov_bol;
		this->epilep_pripadki = epilep_pripadki;
		this->bol_v_spine = bol_v_spine;
		this->shataet_pri_hodbe = shataet_pri_hodbe;
	};
	//visit return_vis() { return vis; };
	bool return_shataet_pri_hodbe() { return shataet_pri_hodbe; };
	bool return_onemenie() { return onemenie; };
	bool return_golovokruzhenie() { return golovokruzhenie; };
	bool return_slabost() { return slabost; };
	bool return_podergivanie() { return podergivanie; };
	bool return_pokalivanie() { return pokalivanie; };
	bool return_golov_bol() { return golov_bol; };
	bool return_epilep_pripadki() { return epilep_pripadki; };
	bool return_bol_v_spine() { return bol_v_spine; };
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
		std::ofstream out1("opros2.txt", std::ios::app);
		out1 << str << std::endl;
		out1.close();
	};
};

