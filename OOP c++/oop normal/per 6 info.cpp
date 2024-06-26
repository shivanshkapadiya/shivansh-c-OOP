#include<iostream>
using namespace std;


class person{
	int age;
	string name;
	string country;
	
	public:
		
		void set()
		{
			cout<<"input Your name: ";
			cin>>name;
			
			cout<<"input you age: ";
			cin>>age;
			
			cout<<"input your country name: ";
			cin>>country;
		}
		
		void get()
		{
			cout<<"\nYour Name = "<<name<<endl;
			cout<<"Your age is="<<age<<endl;
			cout<<"Your country = "<<country<<endl;
		}
};

int main()
{
	person obj;
	
	obj.set();
	obj.get();
	
	return 0;
}
