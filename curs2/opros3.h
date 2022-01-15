#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include "visit.h"
#include "ISaveOpros.h"
/*Опросник для посещения гастроэнтеролога*/
class opros3:public ISaveOpros
{
private:
	visit vis;
	bool zhidkiy_stul;
	bool izhoga;
	bool zapor;
	bool poterya_apetita;
	bool snizhenie_vesa;
	bool toshnota;
	bool rvota;
	bool spazm_v_zhivote;
	bool bol_v_zhivote;
public:
	opros3() {};
	opros3(visit vis, bool zhidkiy_stul, bool izhoga, bool zapor, bool poterya_apetita, bool snizhenie_vesa, bool toshnota, bool rvota, bool bol_v_zhivote, bool spazm_v_zhivote)
	{
		this->vis = vis;
		this->zhidkiy_stul = zhidkiy_stul;
		this->izhoga = izhoga;
		this->zapor = zapor;
		this->poterya_apetita = poterya_apetita;
		this->snizhenie_vesa = snizhenie_vesa;
		this->toshnota = toshnota;
		this->rvota = rvota;
		this->bol_v_zhivote = bol_v_zhivote;
		this->spazm_v_zhivote = spazm_v_zhivote;
	};
	visit return_vis() { return vis; };
	bool return_spazm_v_zhivote() { return spazm_v_zhivote; };
	bool return_zhidkiy_stul() { return zhidkiy_stul; };
	bool return_izhoga() { return izhoga; };
	bool return_zapor() { return zapor; };
	bool return_snizhenie_vesa() { return snizhenie_vesa; };
	bool return_poterya_apetita() { return poterya_apetita; };
	bool return_toshnota() { return toshnota; };
	bool return_rvota() { return rvota; };
	bool return_bol_v_zhivote() { return bol_v_zhivote; };
	virtual void saveopros() {};
};

