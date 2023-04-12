#include <iostream>
using namespace std;
int main(){ int default_pin=0000;
int attempts = 0;
int select;
float refrence;
char option;
char Y;
char N;
int number;
float amount;
int pin;
int c_pin;
int new_pin;
float balance,counter;
int digits;
balance=1000;
cout << "WELC0ME TO MTN MOBILE MONEY SERVICES"<<endl;
cout << "Menu" << endl;
cout << "1) Send Money" << endl;
cout << "2) Reset Pin" << endl;
cout << "3) Check Balance" << endl;
cout << "4) Allow Cash Out" << endl;
cin >> select;

if (select==1){
cout << "Enter Mobile Number" <<endl;
cin >>number;
cout << "Enter Amount To Transfer" <<endl;
cin >>amount;
cout << "Transfer "<<amount<<" to "<< number<<endl;
cout << "Refrence" <<endl;
cin >>refrence;
cout << "Please Enter Your PIN" <<endl;
cin >>pin;
do{
    attempts++;
    if (pin!=default_pin){
    cout << "Incorrect PIN. Retry Again" <<endl;
}
    else if (pin==default_pin){
    cout << " You have successfully sent "<<amount<<" to "<<number<<endl;
    cout << "Your current balance is "<<balance<<amount<<endl;
}
}while (pin!=default_pin && attempts >3);
if(attempts>3){
	cout<<"Maximum attempts reached. ";
	cout<<"Exiting program"<<endl;
}
switch(pin){
	break;
}

}

else if(select==2)
{
	cout<<" Are You Sure You Want To Change Your Pin "<<endl;
	cout<<" Choose Y/N "<<endl;
	cin>>option;
	if(option==Y){
		cout<<"Enter New Pin"<<endl;
		cin>>new_pin;
		pin==new_pin;
		cout<<" Your New Pin Is "<<new_pin;
	}

}

else if(select==3){
	do{
		cout<<"Please Enter Your 4-digit PIN: "<<endl;
		cin>>pin;
		attempts++;
		if (pin!=default_pin){
			cout<<"Incorrect PIN. Please try again"<<endl;
		}
		else if (pin==default_pin){
			cout<<"Your balance is 1000";
		}
	}while (pin != default_pin && attempts <3);
	if(attempts>3){
		cout<<"Maximum attempts reached";
		cout<<"Exiting Program"<<endl;
	}
	switch(pin){
		break;
	}
}

else if(select==4)
{
	cout<<"Do you want to allow cash out"<<endl;
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	cin>>select;
	if(select==1){
		cout<<"Cash out is allowed"<<endl;
	}
	else if (select==2){
		cout<<"Cash out is not allowed"<<endl;
	}
}




 return 0;}
