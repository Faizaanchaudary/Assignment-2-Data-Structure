#include<iostream>
using namespace std;


int main(){
	char x;
	do{
   	int first=0;
   	int second=1;
   	int fab,num;
   	cout<<"Please Enter The Vlaue Upto You Want To Print Fibonacci Series : "<<endl;
   	cin>>num;
   	
   	cout<<"The Fibonacci Series Is "<<endl;
   	cout<<first<<" "<<second;
   	
   	for(int i=1; i<=num-2; i++){
   		fab=first+second;
   		first=second;
   		second=fab;
	   
	cout<<" "<<fab<<" ";
}
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;


	return 0;
}