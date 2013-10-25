//========================================================================
// Xiomara Figueroa Fontanez                    801 10 2364
// CCOM 3033 secc. 002                          March 14, 2013
// Prof. Rafael Arce                            RockPaperScissorsGame.cpp
//
// * A program that allow you to play the RockPaperScissors game against
//   the computer. 
// 
//========================================================================

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std; 

//Prototypes
    void menuChoice(int& uChoice);
    void compChoice(int& cChoice);
    void whoWin(int& uChoice, int& cChoice);

int main (){
    int userChoice, computerChoice;
  
    do{
        menuChoice(userChoice);
        if(userChoice != 1 && userChoice != 2 && userChoice != 3){
          menuChoice(userChoice);
        } 
        compChoice(computerChoice);
    }while(userChoice == computerChoice);
    whoWin(userChoice, computerChoice);
    return 0 ;
}
       
// Function for the menu and user's choice
  
void menuChoice(int& uChoice){ 
   cout << "Please, enter the number of your choice: \n";
   cout << " 1. Rock\n"; 
   cout << " 2. Paper\n"; 
   cout << " 3. Scissors\n";
   cout << "Your choice: ";    
   cin >> uChoice; 
   
   switch (uChoice){
   case 1: cout << " * You choose Rock\n"; 
   break; 
   case 2: cout << " * You choose Paper\n"; 
   break;  
   case 3: cout << " * You choose Scissors\n"; 
   break; 
   default: cout << "You must choose between (1, 2 or 3)\n";
   break;}}  
        
// Function for the computer's choice
void compChoice(int& cChoice){
   
   srand(time(NULL));
   
   cChoice = 1 + rand() % 3 ;
   
   if(cChoice == 1){
      cout << " * The computer choose Rock: \n";  
   }
   else if(cChoice == 2){  
      cout << " * The computer choose Paper: \n";
   }
   else if(cChoice == 3){  
      cout << " * The computer choose Scissors: \n";}
   }
   
  // Funtion to determine the winner 
   
void whoWin(int& uChoice, int& cChoice){
    do{
        if((uChoice == 1 && cChoice == 3) ||(uChoice == 2 && cChoice == 1) || (uChoice == 3 && cChoice == 2)){
            cout << "\tGanaste! :)\n"; 
        }
        else{
            cout << "\tPerdiste! :(\n"; 
        }
    }while(uChoice == cChoice);} 
