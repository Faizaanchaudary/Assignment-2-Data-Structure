#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int n, num;
	int new1=0;
	cout<<"Please Enter Number To Check It is Armstrong Or Not : "<<endl;
	cin>>num;
	n=num;
	
	while(n!=0){
		new1=new1+(n%10)*(n%10)*(n%10);
		n=n/10;
	}
	
	if(new1==num)
		cout<<num<<" Is Armstrong "<<endl;

	else 
	cout<<num<<" Is Not  Armstrong "<<endl;
	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}