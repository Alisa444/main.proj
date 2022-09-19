#include"Client.h"
#include"Date.h"
#include"Hair.h"
#include"HairMan.h"
#include"HairWoman.h"
#include"Manicure.h"
#include"Service.h"

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int main() {

	vector<Service*> Serv;
	Serv.push_back(new Manicure("Manicure", "Elizaveta", 400, Date(2022, 9, 15), "red"));
	Serv.push_back(new Hair("Hairstyle", "Kristina", 600, Date(2022, 9, 15), "woman", "unknown", true));

	Serv.push_back(new Manicure("Manicure", "Elizaveta", 550, Date(2022, 9, 16), "colourful french"));
	Serv.push_back(new Hair("Hairstyle", "Kristina", 300, Date(2022, 9, 17), "woman", "piksie", false));

	Serv.push_back(new Hair("Hairstyle", "Boris", 250, Date(2022, 9, 19), "man", "unknown", false));

	Serv.push_back(new Manicure("Manicure", "Elizaveta", 150, Date(2022, 9, 20), "clear"));
	Serv.push_back(new Hair("Hairstyle", "Boris", 500, Date(2022, 9, 20), "man", "none", true));



	vector<Client*> Name;
	Name.push_back(new Client("Ivanova Ivanna"));
	Name.push_back(new Client("Petrova Petra"));
	Name.push_back(new Client("Ivanov Ivan"));
	Name.push_back(new Client("Petrov Petr"));



	map<string, vector<Service*>> Clien;
	Clien["Ivanova Ivanna"].push_back(Serv[0]);
	Clien["Ivanova Ivanna"].push_back(Serv[1]);

	Clien["Petrova Petra"].push_back(Serv[2]);
	Clien["Petrova Petra"].push_back(Serv[3]);

	Clien["Ivanov Ivan"].push_back(Serv[4]);

	Clien["Petrov Petr"].push_back(Serv[5]);
	Clien["Petrov Petr"].push_back(Serv[6]);



	int menu = 0;
	string title;
	Date date;
	string type;
	string name;
	string colour;
	string gender;
	string haircut;
	bool dyeing;
	int item;

	do {
		cout << "1 - All services " << endl;
		cout << "2 - Find record by service " << endl;
		cout << "3 - All clients and their records " << endl;
		cout << "4 - Book a manicure " << endl;
		cout << "5 - Book a haircut " << endl;
		cout << "6 - Delete record " << endl;

		cin >> menu;

		switch (menu) {
		case 1:
			for (int i = 0; i < Serv.size(); i++) {
				Serv[i]->show();
			}
			break;

		case 2:
			cout << "Enter service to find the record -> ";
			cin >> title;
			for (int i = 0; i < Serv.size(); i++) {
				if (title == Serv[i]->type()) {
					Serv[i]->show();
				}
			}
			break;

		case 3: 
			for (auto row = Clien.begin(); row != Clien.end(); row++) {
				cout << row->first << "\n";
				for (int i = 0; i < (row->second).size(); i++) {
					cout << "\t" << ((row->second)[i])->getName() << "\n";
					cout << "\t" << ((row->second)[i])->getDate() << "\n";
				}
			}
			break;

		case 4:
			cout << "Enter name of service you want to book-> ";
			cin.ignore();
			getline(cin, title);
			cout << "Enter your name -> ";
			cin >> name;
			cout << "Enter date you want to come -> ";
			cin >> date;
			cout << "Enter design and/or colour (or unknown) -> ";
			cin >> colour;
			Clien[name].push_back(Serv[0] = new Manicure(title, "Elizaveta", 0, date, colour));
			break;

		case 5:
			cout << "Enter name of service you want to book-> ";
			cin.ignore();
			getline(cin, title);
			cout << "Enter date you want to come -> ";
			cin >> date;
			cout << "Enter your gender -> ";
			cin >> gender;
			cout << "Enter yor name-> ";
			cin >> name;
			cout << "Do you wanna dye it? -> ";
			cin >> dyeing;
			cout << "Enter colour (or none) -> ";
			cin >> colour;
			cout << "Enter haircut you want -> ";
			cin >> haircut;
			if (gender == "woman") {
				Clien[name].push_back(Serv[0] = new Hair(title, "Kristina", 0, date, gender, haircut, dyeing));
			}
			else if(gender=="man") {
				Clien[name].push_back(Serv[0] = new Hair(title, "Boris", 0, date, gender, haircut, dyeing));
			}
			break;

		case 6:
			cout << "Enter number of 'All services' you want to delete -> ";
			cin >> item;
			Serv.erase(Serv.begin() + item - 1);
			break;
		}
	} while (menu != 0);
}