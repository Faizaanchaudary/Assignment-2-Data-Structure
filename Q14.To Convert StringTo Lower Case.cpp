#include<iostream>
#include<string.h>
using namespace std;


int main(){
	char x;
	do{
  	char str[100];
  	cout<<"Please Enter String In Upper Case : "<<endl;
  	gets(str);
  	
  	cout<<"The String In Lower Case Is  : "<<endl;
  	cout<<strlwr(str)<<endl;
  	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;


	return 0;
}