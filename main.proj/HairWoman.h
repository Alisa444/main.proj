#pragma once
#include"Hair.h"
class HairWoman : public Hair
{
public:
	HairWoman(string name, string masterName, float price, Date date, string m_or_w, string name_of_hairstyle, bool dyeing);
	HairWoman();

	void show() override;
	virtual string type() const override;
};

