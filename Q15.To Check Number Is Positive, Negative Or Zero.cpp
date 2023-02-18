#include<iostream>
using namespace std;

int main(){
	char x;
	do{
	
	int num;
	cout<<"Please Enter Number : "<<endl;
	cin>>num;
	
	if(num>0){
		cout<<num<<" Is Positive "<<endl;
	}
	
		
	else if(num<0){
		cout<<num<<" Is Negative "<<endl;
	}
		
	if(num==0){
		cout<<num<<" Is Equal To Zero "<<endl;
	}
	
	cout<<"Press y To Again Run The Program Or Any Other Key To Exit :"<<endl;
	cin>>x;
	}while(x=='y');
	
	cout<<"************"<<endl;
	cout<<"   THANKS   "<<endl;
	cout<<"************"<<endl;
	return 0;
}