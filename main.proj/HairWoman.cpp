#include "HairWoman.h"

HairWoman::HairWoman(string name, string masterName, float price, Date date, string m_or_w, string name_of_hairstyle, bool dyeing)
    :Hair(name, masterName, price, date, m_or_w, name_of_hairstyle, dyeing)
{
}

HairWoman::HairWoman()
{
}

void HairWoman::show()
{
    Hair::show();
}

string HairWoman::type() const
{
    return "Woman";
}
