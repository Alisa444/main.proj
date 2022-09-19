#include "Service.h"

Service::Service(string name, string masterName, float price, Date date)
{
    this->name = name;
    this->masterName = masterName;
    this->price = price;
    this->date = date;
}

Service::Service()
{
    name = "name of service";
    masterName = "Master's name";
    price = 0.00;
    date = Date(0000, 0, 0);
}

void Service::setName(string name)
{
    this->name = name;
}

string Service::getName()
{
    return name;
}

void Service::setMasterName(string masterName)
{
    this->masterName = masterName;
}

string Service::getMasterName()
{
    return masterName;
}

void Service::setPrice(float price)
{
    this->price = price;
}

float Service::getPrice()
{
    return price;
}

void Service::setDate(Date date)
{
    this->date = date;
}

Date Service::getDate()
{
    return date;
}

void Service::show()
{
    cout << "Name of service:  " << name << endl;
    cout << "Master's name:  " << masterName << endl;
    cout << "Price:  " << price << endl;
    cout << "Date:  " << date << endl;
}
