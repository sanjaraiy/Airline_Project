#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>
#include<string>
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

int Details::cId;
string Details::name;
string Details::gender;

class registration {
    public :
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights(){
      vector<string>flightN={"Canada","UK","USA","Dubai","Europe"};
      for(int i=0;i<flightN.size();i++){
        cout<<(i+1)<<".flight to"<<flightN[i]<<endl;
      }
      cout<<"\nWelcome to the Airlines!"<<endl;
      cout<<"Press the number of the country of which you wnat to book the flight:";
      cin>>choice;

      switch (choice)
      {
      case 1:{
         cout<<"____________________Welcome to Dubai Emirates____________________\n"<<endl;
         cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
         cout<<"Following are the flights\n"<<endl;
         cout<<"1. CDA-563"<<endl;
         cout<<"\t02-02-2024 8:00AM 10hrs Rs. 14000"<<endl;
         cout<<"2. CDA-545"<<endl;
         cout<<"\t03-02-2024 4:00AM 12hrs Rs. 10000"<<endl;
         cout<<"3. CDA-218"<<endl;
         cout<<"\t04-02-2024 1:00PM 11hrs Rs. 8000"<<endl;

         cout<<"\nSelect the flight you want to book:";
         cin>>choice1;

         if(choice1==1){
              charges=14000;
              cout<<"\nYou have successfully booked the flight CDA - 563"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
         }else if(choice1==2){
              charges=10000;
              cout<<"\nYou have successfully booked the flight CDA - 545"<<endl;
              cout<<"You can go back to menu and take the ticket"<<endl;
         }else if(choice1==3){
            charges=8000;
            cout<<"\nYou have successfully booked the flight CDA - 218"<<endl;
            cout<<"You can go back to menu and take the ticket"<<endl;
         }else{
            cout<<"Invalid input, shifting to the previous menu"<<endl;
            flights();
         }

         cout<<"Press any key to go back to the main menu:"<<endl;
         cin>>back;
         
         if(back==1){
            mainMenu();
         }else{
            mainMenu();
         }
      }
      
        
      }
    }
}


int main(){
    
}