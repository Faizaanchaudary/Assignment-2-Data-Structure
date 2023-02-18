#include<iostream>
using namespace std;

int main(){
	char x;
	do{
	
	int num;
	cout<<"Please Enter Number : "<<endl;
	cin>>num;
	
    for(int i=1; i<=10; i++){
    	cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	
	cout<<"Press y To Again Run The Program Or Any Other Key To Exit :"<<endl;
	cin>>x;
	}while(x=='y');
	
	cout<<"************"<<endl;
	cout<<"   THANKS   "<<endl;
	cout<<"************"<<endl;
	return 0;
}