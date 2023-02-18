#include<iostream>
using namespace std;


int main(){
	char x;
	do{
   	int i;
   	int fctrl=1;
   	int number;    
  	cout<<"Please Enter Any Number: "<<endl;    
 	cin>>number;    
   for(i=number; i>0; i--){    
      fctrl=fctrl*i;    
  }    
  
  cout<<"Factorial Of " <<number<<" is: "<<fctrl<<endl;  
	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;


	return 0;
}