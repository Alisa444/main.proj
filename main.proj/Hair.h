#pragma once
#include "Service.h"
class Hair :
    public Service
{
protected:
    string m_or_w;
    string name_of_hairstyle;
    bool dyeing;
public:
    Hair(string name, string masterName, float price, Date date, string m_or_w, string name_of_hairstyle, bool dyeing);
    Hair();

    void setMOrW(string m_or_w);
    string getMOrW();

    void setNameOfHairstyle(string name_of_hairstyle);
    string getNameOfHairstyle();

    void setDyeing(bool dyeing);
    bool getDyeing();

    void show() override;
    virtual string type() const override;
};

