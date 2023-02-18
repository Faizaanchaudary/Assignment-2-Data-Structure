#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char x;
	do{
		
	char str[1000];
	cout<<"Please Enter String In Upper case: "<<endl;
	cin>>str;
	int i=0;
	
	while(str[i]!=0){
		if(str[i]>='A' && str[i]<='Z')
		str[i]=str[i]+32;
		i++;
	}
	
	cout<<"The String In Lower Case Is : "<<endl;
	cout<<str<<endl;
	
	
	cout<<"Press y To Again Run The Program Or Any Other Key To Exit :"<<endl;
	cin>>x;
	}while(x=='y');
	
	cout<<"************"<<endl;
	cout<<"   THANKS   "<<endl;
	cout<<"************"<<endl;
	return 0;
}