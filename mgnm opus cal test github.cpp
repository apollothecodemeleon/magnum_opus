//line 2 -5 is to avoid errors
#include<iostream>
#include<chrono>
#include<thread>
#include<stdlib.h>

using namespace std;



void calfunct() {
   // declaring all variables
    int cal_opertr;
    int cal_num1;
    int cal_num2;
    int cal_s_d_p_q_a;
  
    string stall;
    calstart:
    cout << "\n\t\t\t\t\tChoose an operator";
    cout << "\n1) Addition";
    cout << "\n2) Subtraction";
    cout << "\n3) Division";
    cout << "\n4) Multiplication";
    cout << "\n5) Averages";
    cout << "\n6) Back";
    cout << "\n\tEnter your choice: ";
    cin >> cal_opertr;

  
  
    switch (cal_opertr) {
        case 1:
            cout << "\033[2J\033[0;0H";
            cout << "\nInput the first number: ";
            cin >> cal_num1;
            cout << "\033[2J\033[0;0H";
            cout << "Input the second number: ";
            cin >> cal_num2;
            cout << "\033[2J\033[0;0H";
            cal_s_d_p_q_a = cal_num1 + cal_num2;
            cout << "\033[2J\033[0;0H";
            cout <<"\n——————————————————————————";
            cout << "\nThe sum was: " << cal_s_d_p_q_a;
            cout <<"\n——————————————————————————";
            goto calstart;

      case 2:
      cout << "\033[2J\033[0;0H";
            cout << "\nInput the first number: ";
            cin >> cal_num1;
            cout << "\033[2J\033[0;0H";
            cout << "Input the second number: ";
            cin >> cal_num2;
            cout << "\033[2J\033[0;0H";
            cal_s_d_p_q_a = cal_num1 - cal_num2;
            cout << "\033[2J\033[0;0H";
            cout <<"\n——————————————————————————";
            cout << "\nThe difference was: " << cal_s_d_p_q_a;
            cout <<"\n——————————————————————————";
            goto calstart;
       case 3:
       cout << "\033[2J\033[0;0H";
            cout << "\nInput the first number: ";
            cin >> cal_num1;
            cout << "\033[2J\033[0;0H";
            cout << "Input the second number: ";
            cin >> cal_num2;
            cout << "\033[2J\033[0;0H";
            cal_s_d_p_q_a = cal_num1 / cal_num2;
            cout << "\033[2J\033[0;0H";
            cout <<"\n——————————————————————————";
            cout << "\nThe quotient was: " << cal_s_d_p_q_a;
            cout <<"\n——————————————————————————";
            goto calstart;
       case 4:
       cout << "\033[2J\033[0;0H";
            cout << "\nInput the first number: ";
            cin >> cal_num1;
            cout << "\033[2J\033[0;0H";
            cout << "Input the second number: ";
            cin >> cal_num2;
            cout << "\033[2J\033[0;0H";
            cal_s_d_p_q_a = cal_num1 * cal_num2;
            cout << "\033[2J\033[0;0H";
            cout <<"\n——————————————————————————";
            cout << "\nThe product was: " << cal_s_d_p_q_a;
            cout <<"\n——————————————————————————";
            goto calstart;
      case 5: 
    //i honestly dont know how this works but ill try to break it down beacuse i used a little somthing that all programers do called "steal from stack overflow(aka coding reddit for those that dont know)"  
         cout << "\033[2J\033[0;0H";//same command that clears terminal
      int mean_amnt, i; //calling the variables btw i hate how the stackoverflow pepole just call it "clean code" by making their variables one letter to confuse pepole reading it
    float num[100], sum=0.0, average;

    cout << "Enter the amount of numbers in your data: ";
    cin >> mean_amnt;

    while (mean_amnt > 200 || mean_amnt <= 0)                                                                //ohhhh i get it the'i' variable is how many numbers you have to input
    {
        cout << "Error; number should be in range of (1 to 200)." << endl;
        cout << "Enter the number again: ";
        cin >> mean_amnt;
    }

    for(i = 0; i < mean_amnt; ++i)                      //this essentially makes it so that it asks you to enter the next number for however many times you said there were numbers
    {
        cout << i + 1 << ". enter number: ";
        cin >> num[i];                                                                                           // this part is just taking the inputs then adding them to the sum
        sum += num[i];
    }

    average = sum / mean_amnt;                                                // this part is doing what you would be doing by dividing the sum by the amount of numbers you input
    cout << "\033[2J\033[0;0H";
    cout <<"\n——————————————————————————";
    cout << "\nThe average = " << average;
    cout <<"\n——————————————————————————";
    goto calstart;

    
    }
  
    
}


    



int main() {
    calfunct(); 
    return 0;
}
