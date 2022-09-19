#pragma once
#include<iostream>
#include"Date.h"
using namespace std;
class Service
{
protected:
	string name;
	string masterName;
	float price;
	Date date;
public:
	Service(string name, string masterName, float price, Date date);
	Service();

	void setName(string name);
	string getName();

	void setMasterName(string masterName);
	string getMasterName();

	void setPrice(float price);
	float getPrice();

	void setDate(Date date);
	Date getDate();

	virtual void show();
	virtual string type() const = 0;
};

