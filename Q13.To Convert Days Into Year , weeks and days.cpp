#include<iostream>
using namespace std;


int main(){
	char x;
	do{
  	int days,year,weeks;
  	cout<<"Please Enter Number Of Days To Convert : "<<endl;
  	cin>>days;
  	
  	year = days/365;
  	days=days%365;
  	weeks=days/7;
  	days=days%7;
  	
  	
  	cout<<"\nYear = "<<year;
  	cout<<"\nWeeks = "<<weeks;
  	cout<<"\nDays = "<<days;
  	
  	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;


	return 0;
}