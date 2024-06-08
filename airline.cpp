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
    
    case 2: {
        cout<<"_____________Book a flight using this system________________\n"<<endl;
        r.flights();
        break;
    }
    
    case 3:{ 
        cout<<"_____________GET YOUR TICKET______\n"<<endl;
        t.Bill();
    
        cout<<"Your ticket is printed, you can collect it \n"<<endl;
        cout<<"Press 1 to display your ticket ";

        cin>>back;

        if(back==1){
           t.display();
           cout<<"Press any key to go back to main menu:";
           cin>>back;

           if(back==1){
              mainMenu();
           }else{
              mainMenu();
           }
        }else{
            mainMenu();
        }

        break;
     
    }
   
   case 4: {
      cout<<"\n\n\t_______________ Thank-you ___________________"<<endl;
      break;
   }

   default : {
      cout<<"Invalid input, Please try again!\n"<<endl;
      mainMenu();
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

class Details {
    public :
     static string name, gender;
     int phoneNo;
     int age;
     string address;
     static int cId;
     char arr[100];

     void information(){
        cout<<"\nEnter the customer ID:";
        cin>>cId;
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter the age:";
        cin>>age;
        cout<<"\n Address:";
        cin>>address;
        cout<<"\n Gender:";
        cin>>gender;
        cout<<"Your details are saved with us\n"<<endl;
     }
};




int main(){
    
}