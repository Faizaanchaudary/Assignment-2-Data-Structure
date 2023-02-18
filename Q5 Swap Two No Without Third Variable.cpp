#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int first;
	int second;
	int sum;
	
	cout<<"Enter First Value: "<<endl;
	cin>>first;
	cout<<"Enter Second Value: "<<endl;
	cin>>second;
	
	cout<<"Before Swapping :"<<endl;
	cout<<"First = "<<first<<endl;
	cout<<"Second = "<<second<<endl;
	
	sum=first+second;
	second=sum-second;
	first=sum-first;
	
	cout<<"\nAfter  Swapping Values : "<<endl;
	cout<<"First = "<<first<<endl;
	cout<<"Second = "<<second<<endl;
	
	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}