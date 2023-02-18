#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int area, pie,r;
	cout<<"Enter Value Of Pie:"<<endl;
	cin>>pie;
	cout<<"Enter Value Of r:"<<endl;
	cin>>r;
	
	area=pie*r*r;
	cout<<"The Area Of Circle is : "<<endl;
	cout<<area<<endl;
	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}