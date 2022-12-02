#include <iostream>
using namespace std;

class Login{
    protected://Atributes
        string user, pass;
    public://Metods

        void loginMenu();
        void login();
        void registr();

        string getUser(){
            return user;
        }

};

class flightDetails : Login{
    protected://Atributes
        int choice, numFlights, Km;
        float price;
        string dataFile, destination = "", user1;
        char arr[100];
    public://Metods
        flightDetails(){
            price=0;
            Km=0;
        };//Builder

        void flightMenu();
        void Bill();
        void dispBill();

        float getPrice();
        int getKm();
        // string getDestination();
        
        ~flightDetails(){};

};

// class ticket : public flightDetails, Login{
//     protected:
        
//     public:
//         ticket(){};
        
//         ~ticket(){};
// };