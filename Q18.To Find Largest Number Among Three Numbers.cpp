#include<iostream>
using namespace std;

int main(){
	char x;
	do{
	
	int first,second,third;
	cout<<"Please Enter First Number : "<<endl;
	cin>>first;
	cout<<"Please Enter Second Number : "<<endl;
	cin>>second;
	cout<<"Please Enter Third Number : "<<endl;
	cin>>third;
	
	if(first>second && first>third ){
		cout<<first<<" Is Greater Than "<<second<<" and "<<third<<endl;
	}
	
	else if(second>first && second>third){
		cout<<second<<" Is Greater Than "<<first<<" and "<<third<<endl;
	}
	
	else if(third>first && third>second){
		cout<<third<<" Is Greater Than "<<first<<" and "<<second<<endl;
	}
	
	else 
	cout<<"Numbers Are Equal"<<endl;
	
	
	cout<<"Press y To Again Run The Program Or Any Other Key To Exit :"<<endl;
	cin>>x;
	}while(x=='y');
	
	cout<<"************"<<endl;
	cout<<"   THANKS   "<<endl;
	cout<<"************"<<endl;
	return 0;
}