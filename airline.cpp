#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu(){
   int lchoice;
   int schoice;
   int back;

   cout<<"\t             VISTARA Airlines \n"<<endl;
   cout<<"\t_____________ Main Menu _________________"<<endl;
   cout<<"\t_________________________________________"<<endl;
   cout<<"\t|\t\t\t\t\t\t\t|"<<endl;

   cout<<"\t|\t Press 1 to add the Customer Details          \t|"<<endl;
   cout<<"\t|\t Press 2 to add the Flight Registration       \t|"<<endl;
   cout<<"\t|\t Press 3 for Ticket and Charges               \t|"<<endl;
   cout<<"\t|\t Press 4 to Exit                              \t|"<<endl;
   cout<<"\t|\t\t\t\t\t\t|"<<endl;
   cout<<"\t_______________________________________"<<endl;

   cout<<"Enter the choice : ";
   cin>>lchoice;

   Details d;
   registration r;
   ticket t;

   switch(lchoice){
    case 1: {
         cout<<"_______________Customers____________________\n"<<endl;
         d.information();

         cout<<"Press any key to go back to Main menu ";
         cin>>back;

         if(back==1){
            mainMenu();
         }else{
             mainMenu();
         }
         break;
    }
    
   }
}



class Management {
    public:
    
    //Constructor
    Management(){
       mainMenu();
    }


};

int main(){
    
}