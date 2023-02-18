#include<iostream>
using namespace std;


int main(){
	char x;
	do{
   	int year;
   	cout<<"Enter Year To Check Is It Leap Year Or Not : "<<endl;
   	cin>>year;
   	
   	
   	if((year%4==0) && (year%100!=0))
   		cout<<year<<" Is Leap Year"<<endl;
	   
	else if(year%400==0)
		cout<<year<<" Is Leap Year"<<endl;
	
	   else 
	   cout<<year<<" Is Not Leap Year"<<endl;

	   
	   
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;


	return 0;
}