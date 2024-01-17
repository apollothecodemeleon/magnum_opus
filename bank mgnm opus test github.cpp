#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;


string bankPassword;//calling the variable for the password that you enter
int bankMenu;//calling the variable to choose the thing on the menu
int accountChoice;//calling the variable to choose the account
int account_ops;//calling the variable for the choice
float acc1balance=100000;
float acc1wallet=1000;
int acc1money = acc1balance + acc1wallet;





int main() {

  float depositOrWithdrawAmount;
  float walletchange;
  float balancechange;


  string wlcmssg = R"(
   __      __          ___                                        
  /\ \  __/\ \        /\_ \                                       
  \ \ \/\ \ \ \     __\//\ \     ___    ___     ___ ___      __   
   \ \ \ \ \ \ \  /'__`\\ \ \   /'___\ / __`\ /' __` __`\  /'__`\ 
    \ \ \_/ \_\ \/\  __/ \_\ \_/\ \__//\ \L\ \/\ \/\ \/\ \/\  __/ 
     \ `\___x___/\ \____\/\____\ \____\ \____/\ \_\ \_\ \_\ \____\
      '\/__//__/  \/____/\/____/\/____/\/___/  \/_/\/_/\/_/\/____/__                                           __                  ____                                     __         
                      /\ \__             /'\_/`\                  /\ \__              /\  _`\                  /\ \           ──▄▄█▀▀▀▀▀█▄▄──   
                      \ \ ,_\   ___     /\      \     __      ____\ \ ,_\    __   _ __\ \ \L\ \     __      ___\ \ \/'\       ▄█▀──▄─▄────▀█▄ 
  `                    \ \ \/  / __`\   \ \ \__\ \  /'__`\   /',__\\ \ \/  /'__`\/\`'__\ \  _ <'  /'__`\  /' _ `\ \ , <       █───▀█▀▀▀▀▄───█ 
                        \ \ \_/\ \L\ \   \ \ \_/\ \/\ \L\.\_/\__, `\\ \ \_/\  __/\ \ \/ \ \ \L\ \/\ \L\.\_/\ \/\ \ \ \\`\     █────█▄▄▄▄▀───█ 
                         \ \__\ \____/    \ \_\\ \_\ \__/.\_\/\____/ \ \__\ \____\\ \_\  \ \____/\ \__/.\_\ \_\ \_\ \_\ \_\   █────█────█───█
                ─         \/__/\/___/      \/_/ \/_/\/__/\/_/\/___/   \/__/\/____/ \/_/   \/___/  \/__/\/_/\/_/\/_/\/_/\/_/   ▀█▄─▀▀█▀█▀──▄█▀
                                                                                                                              ──▀▀█▄▄▄▄▄█▀▀──
)";                     
  cout << "\033[2J\033[0;0H";

  cout << "Press Any Key To Continue!";
  getchar;
  
  bankmenu:
  cout << "\033[2J\033[0;0H";


  this_thread::sleep_for(chrono::seconds(2));

  cout<<wlcmssg;
  cout << "\n\t\t please choose an option";
  cout << "\n1) log in";
  cout << "\n2) account help";
  cout << "\nback";
  cout << "\n\n\n\t\t\t\t[0] Go Back";
  cout << "\t\t[1-2] Select Choice";
  cout << "\t\t[tip] You should go to account help first to know the password.\n";
  cin>>bankMenu;

  switch (bankMenu){ 
  case 1:
    signinmenu:
    cout << "\033[2J\033[0;0H";

    cout<<"\n\t\t(note: the money you have is universal across al my projects:)"; 
    //alright, so this is gonna get complicated. there is a switch function IN this switch function💀😳🤯🪆its called nesting btw



     cout<<"\n\n\n\t\t\t\t[0] Go Back";
     acc1si:
     cout << "\033[2J\033[0;0H";

     cout << "enter password(enter 0 to go back)\n";
     cin>>bankPassword;

      if (bankPassword=="apollo"){
        acc1mnu:
        cout << "\033[2J\033[0;0H";


        cout<<"\n\t\tWelcome, account1!\n what would you like to do?";
        cout<<"\n\n1)deposit";
        cout<<"\n2)withdraw";
        cout<<"\n3)calculator";
        cout<<"\n4)dashboard";
        cout<<"\n\n\n\t\t\t\t[0] Log Out";
        cout<<"\t\t[1-4]Select Choice";

        cin>>account_ops; 


        switch (account_ops) {

        case 0:
            /*Log Out
            Section*/
            goto acc1mnu;
            break;
            /*deposit
            section*/
            //in case you wonder why this has so many incorrectly named markers and stuff, that is because the code originally had multiple accounts
        case 1:
            cout << "\033[2J\033[0;0H";

            cout << "\nhow much mone would you like to deposit";
            cout << "\ninfo:";
            cout << "\nBalance= $" << acc1balance;
            cout << "\nMoney in wallet= $" << acc1wallet;


            cin >> depositOrWithdrawAmount;
            walletchange = acc1wallet - depositOrWithdrawAmount;
            acc1wallet = walletchange;
            balancechange = acc1balance + depositOrWithdrawAmount;
            acc1balance = balancechange;


            goto acc1mnu;

            break;
            /*Withdrawal
            Section*/
        case 2:

            cout << "\033[2J\033[0;0H";

            cout << "\nhow much money would you like to withdraw";
            cout << "\ninfo:";
            cout << "\nBalance= $" << acc1balance;
            cout << "\nMoney in wallet= $" << acc1wallet;

            cin >> depositOrWithdrawAmount;
            balancechange = acc1balance - depositOrWithdrawAmount;
            acc1balance = balancechange;

            goto acc1mnu;

            break;
            /*Calculator
            Section*/
        case 3:

            /*To Do With Final Assembly: Add
            Calculator!!!!*/

            break;//will add goto and cin for back at the end of the calculator part
            /*Dashboard
            Section*/
        case 4:

            cout << "\nYour Dashboard!";
            cout << "\nWarning: this page will close in 15 seconds";

            cout << "\nur balance:$" << acc1balance;
            cout << "\nur latest accounting transaction:$" << depositOrWithdrawAmount;
            cout << "\nur wallet:$" << acc1wallet;
            cout << "\nur total money" << acc1money;
            cout << "\nur chance of having a pet:75%";

            this_thread::sleep_for(chrono::seconds(15));


        
            goto acc1mnu;
        }

      }else if(bankPassword=="0"){
        goto signinmenu;
      }else{
        goto acc1si;
      }

      break;
    case 2 :
    cout<<"the password is 'Apollo'.thats it. 'apollo'.";
    cout<<"\n\n\n\t\t\t\t[Any Key] Go Back";
  default:
    goto bankmenu;
      break;

    }

      }   
