#include<iostream>
using namespace std;

int main(){
	char x;
	do{
	
	int num,last,first;
	int sum=0;
	cout<<"Please Enter Number : "<<endl;
	cin>>num;
	
	last=num%10;
	
	while(num>=10){
		num =num/10;
	}
	first=num;
	
	sum=first+last;
	
	cout<<"The Sum Of First and Last Digit Is : "<<endl;
	cout<<sum<<endl;
	
	cout<<"Press y To Again Run The Program Or Any Other Key To Exit :"<<endl;
	cin>>x;
	}while(x=='y');
	
	cout<<"************"<<endl;
	cout<<"   THANKS   "<<endl;
	cout<<"************"<<endl;
	return 0;
}