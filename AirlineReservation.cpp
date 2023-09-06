//                                         ..................... Airline  Reservation System ........................                                //
#include<iostream>
#include"loading.h"
#include<fstream>
#include<iomanip>
#include<windows.h>
using namespace std;

void mainmenu();

class Management{
    public:
        Management(){
            mainmenu();
        }
};
class Details{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cID;
        char arr[100];

        void information(){
            cout<<"\n Enter the customer Id:"<<endl;
            cin>>cID;
            cout<<"\n Enter The Name:";
            cin>>name;
            cout<<"Enter the age:";
            cin>>age;
            cout<<"\n Adress:";
            cin>>add;
            cout<<"\n Gender :";
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;

        }
};

int Details::cID;
string Details::name;
string Details::gender;

class Registration{
    public:
        static int choice;
        int choice1;
        int back,quantity;
        static float charges;

        void flight(){
            string flightN[]={"Mumbai","Delhi","Kolkata","Chennai","Gangtok"};

            for(int i=0;i<3;i++){
                cout<<(i+1)<<". Flight to"<<flightN[i]<<endl;
            }

            cout<<"\n ----------Welcome to the airlines------------\n"<<endl;
            cout<<"press the number of the countruy of which you want to book the flight: ";
            cin>>choice;
            switch(choice){
                case 1:
                {
                    cout<<"________________Welcome To mumbai_____________\n"<<endl;

                    cout<<"Your Comfort is our Priority, Enjoy the Journey!"<<endl;
                    cout<<" Following are the Flights \n"<<endl;
                    cout<<"1. MUM 4239\n"<<endl;
                    cout<<"\t\t 03-09-2023 s: 8:00Am. 10 hrs Rs. 10000"<<endl;
                    cout<<"1. MUM 3239\n"<<endl;
                    cout<<"\t\t 09-09-2023 s: 11:00pm. 8 hrs Rs. 14000"<<endl;
                    cout<<"1. MUM 2239\n"<<endl;
                    cout<<"\t\t 11-09-2023  s: 1:00pm. 12 hrs Rs. 8000"<<endl;

                    cout<<"\n select the flight: ";
                    cin>>choice1;

                    cout<<"enter the quantity: ";
                    cin>>quantity;

                    switch(choice1){
                        case 1: charges = 10000*quantity;
                        cout<<"You have successfully booked th flight MUM 4239\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break;
                        case 2:
                        charges = 14000*quantity;
                        cout<<"You have successfully booked th flight MUM 3239\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break; 
                        case 3:
                        charges = 8000*quantity;
                        cout<<"You have successfully booked th flight MUM 2239\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break;
                        default: cout<<"\nInvalid Input! return to mainmenu\n"<<endl;
                        flight();
                    }
                    cout<< "press any key to go back to mainmenu\n"<<endl;
                    cin>>back;

                    if(back == 1){
                        mainmenu();
                    }
                    else{
                        mainmenu();
                    }
                    break;
                }
                case 2: 
            {
                cout<<"________________Welcome To DELHI_____________\n"<<endl;

                    cout<<"Your Comfort is our Priority, Enjoy the Journey!\n"<<endl;
                    cout<<" Following are the Flights \n"<<endl;
                    cout<<"1. DELH 4156\n"<<endl;
                    cout<<"\t\t 05-09-2023 s: 10:00Am. 4 hrs Rs. 5000\n"<<endl;
                    cout<<"2. DELH 3156\n"<<endl;
                    cout<<"\t\t 16-09-2023 s: 10:00pm. 2 hrs Rs. 9000\n"<<endl;
                    cout<<"3. DELH 2156\n"<<endl;
                    cout<<"\t\t 07-09-2023  s: 3:00Am. 5 hrs Rs. 3000\n"<<endl;

                    cout<<"\n select the flight: ";
                    cin>>choice1;
                    cout<<"enter the quantity: ";
                    cin>>quantity;

                    switch(choice1){
                        case 1: charges = 5000*quantity;
                        cout<<"You have successfully booked thE flight DELH 4156\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break;
                        case 2:
                        charges = 9000*quantity;
                        cout<<"You have successfully booked the flight DELH 3156\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break; 
                        case 3:
                        charges = 3000*quantity;
                        cout<<"You have successfully booked the flight DELH 2156\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break;
                        default: cout<<"\nInvalid Input! return to mainmenu\n"<<endl;
                        flight();
                    }
                    cout<< "press any key to go back to mainmenu\n"<<endl;
                    cin>>back;

                    if(back == 1){
                        mainmenu();
                    }
                    else{
                        mainmenu();
                    }
                    break;
            }
            case 3:
            {
                 cout<<"________________Welcome To KOLKATA_____________\n"<<endl;

                    cout<<"Your Comfort is our Priority, Enjoy the Journey!\n"<<endl;
                    cout<<" Following are the Flights \n"<<endl;
                    cout<<"1. DELH 4156\n"<<endl;
                    cout<<"\t\t 05-09-2023 s: 10:00Am. 4 hrs Rs. 5000\n"<<endl;
                    cout<<"2. DELH 3156\n"<<endl;
                    cout<<"\t\t 16-09-2023 s: 10:00pm. 2 hrs Rs. 9000\n"<<endl;
                    cout<<"3. DELH 2156\n"<<endl;
                    cout<<"\t\t 07-09-2023  s: 3:00Am. 5 hrs Rs. 3000\n"<<endl;

                    cout<<"\n select the flight: ";
                    cin>>choice1;
                    cout<<"\nEnter Quantity: ";
                    cin>>quantity;

                    switch(choice1){
                        case 1: charges = 5000*quantity;
                        cout<<"You have successfully booked thE flight DELH 4156\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break;
                        case 2:
                        charges = 9000*quantity;
                        cout<<"You have successfully booked the flight DELH 3156\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break; 
                        case 3:
                        charges = 3000*quantity;                                                    //38:42
                        cout<<"You have successfully booked the flight DELH 2156\n"<<endl;
                        cout<<"You can go back to menu and take the ticket:\n"<<endl;
                        break;
                        default: cout<<"\nInvalid Input! return to mainmenu\n"<<endl;
                        flight();
                    }
                    cout<< "press any key to go back to mainmenu\n"<<endl;
                    cin>>back;

                    if(back == 1){
                        mainmenu();
                    }
                    else{
                        mainmenu();
                    }
                    break;
            }
            default:
            {
                cout<<"Invalid!! Input,, returning to the main menu! "<<endl;
                mainmenu();
                break;
            }
        }
        }
};
float Registration::charges;
int Registration::choice;


class ticket : public Registration,Details
{
    public:
        void Bill(){
            string destinations=" ";
            ofstream outf("records.txt");
            {
                outf<<"\t____________SKY AIRLINES__________"<<endl;
                outf<<"\t\t__________TICKET________"<<endl;
                outf<<"\t\t\t_________"<<endl;
                outf<<"\t\t\t\t_____"<<endl;

                outf<<"Customer ID"<<Details::cID<<endl;
                outf<<"Customer NAME"<<Details::name<<endl;
                outf<<"Customer gender"<<Details::gender<<endl;
                outf<<"\t Description"<<endl<<endl;

                if(Registration::choice==1){
                    destinations="MUMBAI";
                }
                else if(Registration::choice==1){
                    destinations="DELHI";
                }
                else if(Registration::choice==1){
                    destinations="KOLKATA";
                }
                outf<<"destination\t\t"<<destinations<<endl;
                outf<<"flight cost :\t\t"<<Registration::charges<<endl;

            }
            outf.close();
        }
        void displayBill(){
            ifstream ifs("records.txt");
            {
                if(!ifs){
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof()){
                        ifs.getline(arr,100);
                        cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};
void mainmenu(){
    int lchoice;
    int schoice;
    int back;
    cout<<endl;
    cout<<"\t         ~ SKY Airlines ~"<<endl;
    cout<<"\t    ________ Main Menu _______"<<endl;

    cout<<"\t\t    __________"<<endl;
    cout<<"|\t\t\t\t\t\t      |"<<endl;
    // cout<<"<<endl;
    cout<<"|\t Press 1 to add Customer Details              |\t"<<endl;
    cout<<"|\t Press 2 to for Flight Registration           |\t"<<endl;
    cout<<"|\t Press 3 to  for Tickit And Charges           |\t"<<endl;
    cout<<"|\t Press 4  to Exit                             |\t"<<endl;
    
    cout<<"\nEnter Choice  :";
    cin>>lchoice;

    Details d;
    Registration r;
    ticket t;

    switch(lchoice){
        case 1:{
            cout<<"____________Customers___________\n"<<endl;
            d.information();
            cout<<"Press 1 to go back to the main menu ";
            cin>>back;

            if(back ==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
            break;
        }
        case 2:
            cout<<"___________Book A Flight using a system___________\n"<<endl;
            r.flight();
            break;
        case 3:
        cout<<" __________Get ur Tickit_________\n"<<endl;
        t.Bill();

        cout<<" Your Tickit is Printed, You CAn collect it"<<endl;
        cout<<"press 1. to display Your Tickit"<<endl;

        cin>>back;
        if(back ==1){
            t.displayBill();
            cout<<" Press any key key to go BACK to main menu";
            if(back==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
        }
        else{
            mainmenu();
        }
        break;
        case 4: 
            cout<<"\n\n\t\t ________Thank You !!_______"<<endl;
                exit(0);
                break;
        default:
        {
            cout<<" Invalid Input, Please try again"<<endl;
            mainmenu();
        }
    }   
}
int main(){
    Management Mobj;
    return 0;
}