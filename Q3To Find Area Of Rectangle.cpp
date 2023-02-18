#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int area, l,w;
	cout<<"Enter Length Of Rectangle:"<<endl;
	cin>>l;
	cout<<"Enter Width Of Rectangle:"<<endl;
	cin>>w;
	
	
	
	area=l*w;
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