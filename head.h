#pragma once
#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>
#include <random>
#include "head1.h"
using namespace std;
#define PATH "E:\log.dll"
typedef struct POKEMON
{
	char poke_name[100];
	int poke_Defense;
	int poke_Attack;
	int poke_Blood;
	int poke_synthesis;
}poke;
vector <string> player;
vector <string> pokemon_pic = { "¹¢¹í","Æ¤¿¨Çğ","ÃîÍÜ»¨","Ë®¼ı¹ê","Åç»ğÁú","Ğ¡»ğÁú","ÃîÍÜÖÖ×Ó","½ÜÄá¹ê" };
vector <string> pokemon_god = { "Ë®¾ı","À×Äñ","ÃÎ»Ã","³¬ÃÎ","ÖÇÒ¯¤Î¼×ºØÈÌÍÜ","ÖÇÒ¯¤ÎÆ¤¿¨Çğ" };//´«Ëµ
#endif // !HEAD_H

