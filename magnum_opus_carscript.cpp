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


		/*Turn-In
		section*/
		case 2:
	}
	
}
