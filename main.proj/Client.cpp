#include "Client.h"

Client::Client(string name)
{
    this->name = name;
}

Client::Client()
{
    name = "Ivanova Ivanna";
}

void Client::setName(string name)
{
    this->name = name;
}

string Client::getName()
{
    return name;
}

void Client::show()
{
    cout << "Name: " << name << endl;
}
