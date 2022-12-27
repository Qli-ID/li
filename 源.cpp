#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <windows.h>
#include <random>
#include<iomanip>
#include "head.h"
#include "head1.h"



using namespace std;


int log() {
	fstream fs;
	string a;
	fs.open(PATH,ios::in);
	fs << a;
	if (a == " ")return 0;
	else return 1;
	fs.close();
}
void lottery() {//抽取
	default_random_engine e;
	bernoulli_distribution u;
	uniform_int_distribution<unsigned>u1(0, (pokemon_god.size() - 1));
	uniform_int_distribution<unsigned>u2(0, (pokemon_pic.size() - 1));
	if (u(e))player.push_back(pokemon_god[u1(e)]);
	else player.push_back(pokemon_pic[u2(e)]);
}
int show() {
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 0xC);
	cout << setw(25)<<"POKEMON GO!" << endl;
	cout << "1.对战" << setw(10);
	cout << "2.中心" << setw(10);
	cout<< "3.boss" << setw(10);
	cout<< "4.商店" << setw(10);
	cout << "5.背包" << endl;
	SetConsoleTextAttribute(handle, 0x7);
	switch (getchar()) {
	case 1:
		break;
	}
}

int main() {
	show();
}