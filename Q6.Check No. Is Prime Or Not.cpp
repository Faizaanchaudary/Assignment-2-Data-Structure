#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	
	int num;
	cout<<"Please Enter Number :"<<endl;
	cin>>num;
	int i;
	for(i=2; i<num; i++){
		if(num%i==0){
		cout<<num<<" Is Not Prime "<<endl;
			break;
		}
	}
	
	
	if(i==num){
		cout<<num<<" Is Prime "<<endl;
	}
	
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}