#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int num,rev=0;
	int last;
	cout<<"Please Enter Number To Reverse It: "<<endl;
	cin>>num;

	while(num>0){
		last=num%10;
		rev=rev*10+last;
		num=num/10;
		
	}
	
	cout<<"The Reverse Is : "<<endl;
	cout<<rev;
	
	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}