#include<iostream>
using namespace std;

class swapn


{
	int a,b;
	
	friend void swap(swapn);	
};

void swap(swapn obj1)
{
		cout<<"Enter value of a: ";
		cin>>obj1.a;
		
		cout<<"Enter value of b: ";
		cin>>obj1.b;
		
		obj1.a=obj1.a+obj1.b;
		obj1.b=obj1.a-obj1.b;
		obj1.a=obj1.a-obj1.b;
		
		cout<<"After the swap:"<<endl<<"a:"<<obj1.a<<endl<<"b:"<<obj1.b;
}
	
int main(){
	
	swapn obj;
	swap(obj);
	
	return 0;
}
