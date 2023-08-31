#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    char name[30], pizza1[]="chicken Dominator",pizza2[] = "peeper barbecue chicken",pizza3[]="CHICKEN FIESTA",pizza4[]="PEEPY paneer",roll1[]= "Chicken Roll",roll2[]="Chicken-Egg roll",roll3[]="Egg-Roll",roll4[]="Double Egg Roll",burr1[]="Veg Longer Burger",burr2[]="Chicken Longer Burger",burr3[]="Classic Zinger Burger";
    char snack1[]="Chicken & Fries Bucket",snack2[]="Mingles Bucket",snack3[] ="Hot and Crispy Chicken";
    char biri1[]="Chicken Biriyani",biri2[]="Egg Biriyani",biri3[]="Veg biriyani",biri4[]="Mutton Biriyani";
    int choice =0, pchoice1, quantity,pchoice2,s;
    char gotostart,pchoice;
    begining:
    system("CLS");
    cout<<"\t\t\t............Your Food Delight............\n\n";
    cout<<"please enter ur name :\t ";
    cin.getline(name,20);
    cout<<"Hello, "<<name<<"\n\n What would you like to order ?\n\n";

    cout<<"\t\t\t\t.........MENU.........\n\n";

    cout<<"1. Pizza\n";
    cout<<"2. Burgers\n";
    cout<<"3. Roll\n";
    cout<<"4. Biriyani\n";
    cout<<"5. Snacks\n";

    cout<<"\nplease enter your choice: ";
    cin>>choice;

    if(choice ==1){
        cout<<"\navailable pizzas are\n";
        cout<<"1."<<pizza1<<endl;
        cout<<"2."<<pizza2<<endl;
        cout<<"3."<<pizza3<<endl;
        cout<<"4."<<pizza4<<endl;
        cout<<"\n pls enter Flavour, you would like to have";
        cin>>pchoice;
        if(pchoice>=1 && pchoice<=4) {
            cout<<"\n1. Small Rs. 150\n"<<"2. Regular Rs. 200\n"<<"3. Large Rs. 250\n";
            cout<<" choose size please: ";
            cin>>pchoice1;
            if(pchoice1>=1 && pchoice1<=3)
                cout<<"\nenter the quantity";
                cin>>quantity;
                switch(pchoice1){
                    case 1: choice = 150*quantity;
                    break;
                    case 2: choice = 200*quantity;
                    break;
                    case 3: choice = 250*quantity;
                    break;

                }
            system("CLS");
            switch(pchoice){
                case 1:
                cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<pizza1;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                case 2:
                cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<pizza2;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                case 3:
                cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<pizza3;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                case 4:
                cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<pizza4;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
            }
        cout<<"Would you like to order anything else?  Y / N : ";
        cin>>gotostart;
        if(gotostart == 'Y'  || gotostart=='y' ){
            goto begining;
            }
        }

    }
  else if(choice ==2){
    cout<<"\n1."<<burr1<< "Rs. 129";
    cout<<"\n2."<<burr2<<"Rs.135";
    cout<<"\n3."<<burr3<<"Rs. 110";
    cout<<"\tpls enter which berger u want to have?\n"<<endl;
    cin>>pchoice1;
    if(pchoice1>=1 && pchoice1<=3){
        cout<<"\n pls enter quantity: ";
        cin>>quantity;
        switch(pchoice1){
            case 1: choice = 129*quantity;
            break;
            case 2: choice = 135*quantity;
            break;
            case 3: choice = 110*quantity;
            break;
        }
        system("CLS");
        switch(pchoice1){
            case 1:
             cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<burr1;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
            case 2:
             cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<burr2;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
            case 3:
             cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<burr3;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
        }
    
        cout<<"Would you like to order something: Y/ N:";
        cin>>gotostart;
        if(gotostart == 'y'|| gotostart=='Y'){
            goto begining;
        }
    }
  }

  else if(choice == 3){
    cout<<"\n1."<<roll1<<" Rs. 60";
    cout<<"\n2."<<roll2<<" Rs. 70";
    cout<<"\n3."<<roll3<<" Rs. 30";
    cout<<"\n4."<<roll4<<" Rs. 40";

    cout<<" which roll u want to have? \t";
    cin>>pchoice1;
    if(pchoice1>=1 && pchoice1<=4){
        cout<<" Enter how many roll u want to have? \t:";
        cin>>quantity;
        switch(pchoice1){
            case 1: choice = 60*quantity;
            break;
            case 2: choice = 70*quantity;
            break;
            case 3: choice = 30*quantity;
            break;
            case 4: choice = 40*quantity;
            break;
        }
        system("CLS");
        switch(pchoice1){
            case 1: 
            cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<roll1;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
            case 2:
            cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<roll2;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
            case 3:
            cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<roll3;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
            case 4:
            cout<<"\t\t\t Your order \t\t\t";
                cout<<quantity<<" "<<roll4;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
        }
        cout<<" \n Would you like to order Any thing else? Y/N :";
        cin>>gotostart;
        if(gotostart == 'y' || gotostart == 'Y'){
            goto begining;
        }

    }
    
  }
  else if(choice == 4) {
        cout<<"\n1."<<biri1<<" Rs. 90";
        cout<<"\n2."<<biri2<<" Rs. 110";
        cout<<"\n3."<<biri3<<" Rs. 80";
        cout<<"\n4."<<biri4<<" Rs. 130";
        
        cout<<" Which one U would Like to eat:";
        cin>>pchoice1;

        if(pchoice1>=1 && pchoice1<=4){
            cout<<" How many Plates u want to order: ";
            cin>>quantity;
            switch(pchoice1){
                case 1: choice = 90*quantity;
                break;
                case 2: choice = 110*quantity;
                break;
                case 3: choice = 80*quantity;
                break;
                case 4: choice = 130*quantity;
                break;
            }
            system("CLS");
            switch(pchoice1){
                case 1:
                 cout<<"\t\t\t Your order \t\t\n";
                cout<<quantity<<" "<<biri1;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                case 2:
                cout<<"\t\t\t Your order \t\t\n";
                cout<<quantity<<" "<<biri2;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                case 3:
                 cout<<"\t\t\t Your order \t\t\n";
                cout<<quantity<<" "<<biri3;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                case 4:
                 cout<<"\t\t\t Your order \t\t\n";
                cout<<quantity<<" "<<biri4;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
            }
            cout<<" \n Would you like to order Any thing else? Y/N :";
        cin>>gotostart;
        if(gotostart == 'y' || gotostart == 'Y'){
            goto begining;
        }
        }
  }
  else if(choice ==5){
    //int s;
    cout<<"\n1."<<snack1<<" Rs. 358";
    cout<<"\n2."<<snack2<<" Rs. 550";
    cout<<"\n3."<<snack3<<" Rs. 298";
     cout<<" \nWhich one U would Like to eat:";
        cin>>pchoice1;

        if(pchoice1>=1 && pchoice1<=3){
            cout<<"\n How many buckets u want to order: ";
            cin>>quantity;
            switch(pchoice1){
                case 1: choice = 358*quantity;
                        s= choice;
                break;
                case 2: choice = 550*quantity;
                       s = choice;
                break;
                case 3: choice = 298*quantity;
                       s= choice;
                break;
                //case 4: choice = 130*quantity;
                //break;
            }
            system("CLS");
            switch(pchoice1){
                case 1:
                cout<<"\t\t\t Your order \t\t\n";
                cout<<quantity<<" "<<snack1;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                case 2:
                 cout<<"\t\t\t Your order \t\t\n";
                cout<<quantity<<" "<<snack2;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                case 3:
                 cout<<"\t\t\t Your order \t\t\n";
                cout<<quantity<<" "<<snack3;
                cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                break;
                // case 4:
                //  cout<<"\t\t\t Your order \t\t\t";
                // cout<<quantity<<" "<<biri4;
                // cout<<"\nTotal Bill is : "<<choice<<"\nYour order will be delivered within 40 minutes";
                // cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                // break;
            }


            
            cout<<"\n\t.....Want some Cold-drinks?.... Y/N : \t";
            cin>>pchoice;
            if(pchoice =='Y' || pchoice== 'y'){
                cout<<"\n1. Coca-Cola"<<" Rs. 45/500ml";
                cout<<"\n2. Pepsi"<< "Rs. 40/500ml";
                cout<<"\n3. Limca"<< "Rs. 38/500ml";
                cout<<"\n Enter Choice: ";
                cin>>pchoice2;
                if(pchoice2>=1 && pchoice2<=3){
                    cout<<"how many bottles u want to order";
                    cin>>quantity;
                    switch(pchoice2){
                        case 1: choice = 45*quantity;
                        break;
                        case 2: choice = 40*quantity;
                        break;
                        case 3: choice = 38*quantity;
                        break;
                    }
                    system("CLS");
                    switch(pchoice2){
                        case 1:
                        cout<<"\t\t\t Your order \t\t\t";
                        cout<<quantity<<" "<<snack1<<" and Cold-Drink";
                        cout<<"\nTotal Bill is : "<<choice+s<<"\nYour order will be delivered within 40 minutes";
                        cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                        break;
                        case 2:
                        cout<<"\t\t\t Your order \t\t\t";
                        cout<<quantity<<" "<<snack2<<" and Cold-Drink";
                        cout<<"\nTotal Bill is : "<<choice+s<<"\nYour order will be delivered within 40 minutes";
                        cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                        break;
                        case 3:
                        cout<<"\t\t\t Your order \t\t\t";
                        cout<<quantity<<" "<<snack3<<" and Cold-Drink";
                        cout<<"\nTotal Bill is : "<<choice+s<<"\nYour order will be delivered within 40 minutes";
                        cout<<"\nThank You!!  For Ordering from Your Food Delight\n";
                        break;
                    }
                }
            }
        cout<<" \n Would you like to order Any thing else? Y/N :";
        cin>>gotostart;
        if(gotostart == 'y' || gotostart == 'Y'){
            goto begining;
        }
        }
  } 
    else{
        system("CLS");
        cout<<" Please select right option: ";
        cout<<"Would you like tostart the programm again? Y / N: ";
        cin>>gotostart;
        if(gotostart == 'Y'  || gotostart=='y' ){
            goto begining;
        }
    }
    
    //return 0;
    
}
