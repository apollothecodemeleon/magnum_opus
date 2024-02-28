#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int quant;
    int choice;
    int Qrooms = 20, Qpasta = 20, Qburger = 40, Qnoodles = 18, Qshake = 81, Qchicken = 120;
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
    int wallet = 10000;
    htlmnu:
    cout << "\033[2J\033[0;0H";
    cout << "\n\t\t\t Please select from the following menu options)";
    cout << "\n\n1)Rooms";
    cout << "\n2)Pasta";
    cout << "\n3)Burgers";
    cout << "\n4)Noodles";
    cout << "\n5)Shakes";
    cout << "\n6)Chicken nuggies";
    cout << "\n7)Info regarding sales";
    cout << "\n8)Exit";
    cout << "\n\n Please enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "\033[2J\033[0;0H";
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> quant;
        if (Qrooms - Srooms >= quant) {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            wallet = wallet - 1200;
            cout << "\n\n\t\t" << quant << " room(s) have been allotted to you";
            goto htlmnu;
        }
        else {
            cout << "\n\tOnly " << Qrooms - Srooms << " Rooms remain";
            goto htlmnu;
        }
        break;
    case 2:
        cout << "\n\n Enter the amount of pasta you want: ";
        cin >> quant;
        if (Qpasta - Spasta >= quant) {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 250;
            wallet = wallet - 250;
            cout << "\n\n\t\tyou've ordered " << quant << " pasta(s)";
            goto htlmnu;
        }
        else {
            cout << "\n\tOnly " << Qpasta - Spasta << " pastas remaining";
            goto htlmnu;
        }
        break;
    case 3:
        cout << "\n\n Enter the amount of burgers you want: ";
        cin >> quant;
        if (Qburger - Sburger >= quant) {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant * 120;
            wallet = wallet - 120;
            cout << "\n\n\t\tyou've ordered " << quant << " burger(s)";
            goto htlmnu;
        }
        else {
            cout << "\n\tOnly " << Qburger - Sburger << " burgers remaining";
            goto htlmnu;
        }
        break;
    case 4:
        cout << "\n\n Enter the amount of noodles you want: ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant) {    
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + quant * 140;
            wallet = wallet - 140;
            cout << "\n\n\t\tyou've ordered " << quant << " noodles(s)";
            goto htlmnu;
        }
        else {
            cout << "\n\tOnly " << Qnoodles - Snoodles << " noodles remaining";
            goto htlmnu;
        }
        break;
    case 5:
        cout << "\n\n Enter the amount of shakes you want: ";
        cin >> quant;
        if (Qshake - Sshake >= quant) {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant * 120;
            wallet = wallet - 120;
            cout << "\n\n\t\tyou've ordered " << quant << " shake(s)";
            goto htlmnu;
        }
        else {
            cout << "\n\tOnly " << Qshake - Sshake << " shakes remaining";
            goto htlmnu;
        }
        break;
    case 6:
        cout << "\n\n Enter the amount of 10pcs chicken nuggets you want: ";
        cin >> quant;
        if (Qchicken - Schicken >= quant) {
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + quant * 150;
            wallet = wallet - 150;
            cout << "\n\n\t\tyou've ordered " << quant << " 10pcs chicken nuggets(s)";
            goto htlmnu;
        }
        else {
            cout << "\n\tOnly " << Qchicken - Schicken << " 10pcs chicken nuggets remaining";
            goto htlmnu;
        }
        break;
    case 7:
        cout << "\033[2J\033[0;0H";
        cout << "\n\t\tDetails of sales and collection";
         cout<<"\n\t\tDetails of sales and collection"; cout<<"\n\nNumber of rooms we had: "<<Qrooms; cout<<"\n\nNumber of rooms we have sold for rent: "<<Srooms; cout<<"\n\nRemaning rooms: "<<Qrooms-Srooms; cout<<"\n\nTotal rooms collections for the day:$"<<Total_rooms; cout<<"\n\nAmount of pasta we had: "<<Qpasta; cout<<"\n\nAmount of pasta we have sold: "<<Spasta; cout<<"\n\nAmount of Remaning pasta: "<<Qpasta-Spasta; cout<<"\n\nTotal amount of pasta collection for the day:$"<<Total_pasta; cout<<"\n\nNumber of burgers we had: "<<Qburger; cout<<"\n\n Number of burgers we have sold: "<<Sburger; cout<<"\n\nRemaning burgers: "<<Qburger-Sburger; cout<<"\n\nTotal burger collections for the day:$"<<Total_burger; cout<<"\n\n\n\t\t\tNoodles info"; cout<<"\n\nNumber of noodles we had: "<<Qnoodles; cout<<"\n\n Number of noodles we have sold: "<<Snoodles; cout<<"\n\nRemaning noodles: "<<Qnoodles-Snoodles; cout<<"\n\nTotal noodle collections for the day:$"<<Total_noodles; cout<<"\n\n\n\t\t\tShakes info"; cout<<"\n\n\nNumber of shakes we had: "<<Qshake; cout<<"\n\n Number of shakes we have sold: "<<Sburger; cout<<"\n\nRemaning shakes: "<<Qshake-Sshake; cout<<"\n\nTotal shake collections for the day:$"<<Total_shake; cout<<"\n\n\n\t\t\t10pcs chicken nugget info"; cout<<"\n\n\nNumber of 10pcs chicken nuggets we had: "<<Qchicken; cout<<"\n\n Number of 10pcs chicken nuggets we have sold: "<<Schicken; cout<<"\n\nRemaning 10pcs chicken nuggets: "<<Qchicken-Schicken; cout<<"\n\nTotal 10pcs chicken nugget collections for the day:$"<<Total_chicken; cout<<"\n\n\n\t\t\tTotal things info"; cout<<"\n\n\nNumber of things we had in total"<<Qburger+Qchicken+Qnoodles+Qpasta+Qrooms+Qshake; cout<<"\n\nNumber of things weve sold it total"<<Sburger+Schicken+Snoodles+Spasta+Srooms+Sshake; cout<<"\n\nTotal remaning things"<<Qburger+Qchicken+Qnoodles+Qpasta+Qrooms+Qshake-Sburger+Schicken+Snoodles+Spasta+Srooms+Sshake; cout<<"\n\nTotal collections for the day:$"<<Total_pasta+Total_rooms+Total_shake+Total_burger+Total_chicken+Total_noodles;
        goto htlmnu;
    case 8:
        cout << "Thanks for staying at C++ hotel";
        exit(0);
    default:
        cout << "\033[2J\033[0;0H";
        cout << "Not a proper number";
        break;
    }
    goto htlmnu;
    return 0;
}
