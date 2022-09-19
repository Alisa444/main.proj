#include "Manicure.h"

Manicure::Manicure(string name, string masterName, float price, Date date, string colour)
    : Service(name, masterName, price, date)
{
    this->colour = colour;
}

Manicure::Manicure()
{
    colour = "colour";
}

void Manicure::setColour(string colour)
{
    this->colour = colour;
}

string Manicure::getColour()
{
    return colour;
}

void Manicure::show()
{
    Service::show();
    cout << "Colour and/or design :  " << colour << "\n\n";
}

string Manicure::type() const
{
    return "Manicure";
}
