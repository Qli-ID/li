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
vector <string> pokemon_pic = { "����","Ƥ����","���ܻ�","ˮ����","�����","С����","��������","�����" };
vector <string> pokemon_god = { "ˮ��","����","�λ�","����","��ү�μ׺�����","��ү��Ƥ����" };//��˵
#endif // !HEAD_H

