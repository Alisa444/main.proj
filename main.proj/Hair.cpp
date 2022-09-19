#include "Hair.h"

Hair::Hair(string name, string masterName, float price, Date date, string m_or_w, string name_of_hairstyle, bool dyeing)
    : Service(name, masterName, price, date)
{
    this->m_or_w = m_or_w;
    this->name_of_hairstyle = name_of_hairstyle;
    this->dyeing = dyeing;
}

Hair::Hair()
{
    m_or_w = "man/woman";
    name_of_hairstyle = "Care";
    dyeing = true;
}

void Hair::setMOrW(string m_or_w)
{
    this->m_or_w = m_or_w;
}

string Hair::getMOrW()
{
    return m_or_w;
}

void Hair::setNameOfHairstyle(string name_of_hairstyle)
{
    this->name_of_hairstyle = name_of_hairstyle;
}

string Hair::getNameOfHairstyle()
{
    return name_of_hairstyle;
}

void Hair::setDyeing(bool dyeing)
{
    this->dyeing = dyeing;
}

bool Hair::getDyeing()
{
    return dyeing;
}

void Hair::show()
{
    Service::show();
    cout << "Gender:  " << m_or_w << endl;
    cout << "Name of hairstyle:  " << name_of_hairstyle << endl;
    cout << "Dyeing:  " << dyeing << "\n\n";
}

string Hair::type() const
{
    return "Hair";
}
