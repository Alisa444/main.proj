#pragma once
#include"Hair.h"
class HairMan : public Hair
{
public:
	HairMan(string name, string masterName, float price, Date date, string m_or_w, string name_of_hairstyle, bool dyeing);
	HairMan();

	void show() override;
	virtual string type() const override;
};

