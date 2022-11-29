#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class System {
    public:
        System(){
            mainMenu();
        }
};

class Details {
    public:
        static string name, gender;
        int age;
        string add;
        static int customerId;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the customer ID: ";
            cin>>customerId;
            cout<<"\nEnter the name: ";
            cin>>name;
            cout<<"\nEnter the age: ";
            cin>>age;
            cout<<"\nComing city: ";
            cin>>add;
            cout<<"\nGender: ";
            cin>>gender;
            cout<<"\nThanks. "<<endl;
        }
};

int Details::customerId;
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
                cout<<(i+1)<<".Flight to "<<flightN[i]<<endl;
            }

            cout<<"\nAirlines"<<endl;
            cout<<"Press the number of the flight you want to book: ";
            cin>>choice;

            switch(choice){
                case 1:{
                    cout<<"\n______________Flights to Queretaro______________\n"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. Queretaro - 498";
                    cout<<"\t16-12-2022 08:00AM 1hrs $1,699"<<endl;
                    cout<<"2. Queretaro - 658";
                    cout<<"\t16-12-2022 16:00AM 4hrs $1,199"<<endl;
                    cout<<"3. Queretaro - 220";
                    cout<<"\t16-12-2022 22:00AM 2hrs $1,399"<<endl;

                    cout<<"\nSelect what flight do you want: ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=1699;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==2){
                        charges=1199;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==3){
                        charges=1399;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press 0 key to go back to the main menu: "<<endl;
                    cin>>back;

                    if(back==0){mainMenu();}
                    else{mainMenu();}

                }
                
                case 2:{
                    cout<<"\n______________Flights to Monterrey______________\n"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. Monterrey - 267";
                    cout<<"\t13-12-2022 05:00AM 2hrs $1,999"<<endl;
                    cout<<"2. Monterrey - 401";
                    cout<<"\t13-12-2022 13:00AM 5hrs $1,299"<<endl;
                    cout<<"3. Monterrey - 463";
                    cout<<"\t13-12-2022 23:00AM 3hrs $1,499"<<endl;

                    cout<<"\nSelect what flight do you want: ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=1999;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==2){
                        charges=1299;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==3){
                        charges=1499;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press 0 key to go back to the main menu: "<<endl;
                    cin>>back;

                    if(back==0){mainMenu();}
                    else{mainMenu();}
                }

                case 3:{
                    cout<<"\n______________Flights to Guadalajara______________\n"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. Guadalajara - 653";
                    cout<<"\t03-12-2022 05:00AM 2hrs $1,999"<<endl;
                    cout<<"2. Guadalajara - 516";
                    cout<<"\t07-12-2022 13:00AM 5hrs $1,299"<<endl;
                    cout<<"3. Guadalajara - 158";
                    cout<<"\t02-12-2022 23:00AM 3hrs $1,499"<<endl;

                    cout<<"\nSelect what flight do you want: ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=1999;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==2){
                        charges=1299;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==3){
                        charges=1499;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press 0 key to go back to the main menu: "<<endl;
                    cin>>back;

                    if(back==0){mainMenu();}
                    else{mainMenu();}
                }

                case 4:{
                    cout<<"\n______________Flights to Toronto______________\n"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. Toronto - 238";
                    cout<<"\t22-12-2022 11:00AM 4hrs $3,999"<<endl;
                    cout<<"2. Toronto - 184";
                    cout<<"\t12-12-2022 17:00AM 9hrs $2,499"<<endl;
                    cout<<"3. Toronto - 360";
                    cout<<"\t15-12-2022 19:00AM 6hrs $3,199"<<endl;

                    cout<<"\nSelect what flight do you want: ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=3999;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==2){
                        charges=2499;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==3){
                        charges=3199;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press 0 key to go back to the main menu: "<<endl;
                    cin>>back;

                    if(back==0){mainMenu();}
                    else{mainMenu();}
                }

                case 5:{
                    cout<<"\n______________Flights to Boston______________\n"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. Boston - 384";
                    cout<<"\t21-12-2022 12:00AM 4hrs $2,999"<<endl;
                    cout<<"2. Boston - 830";
                    cout<<"\t19-12-2022 15:00AM 8hrs $1,699"<<endl;
                    cout<<"3. Boston - 423";
                    cout<<"\t27-12-2022 20:00AM 6hrs $2,199"<<endl;

                    cout<<"\nSelect what flight do you want: ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=2999;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==2){
                        charges=1699;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==3){
                        charges=2199;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press 0 key to go back to the main menu: "<<endl;
                    cin>>back;

                    if(back==0){mainMenu();}
                    else{mainMenu();}
                }

                case 6: {
                    cout<<"\n______________Flights to San Fransisco______________\n"<<endl;
                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. San Fransisco - 258";
                    cout<<"\t18-12-2022 07:00AM 3hrs $2,599"<<endl;
                    cout<<"2. San Fransisco - 377";
                    cout<<"\t16-12-2022 13:00AM 7hrs $1,599"<<endl;
                    cout<<"3. San Fransisco - 542";
                    cout<<"\t30-12-2022 22:00AM 5hrs $2,199"<<endl;

                    cout<<"\nSelect what flight do you want: ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=2599;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==2){
                        charges=1599;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else if(choice1==3){
                        charges=2199;
                        cout<<"\nPurchase Compleate."<<endl;
                        cout<<"You can get your ticket in the main menu. "<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press 0 key to go back to the main menu: "<<endl;
                    cin>>back;

                    if(back==0){mainMenu();}
                    else{mainMenu();}
                }
                default:{
                    cout<<"Invalid Input, Shifting to the main menu. "<<endl;
                    mainMenu();
                    break;
                }
            }
        }
};

class ticket : public registration, Details{
    public:
        void Bill(){
            string destintaion="";
            ofstream outf("register.txt");{
                outf<<"___________Airlines__________"<<endl;
                outf<<"____________Ticket___________\n"<<endl;

                outf<<"Customer ID: "<<Details::customerId<<endl;
                outf<<"Customer Name: "<<Details::name<<endl;
                outf<<"Customer Gender: "<<Details::gender<<endl;

                if(registration::choice==1){destintaion="Queretaro";}
                else if(registration::choice==2){destintaion="Monterrey";}
                else if(registration::choice==3){destintaion="Guadalajara";}
                else if(registration::choice==4){destintaion="Toronto";}
                else if(registration::choice==5){destintaion="Boston";}
                else if(registration::choice==6){destintaion="San Fransisco";}
                
                outf<<"\nDestination: "<<destintaion<<endl;
                outf<<"Final Cost: "<<registration::charges<<endl;
            }
            outf.close();
        }
        void dispBill(){
            ifstream ifs("register.txt");
            {
                if(!ifs){
                    cout<<"Error"<<endl;
                }
                while(!ifs.eof()){
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};


float registration::charges;
int registration::choice;

void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                 Flights Booking System \n"<<endl;
    cout<<"\t________________________Main Menu_______________________ \n"<<endl;

    cout<<"\t________________________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration        \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges         \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                        \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t________________________________________________________"<<endl;

    cout<<"\tPlease Select an option: ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice){
        case 1:{
            cout<<"___________Customers__________\n"<<endl;
            d.information();
            cout<<"Press 0 to go back to the main menu ";
            cin>>back;

            if(back==0){mainMenu();}
            else{mainMenu();}
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

            cout<<"Press 1 if you want your ticket ";
            cin>>back;

            if(back==1){
                t.dispBill();
                cout<<"Press 0 to go back to the main menu ";
                cin>>back;
                if(back==0){mainMenu();}
                else{mainMenu();}
            }
            else{mainMenu();}          
            break;
        }
        case 4:{
            cout<<"\n\n\t________Thank you________\n"<<endl;
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
    System Obj;
    return 0;
}