#pragma once
#include"Service.h"
class Manicure : public Service
{
	string colour;
public:
	Manicure(string name, string masterName, float price, Date date, string colour);
	Manicure();

	void setColour(string colour);
	string getColour();

	void show() override;
	virtual string type() const override;
};

