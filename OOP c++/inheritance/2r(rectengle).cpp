#include<iostream>
using namespace std;

class rec{
	protected:
		int wid;
		int leng;
		int st;
};

class are:public rec{
	public:
	
	are(){
	
	cout<<"input the wid=";
	cin>>wid;
	cout<<"input leng =";
	cin>>leng;
}

void display()
{

	cout<<"the total area of rectangle=";
	cout<<wid*leng;
}
	
	
	
};

int main()
{
	
	are obj;
	obj.display();
	
	
return 0;	
}
