#pragma once
#include<iostream>
using namespace std;
class Client
{
	string name;
public:
	Client(string name);
	Client();

	void setName(string name);
	string getName();

	virtual void show();
};

