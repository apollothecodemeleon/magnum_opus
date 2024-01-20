#include <iostream>
using namespace std;

class shortcutClass {
	public:

	void clearFunct(){
		cout << "\033[2J\033[0;0H";
	}
	  
}

int main() {
	shortcutClass shorcuts;
	int carMenuOption;
	int carTypeOption;
	shorcuts.clearFunct;
	cout << "Welcome to Offrent, the car rental service of your dreams!";
	cout << "\nPress Any Key to Continue!";
	getchar;
	shorcuts.clearFunct;
	cout << "Please input 1 to rent cars, or 2 to turn in them in";
	cin >> carMenuOption;

	switch(carMenuOption) {

		/*rental
		section*/
		case 1:  

		shorcuts.clearFunct;

		cout<<"\nwhat type of car do you want to rent?";
		cout<<"\n1)Sedan";
		cout<<"\n2)crossover/suv";
		cout<<"\n3)minivan";
		cout<<"\n4)sports car";

		cin>>carTypeOption;
		switch(carTypeOption){

			/*Sedan rental
			section*/
			case 1:

			/*suv rental
			section*/
			case 2:

			/*mom car
			section💀*/
			case 3:


			/*sports car
			section*/
			case 4:

		}



		/*Turn-In
		section*/
		case 2:
	}
	
}
