#include <stdio.h>
#include<conio.h>
#include <iostream> 
using namespace std;

class bank{
    char name[100],add[100],y;
    int balance;
    public:
            void open_account();
            void deposit_money();
            void withdraw_money();
            void display_account();
};

void bank::open_account(){
    cout<<"Enter your full name :: "<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter Your Address :: "<<endl;
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account do you want to open? savings(s) or current(c) "<<endl;
    cin>>y;
    cout<<"Enter Amount for deposit :: "<<endl;
    cin>>balance;
    cout<<"Your Account is Created "<<endl;
}

void bank:: deposit_money()
{
    int a;
    cout<<"Enter The Amount To Deposit :: "<<endl;
    cin>>a;
    balance+=a;
    cout<<"Total Balance :: "<<balance<<endl;
}

void  bank::display_account(){
    cout<<"Your Full Name :: "<<name<<endl;
    cout<<"Your Address :: "<<add<<endl;
    cout<<"Type of Account :: "<<y<<endl;
    cout<<"Amount in Your Account :: "<<balance<<endl;
}

void bank::withdraw_money(){
    float amount;
    cout<<"Withdraw :: ";
    cout<<"Enter Amount to Withdraw :: "<<endl;
    cin>>amount;
    if(amount>balance){
        cout<<"Insufficient Balance !!!"<<endl;
    }
    else{
    balance -= amount;
    }
    cout<<"Remaining Balance :: "<<balance<<endl;
}




int main()
{
    int ch;
    char x;
    bank obj;
    do{
    cout<<"1) Open Account\n";
    cout<<"2) Deposit Money\n";
    cout<<"3) Withdraw Money\n";
    cout<<"4) Display Account\n";
    cout<<"5) Exit\n";
    cout<<"select the option from above :: "<<endl;
    cin>>ch;
    switch(ch){
        case 1:  "1) Open Account \n";
            obj.open_account();
            break;
        case 2: "2) Deposit Money \n";
            obj.deposit_money();
            break;
        case 3: 
            cout<<"3) Withdraw Money \n";
            obj.withdraw_money();
            break;
        case 4: "4) Display Account \n";
            obj.display_account();
            break;
        case 5:
                if(ch==5){
                    exit(1);
                }    
        default:
            cout<<"Select The Mentioned Options Try Again!! \n";
    }
    cout<<"Do You want to Choose an Option Again then press y \n ";
    cout<<"If you want to Exit Press n \n";
    x=getch();
    if(x=='n'||x=='N')
    exit(0);
    }while(x=='y'||x=='Y');
    getch();
    return 0;
}