#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int area, l;
	cout<<"Enter Length Of Square:"<<endl;
	cin>>l;
	
	area=l*l;
	cout<<"The Area Of Sqaure is : "<<endl;
	cout<<area<<endl;
	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}