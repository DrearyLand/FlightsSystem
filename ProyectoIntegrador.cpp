//Los integrates son Ezzat Alzahori Campos y Stephanie Ortega

#include <iostream>
#include <sstream>
#include <fstream>
#include "ClasesPrueba.h"

using namespace std;

Login l;
flightDetails fD;

void mainMenu();
void cancel();

void flightDetails::flightMenu(){
    cout<<"_________________________________________________"<<endl;
    cout<<"\n1) Monterrey\n2) Guadalajara \n3) New York \n4) Boston\n5) San Fransisco\n6) Toronto"<<endl;
    cout<<"\nPress the number of the flight you want to book: ";
    cin>>choice;

    switch (choice){
    case 1:
        cout<<"\nMonterrey - 900km - $1,999"<<endl<<endl;
        cout<<"How many seats do you want to buy(if you want to cancel press 0), no more than 10 seats: ";
        cin>>numFlights;
        if(numFlights==0 || numFlights>10){
            cout<<"\nInvalid input, returning to main Menu...";
            cin.ignore();
            mainMenu();
            break;
        }
        else{
            price = numFlights*1999;
            Km = numFlights*900;
            if(Km>=5000){
                price=price*.60;
            }
            cout<<"\nThanks for buying with us redirecting you to the main menu..."<<endl<<endl;
            getPrice();
            getKm();
            mainMenu();
            // cout<<"\nTotal price: "<<price<<endl;
            // cout<<"Total Km: "<<Km;
        }
        break;
    case 2:
        cout<<"\nGuadalajara - 550km - $1,499"<<endl<<endl;
        cout<<"How many seats do you want to buy(if you want to cancel press 0), no more than 10 seats: ";
        cin>>numFlights;
        if(numFlights==0 || numFlights>10){
            cout<<"\nInvalid input, returning to main Menu...";
            cin.ignore();
            mainMenu();
            break;
        }
        else{
            price = numFlights*1499;
            Km = numFlights*550;
            if(Km>=5000){
                price=price*.60;
            }
            cout<<"\nThanks for buying with us redirecting you to the main menu..."<<endl<<endl;
            getPrice();
            getKm();
            mainMenu();
            // cout<<"\nTotal price: "<<price<<endl;
            // cout<<"Total Km: "<<Km;
        }
        break;    
    case 3:
        cout<<"\nNueva York - 3350km - $2,499"<<endl<<endl;
        cout<<"How many seats do you want to buy(if you want to cancel press 0), no more than 10 seats: ";
        cin>>numFlights;
        if(numFlights==0 || numFlights>10){
            cout<<"\nInvalid input, returning to main Menu...";
            cin.ignore();
            mainMenu();
            break;
        }
        else{
            price = numFlights*2499;
            Km = numFlights*3350;
            if(Km>=5000){
                price=price*.60;
            }
            cout<<"\nThanks for buying with us redirecting you to the main menu..."<<endl<<endl;
            getPrice();
            getKm();
            mainMenu();
            // cout<<"\nTotal price: "<<price<<endl;
            // cout<<"Total Km: "<<Km;
        }
        break;
    case 4:
        cout<<"\nBoston - 4600km - $2,999"<<endl<<endl;
        cout<<"How many seats do you want to buy(if you want to cancel press 0), no more than 10 seats: ";
        cin>>numFlights;
        if(numFlights==0 || numFlights>10){
            cout<<"\nInvalid input, returning to main Menu...";
            cin.ignore();
            mainMenu();
            break;
        }
        else{
            price = numFlights*2999;
            Km = numFlights*4600;
            if(Km>=5000){
                price=price*.60;
            }
            cout<<"\nThanks for buying with us redirecting you to the main menu..."<<endl<<endl;
            getPrice();
            getKm();
            mainMenu();
            // cout<<"\nTotal price: "<<price<<endl;
            // cout<<"Total Km: "<<Km;
        }
        break;
    case 5:
        cout<<"\nSan Fransisco - 3600km - $2,699"<<endl<<endl;
        cout<<"How many seats do you want to buy(if you want to cancel press 0), no more than 10 seats: ";
        cin>>numFlights;
        if(numFlights==0 || numFlights>10){
            cout<<"\nInvalid input, returning to main Menu...";
            cin.ignore();
            mainMenu();
            break;
        }
        else{
            price = numFlights*2699;
            Km = numFlights*3600;
            if(Km>=5000){
                price=price*.60;
            }
            cout<<"\nThanks for buying with us redirecting you to the main menu..."<<endl<<endl;
            getPrice();
            getKm();
            mainMenu();
            // cout<<"\nTotal price: "<<price<<endl;
            // cout<<"Total Km: "<<Km;
        }
        break;
    case 6:
        cout<<"\nSan Fransisco - 4200km - $3,299"<<endl<<endl;
        cout<<"How many seats do you want to buy(if you want to cancel press 0), no more than 10 seats: ";
        cin>>numFlights;
        if(numFlights==0 || numFlights>10){
            cout<<"\nInvalid input, returning to main Menu...";
            cin.ignore();
            mainMenu();
            break;
        }
        else{
            price = numFlights*3299;
            Km = numFlights*4200;
            if(Km>=5000){
                price=price*.60;
            }
            cout<<"\nThanks for buying with us redirecting you to the main menu..."<<endl<<endl;
            getPrice();
            getKm();
            mainMenu();
            // cout<<"\nTotal price: "<<price<<endl;
            // cout<<"Total Km: "<<Km;
        }
        break;
    default:
        system("cls");
        cout<<"You've made a mistake , Try again..\n"<<endl;
        flightMenu();
        break;
    }
}

float flightDetails::getPrice(){return price;}
int flightDetails::getKm(){return Km;}

void Login::login(){
    int count;
    string u,p;
    system("cls");
    cout<<"please enter the following details"<<endl;
    cout<<"USERNAME :";
    cin>>user;
    cout<<"PASSWORD :";
    cin>>pass;

    ifstream input("database.txt");
    while(input>>u>>p){
        if(u==user && p==pass){
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1){
        cout<<"\nHello "<<user<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
        mainMenu();
    }
    else{
        cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
        loginMenu();
    }
}

void Login::registr(){
    string reguser,regpass,ru,rp;
    system("cls");
    cout<<"Enter the username :";
    cin>>reguser;
    cout<<"\nEnter the password :";
    cin>>regpass;

    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<<"\nflightDetails Sucessful\n";
    loginMenu();
}

void Login::loginMenu(){
    // cin.ignore();
    int choice;
    cout<<"\n***********************************************************************\n\n\n";
    cout<<"                      Welcome to login page                               \n\n";
    cout<<"*******************        MENU        *******************************\n\n";
    cout<<"1.LOGIN"<<endl;
    cout<<"2.REGISTER"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Please enter your choice: ";
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1:
            login();
            break;
        case 2:
            registr();
            break;
        case 3:
            cout<<"Thank you, stoping program. \n\n";
            break;
        default:
            system("cls");
            cout<<"You've made a mistake , Try again..\n"<<endl;
            loginMenu();
    }
}

void mainMenu(){
    // ticket t;
    int menuChoice;
    int ticketChoice;
    cout<<"\n\n\t\t\tMain menu";
    cout << "\n\n\t\t\t1.Book Flight \n\t\t\t2.Cancel Fight \n\t\t\t3.Check Ticket \n\t\t\t4.Exit" << endl;
    cout << "\n\t\t Please enter your choice: ";
    cin>>menuChoice;

    switch (menuChoice){
        case 1:
            cout<<"\n\t\t   Booking System"<<endl;
            fD.flightMenu();
            break;
        case 2:
            cout<<"\n\t   Welcome to the Cancel System"<<endl;
            cancel();
            break;
        case 3:
            cout<<"\n\t   Welcome to the Ticket System"<<endl;
            cout<<"1) Generate ticket\n2) View Ticket"<<endl;
            cin>>ticketChoice;
            if(ticketChoice==1){
                fD.Bill();
            }
            else if(ticketChoice==2){
                fD.dispBill();
            }
            break;
        case 4:
            cout<<"Thank you :D";
            break;
        
        default:
            cout<<"You've made a mistake , Bye Bye..\n"<<endl;
            break;
    }
}

void flightDetails::Bill(){
    cout<<"Enter a ticket number: ";
    cin>>dataFile;
    ofstream outf("Tickets/"+dataFile+".txt");{
        outf<<"\n____________Ticket___________\n"<<endl;

        outf<<"User: "<<l.getUser()<<endl;

        if(choice==1){destination="Monterrey";}
        else if(choice==2){destination="Guadalajara";}
        else if(choice==3){destination="Nueva York";}
        else if(choice==4){destination="Boston";}
        else if(choice==5){destination="San Fransisco";}
        else if(choice==6){destination="Toronto";}
                    
        outf<<"\nDestination: "<<destination<<endl;
        outf<<"Total km: "<<Km<<endl;
        outf<<"Final cost: "<<price<<endl;
        outf<<"\nTicket number: "<<dataFile;
    }
    outf.close();
    cout<<"File Created. Your ticket is: "<<dataFile;
    mainMenu();
}

void flightDetails::dispBill(){
    cout<<"Enter your ticket number to find your ticket: ";
    cin>>dataFile;
    ifstream ifs("Tickets/"+dataFile+".txt");
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

void cancel(){
    string cancel;
    string file;
    cout<<"Enter the ticket number you want to cancel: ";
    cin>>cancel;
    file = ("Tickets/"+cancel+".txt");
    remove(file.c_str());
}

int main(){
    system("cls");
    system("color 0E");
    cout << "\n\n \t\tWelcome To Flight Reservation System" << endl;
    cout <<"\n\t   **********************************************\n";
    cout << "\t   Book your Flight tickets at affordable prices!" << endl;
    cout <<"\n\t";
    
    l.loginMenu();

}