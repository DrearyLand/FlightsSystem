#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Managment {
    public:
        Managment(){
            mainMenu();
        }
};

class Details {
    public:
        static string name, gender;
        int phone;
        int age;
        static int customerId;
        char arr[100];

        void information
        {
            cout<<"\nEnter the customer ID: ";
            cin>>customerId;
            cout<<"\nEnter the name: ";
            cin>>name;
            cout<<"\nEnter the age: ";
            cin>>age;
            cout<<"\nAddress: ";
            cin>>add;
            cout<<"\nGender: ";
            cin>>gender;
            cout<<"\nThanks. "<<endl;
            
            
        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights(){
            string flightN[]={"Queretaro","Monterrey","Guadalajara","Toronto","Boston","San Fransisco"};
            int length = sizeof(flightN)/sizeof(flightN[0]);
            for(int i=0;i<length;i++){
                cout<<(i+1)<<".flight to"<<flightN[i]<<endl;
            }

            cout<<"\nWelcome"<<endl;
            cout<<"Press the number of the flight you want to book: ";
            cin>>choice;

            switch(choice){
                case 1:{
                    cout<<"______________Queretaro______________\n"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. Queretaro - 498";
                    cout<<"\t16-12-2022 08:00AM 10hrs $1,500"<<endl;
                    cout<<"1. Queretaro - 658";
                    cout<<"\t16-12-2022 16:00AM 12hrs $1,000"<<endl;
                    cout<<"1. Queretaro - 220";
                    cout<<"\t16-12-2022 22:00AM 11hrs $1,200"<<endl;

                    cout<<"\nSelect what flight do you want: ";
                    cin>>choice;

                    if(choice==1){
                        charges=1500;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;

                    }
                }
            }
        }
}



void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t           Aeroméxico \n"<<endl;
    cout<<"\t___________Main Menu__________"<<endl;

    cout<<"\t_____________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration        \t|"<<endl;
    cout<<"\t|\t Press 2 for Ticket and Charges         \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                        \t|"<<endl;
    cout<<"\t_____________________________________________"<<endl;

    cout<<"Enter a choice: ";
    cin>>lchoice

    Details d;
    registration r;
    ticket t;

    switch (lchoice){
        case 1:{
            cout<<"___________Customers__________\n"<<endl;
            d.information()
            cout<<"Press any to go back to the main menu ";
            cin>>back;

            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }
        case 2:{
            cout<<"___________Book a flight__________\n"<<endl;
            r.flights();
            break;
        }
        case 3:{
            cout<<"___________Get your Ticket__________\n"<<endl;
            t.Bill();

            cout<<"Press 1 if your want your ticket";
            cin>>back;

            if(back==1){
                t.display();
                cout<<"Press any to go back to the main menu ";
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else{
                mainMenu();
            }          
            break;
        }
        case 4:{
            cout<<"\n\n\t________Thank you________"<<endl;
            break;
        }
        default:{
            cout<<"Invalid input\n"<<endl;
            mainMenu();
            break;
        }
    }
}

int main() {
    Managment Obj;
    return 0;
}