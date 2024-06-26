#include<iostream>
using namespace std;

class are
{
	public:
	int n1,n3;
	int n2,res;
	int n01,n02;
	float no1;
	void result()
	{
		cout<<"input the length";
		cin>>n1;
		cout<<"input the wirth";
		cin>>n2;
		res=n1*n2;
		cout<<"rect"<<res;
		
	}
	
	void result(int n01 , int n02)
	
	{
	n1=n01;
	n2=n02;
	res=0.5*n1*n2;
	cout<<"this is tri"<<res;
		
	}
	
	void result(float no1)
	{
		n1=no1;
		cout<<n1*n1*3.14;
	}
	
	
	
	
};

int main()
{
	int n1,n2;
	are obj;
	int cho;
	float n01;
	
	
cout<<"input your choice";
cout<<"\nhere 1 is rec ";
cout<<"\nhere 2 is tri ";
cout<<"\nhere 3 is cir ";


cin>>cho;
	switch(cho)
	{
		
		case 1:
			obj.result();
			break;
			
			case 2:
				cout<<"input tri";
				cin>>n1;
				cout<<"height";
				cin>>n2;
		
				obj.result(n1,n2);
				break;
				
				case 3:
					
					cout<<"input the R=";
					cin>>n01;
					obj.result(n01);
					break;
				
	}
	
	
	return 0;
}
