#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void Loadingbar(){
    system("cls");
    system("color 0F");

    char a=177, b =219;
    cout<<"/t/t/t/t/t/t ~SKY AIRLINES~"<<endl;
    cout<<"\n\t\t\t\t\t\t\tProject By Subham Mondal";
    cout<<endl;
    cout<<"\t\t\t\t\t\t";


    for(int i=0;i<26;i++)

    cout<<a;

    cout<<"\r";
    cout<<"\t\t\t\t\t\t";
    for(int i=0;i<26;i++){
        cout<<b;
        Sleep(200);
    }

}