#include<iostream>
using namespace std;          
	class car{
		
		int year;
		string model;   
		string car_name ;
public:		
 car()
	{
		cout<<" input the year:";
		cin>>year;
		cout<<"  input the car model :";
		cin>>model;
		cout<<" input the car company:";
		cin>>car_name;
		
	}
		
		void display() 
		{
			cout<<" car year- "<< year<< "  model-" << model << "  name-" << car_name;
		}
		
	};
	
int main()
{
	car obj;
	obj.display();
	
	return 0;
}

