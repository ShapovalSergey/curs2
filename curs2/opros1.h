#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include "visit.h"

/*ќпросник дл€ посещени€ оториноларинголога (лор)*/
class opros1
{
private:
	visit vis;
	bool sopli;
	bool kashel;
	bool bol_v_gorle;
	bool zalozhen_nos;
	bool bol_v_ushah;
	bool golov_bol;
	bool oznob;
	int temperature;
	bool zhar;
public:
	opros1();
	opros1(visit vis, bool sopli, bool kashel, bool bol_v_gorle, bool zalozhen_nos, bool bol_v_ushah, bool golov_bol, bool oznob, bool zhar, int temperature) 
	{
		this->vis = vis;
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
	visit return_vis() { return vis; };
	int return_temperature() { return temperature; };
	bool return_sopli() { return sopli; };
	bool return_kashel() { return kashel; };
	bool return_bol_v_gorle() { return bol_v_gorle; };
	bool return_bol_v_ushah() { return bol_v_ushah; };
	bool return_zalozhen_nos() { return zalozhen_nos; };
	bool return_golov_bol() { return golov_bol; };
	bool return_oznob() { return oznob; };
	bool return_zhar() { return zhar; };

};

