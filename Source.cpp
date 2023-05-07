#include <iostream>
#include<string>
#include <ctime>
using namespace std;

int main() {
	int dogrularinsayi = 0; int yalnislarinsayi = 0;
for(	int k = 1; k < 11; ++k)

	{int toplanan1, toplanan2, i = 1;
		srand(time(0));
		 toplanan1 = rand() % 20;
		toplanan2 = rand() % 10;
			cout << toplanan1 << "+" << toplanan2 << "=";
		int daxiledilen;
	    cin >> daxiledilen;
		int cem = toplanan1 + toplanan2;
		if (cem == daxiledilen) {
			cout << "Dogrudur" << endl;
			
			++dogrularinsayi;

		

		}
		else { cout << "Yalnisdir" << "  Dogru cavab: "<<cem<<endl;yalnislarinsayi++; }
	

		}

	cout << "DOGRULAR-------" << dogrularinsayi << endl;
	cout << "YALNIS--------" << yalnislarinsayi << endl;
	cout <<"UGUR FAIZI-----"<<dogrularinsayi*10<<"%"<< endl;
	




	return 0;}