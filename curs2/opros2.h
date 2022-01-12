#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include "visit.h"
#include "ISaveOpros.h"

/*Опросник для посещения невролога*/
class opros2 :public ISaveOpros
{
private:
	visit vis;
	bool onemenie;
	bool golovokruzhenie;
	bool slabost;
	bool pokalivanie;
	bool podergivanie;
	bool golov_bol;
	bool epilep_pripadki;
	bool shataet_pri_hodbe;
	bool bol_v_spine;
public:
	opros2();
	opros2(visit vis, bool onemenie, bool golovokruzhenie, bool slabost, bool pokalivanie, bool podergivanie, bool golov_bol, bool epilep_pripadki, bool bol_v_spine, bool shataet_pri_hodbe)
	{
		this->vis = vis;
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
	visit return_vis() { return vis; };
	bool return_shataet_pri_hodbe() { return shataet_pri_hodbe; };
	bool return_onemenie() { return onemenie; };
	bool return_golovokruzhenie() { return golovokruzhenie; };
	bool return_slabost() { return slabost; };
	bool return_podergivanie() { return podergivanie; };
	bool return_pokalivanie() { return pokalivanie; };
	bool return_golov_bol() { return golov_bol; };
	bool return_epilep_pripadki() { return epilep_pripadki; };
	bool return_bol_v_spine() { return bol_v_spine; };
	virtual void saveopros() {  };
};

