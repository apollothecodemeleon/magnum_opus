#include <iostream>
#include<chrono>
#include<thread>
#include <stdlib.h>
using namespace std;


string bankPassword;//calling the variable for the password that you enter
int bankMenu;//calling the variable to choose the thing on the menu
int accountChoice;//calling the variable to choose the account
int account_ops;//calling the variable for the choice
float acc1balance=100000;
float acc1wallet=1000;





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
    
    cout<<"\n\t\tselect the account you want to sign in to(note: the accounts are universal across al my projects:)"; 
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
        cout<<"\n4)sort words";
        cout<<"\n\n\n\t\t\t\t[0] Go Back";
        cout<<"\t\t[1-3]Select Choice";
        
        cin>>account_ops; 


        switch(account_ops){
          
          case 0:
          goto acc1mnu;
          break;
          
          case 1:
          cout << "\033[2J\033[0;0H";
            
          cout<<"\nhow much mone would you like to deposit";
          cout<<"\ninfo:";
          cout<<"\nBalance= $"<<acc1balance;
          cout<<"\nMoney in wallet= $"<<acc1wallet;


          cin>>depositOrWithdrawAmount;
          walletchange=acc1wallet-depositOrWithdrawAmount;
          acc1wallet=walletchange;
          
          balancechange = acc1balance+depositOrWithdrawAmount;
          acc1balance = balancechange;
          
          
          
          
          
          
        }
        
      }else if(bankPassword=="0"){
        goto signinmenu;
      }else{
        goto acc1si;
      }
      
      break;

      break;

    }
  
      }   
  
  
  
}
