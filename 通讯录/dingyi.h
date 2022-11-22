#pragma once
#include<iostream>
using namespace std;
#define Max 1000
#include<string>

struct lianxiren
{
	string ganzname;
	int sex;
	int age;
	int Handynr;
	string Adress;
};

struct tongxunlu
{
	lianxiren mann[Max];
	int size;
};
