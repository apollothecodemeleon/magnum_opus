#include <iostream>
using namespace std;

class shortcutClass {
	public:

	void clearFunct(){
		cout << "\033[2J\033[0;0H";
	}
	  
}


class rentingFeatures(){
	public:

	float rentCar(float wallet, int rentalPrice){
		return wallet-rentalPrice;
	}
}


class carPrices(){
	public:

	
	//sedans
	int ToyotaPrius_Prime2024=30;
	int HyundaiSonata2023=29;
	int HyundaiElantra2023=30;
	int NissanSentra2024=22;
	int NissanMaxima2024=32;
	int HondaCivic2023=25;
	//crossover/suv
	//minivan
	//sports car


	
}

int main() {
	shortcutClass shorcuts;
	int carMenuOption;
	int carTypeOption;
	int carselected;
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
			shorcuts.clearFunct;
			cout << "\nchoose your sedan."
			cout << "\n\n\t1)Toyota Prius Prime; 2024"
			cout << "\n\n\t2)Hyundai Sonata; 2024";
			cout << "\n\n\t3)Hyundai Elantra; 2023";
			cout << "\n\n\t4)Nissan Sentra; 2024";
			cout << "\n\n\t5)Nissan Maxima; 2024";
			cout << "\n\n\t6)Honda Civic; 2023";
			cin>>carselected;
			switch(carselected){
				case 1:
				cout<<"\t\t\t\t\n\nPrius Prime";
				cout<<"\n\nYear:\t\t2024";
				cout<<"\n\nPower:\t\tHybrid";
				cout<<"\n\nDrivetrain\t\tFWD, Auto Transmission";
				cout<<"\n\nCapacity:\t\t1+ 4 Passengers";
				cout<<"\n\nEngine:\t\tHybrid Pow";

				case 2:
				/*insert
				sonata info*/

				case 3:
				/*insert
				elantra info */

				case 4:
				/*you get
				 the idea*/
			}



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
