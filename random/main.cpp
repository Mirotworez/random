#include <iostream>
#include <string>
#include <ctime>
#include "resource.h"
using namespace std;

void specEXT(string *ARR) {

	srand(time(0));
	int ii = 0 + rand() % 3;
	cout << "Your spec is - " << ARR[ii] << "\n" << endl;

}

int main() {

	int i;
	int ii;
	int c;
	int s;

	string clas[12] = { {"Warrior"},{"Paladin"}, {"Loc"}, {"Shaman"}, {"Mage"}, {"Druid"}, {"Hunt"}, {"DK"}, {"DH"}, {"Monk"}, {"Priest"}, {"Rogue"} };
	string specWAR[3] = { { "Arms" },{ "Tank" },{ "Furi" } };
	string specPAL[3] = { { "Tank" },{ "Holy" },{ "Retrib" } };
	string specLOC[3] = { { "Demon" },{ "Aflic" },{ "Destr" } };
	string specSHAM[3] = { { "Heal" },{ "Elem" },{ "Enh" } };
	string specMAGE[3] = { { "Arcan" },{ "Fire" },{ "Frost" } };
	string specDRU[4] = { {"Feral"}, {"Tank"}, {"Heal"}, {"Balance"} };
	string specHUNT[3] = { { "Beast" },{ "Marks" },{ "Surv" } };
	string specDK[3] = { { "Blood" },{ "Frost" },{ "Afli" } };
	string specDH[2] = { { "Tank" },{ "Havoc" } };
	string specMONK[3] = { { "Heal" },{ "Tank" },{ "DD" } };
	string specPRIEST[3] = { { "Shadow" },{ "Holy" },{ "Disciplie" } };
	string specROG[3] = { {"Stealth"}, {"Muti" }, {"Combat"} };

	
	
	cout << "What we must do?\n\n" << "1 - Change the class\n" << "2 - Exit\n" << endl;
	cin >> c;
	cout << "\n" << endl;

	do {

		if (c == 1) {

			srand(time(0));
			i = 0 + rand() % 12;

			cout << "Your class is - " << clas[i] << "\n" << endl;
			cout << "Want to take spec?\n\n" << "1 - Yes\n" << "2 - No\n" << endl;
			cin >> s;
			cout << "\n" << endl;
		}
		if (s == 1) {

			if (i == 0) {

				specEXT(specWAR);
			}


			if (i == 1) {

				specEXT(specPAL);
			}

			if (i == 2) {

				specEXT(specLOC);
			}

			if (i == 3) {

				specEXT(specSHAM);
			}

			if (i == 4) {

				specEXT(specMAGE);
			}

			if (i == 5) {

				srand(time(0));
				ii = 0 + rand() % 4;
				cout << "Your spec is - " << specDRU[ii] << "\n" << endl;
			}

			if (i == 6) {

				specEXT(specHUNT);
			}

			if (i == 7) {

				specEXT(specDK);
			}

			if (i == 8) {

				srand(time(0));
				ii = 0 + rand() % 2;
				cout << "Your spec is - " << specDH[ii] << "\n" << endl;
			}

			if (i == 9) {

				specEXT(specMONK);
			}

			if (i == 10) {

				specEXT(specPRIEST);
			}

			if (i == 11) {

				specEXT(specROG);
			}
		}

		cout << "Repeat?\n\n" << "1 - Yes\n" << "2 - No\n\n" << endl;
		cin >> c;
		cout << "\n" << endl;

	} while (c == 1);

	cout << "Created by Mirotworez. Enjoy! ;-)\n\n" << endl;

		system("pause");

		return 0;
	}