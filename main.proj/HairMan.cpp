#include "HairMan.h"

HairMan::HairMan(string name, string masterName, float price, Date date, string m_or_w, string name_of_hairstyle, bool dyeing)
    :Hair(name, masterName, price, date, m_or_w, name_of_hairstyle, dyeing)
{
}

HairMan::HairMan()
{
}

void HairMan::show()
{
    Hair::show();
}

string HairMan::type() const
{
    return "Man";
}
