#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
 using namespace std;

 struct Cars{
    string Company [200] ={ "Honda" , "Toyota" , "Ford" , "Mercedes" , "BMW" , "Audi" , "Lamborghini" , "Ferrari" , "Porsche" , "Bently" , "Rolls Royce" , "Maserati" };
    string Model [200] ={ "Civic" , "Defender 2.0 110 HSE" , "Mustang" , "Benz AMG GT" , "X7" , "Q8" , "Urus" , "458" , "911" , "Continental GT" , "Phantom" , "GranTurismo" };
    string Color [200] ={ "White" , "Olive" , "Red" , "Yellow" , "Black" , "Black" , "Green" , "Red" , "Yellow" , "Blue" , "White" , "Red" };
    string MaxSpeed [200] ={ "220 kmph" , "240 kmph" , "250 kmph" , "320 kmph" , "250 kmph" , "250 kmph" , "310 kmph" , "320 kmph" , "300 kmph" , "320 kmph" , "300 kmph" , "320 kmph" };
    string FuelType [200] ={ "Diesel" , "Petrol" , "Diesel" , "Petrol" , "Diesel" , "Petrol" , "Diesel" , "Petrol" , "Diesel" , "Petrol" , "Diesel" , "Petrol" };
    string Price [200] ={ "2150000" , "10000000" , "9500000" , "25000000" , "15000000" , "11000000" , "45000000" , "35000000" , "25000000" , "50000000" , "90000000" , "23000000" };

 }
 car;
 void Menu(){
    int num=1;
    for(int i=0;i<12;i++){
        cout<< "\t\t" << num << "." << car.Company[i] <<endl;
        num++;
    }
 }
 void Details(int Choice){
    cout<< "\t\t ----------------------------" <<endl;
    cout<< "\t\t Company: " <<car.Company[Choice-1] <<endl;
    cout<< "\t\t ----------------------------" <<endl;
    cout<< "\t\t Model: " << car.Model[Choice-1] <<endl;
    cout<< "\t\t Color: "<< car.Color[Choice-1] <<endl;
    cout<< "\t\t Max Speed: " << car.MaxSpeed[Choice-1] <<endl;
    cout<< "\t\t Fuel Type: " << car.FuelType[Choice-1] <<endl;
    cout<< "\t\t Price: " << car.Price[Choice-1] <<endl;
 }
  void login(){
    string pass = "";
    char ch;
    cout<< "\t\t Car Rental System Login"<<endl;
    cout<< "\t\t Enter Password:";
    ch =_getch();
    while(ch!=13){
        pass.push_back(ch);
        cout<< '*';
        ch = _getch();
    }
    if(pass=="pass"){
        cout<<"\t Password Matched"<<endl;
        cout<<"\t Loading..."<<endl;
        system("PAUSE");
        cout<<"Access Granted ! Welcome to our system"<<endl;
        system("cls");
    }else{
        cout<<"\t Password Not Matched"<<endl;
        cout<<"\t Try Again"<<endl;
        login();
    }
    }

 int main(){
    login();
    string decide="yes";
    cout<<"\t\t ----------------------------"<<endl;
    cout<<"\t\t Welcome to Car Rental System"<<endl;
    cout<<"\t\t Choose your option"<<endl;
    cout<<"\t\t ----------------------------"<<endl;

    while(decide !="exit"){
    Menu();
    cout<<"\t\t Your Choice:"<<endl;
    int choice;
    cin >> choice;
    Details(choice);
    cout<<"\t\t Are you sure want to rent this car (yes/no/exit)"<<endl;
    cin >> decide;
    if(decide=="yes"||decide=="Yes"){
        cout<<"\t\t Car rented successfully:"<<endl;
        cout<<"\t\t Company: " << car.Company[choice]<<endl;
        cout<<"\t\t Model: " <<car.Model[choice]<<endl;
        cout<<"\t\t Color:" <<car.Color[choice]<<endl;
        cout<< "\t\t Max Speed:" <<car.MaxSpeed[choice]<<endl;
        cout<<"\t\t Fuel Type:" <<car.FuelType[choice]<<endl;
        cout<<"\t\t Price:" <<car.Price[choice]<<endl;
        cout<<"\t\t --------------------------------------"<<endl;
        cout<<"\t\t Thank you for using our rental system:"<<endl;
        cout<<"\t\t --------------------------------------"<<endl;
        system("PAUSE");
        system("cls");
        }else if(decide =="no"||decide =="No"){
            cout<<"\t\t Choose your option:"<<endl;
            cout<<"\t\t --------------------------------------"<<endl;
        }
        else if(decide=="exit"){
            cout<<"\t\t Thank you for using our rental system:"<<endl;
            cout<<"\t\t --------------------------------------"<<endl;
            system("PAUSE");
            system("cls");
        }
        }
    return 0;
}
