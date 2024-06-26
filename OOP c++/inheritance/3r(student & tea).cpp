#include<iostream>
using namespace std;

class student{
	protected:
		
		int age;
		int per;
		string name;
	
};

class teacher{
	
	protected:
		
		string name_t; 
		int salary_t;
		int age_t;
		int salary_new;
		
};

class person:public student,teacher{
	
	public:
		person()
		{
			cout<<"input the name= ";
			cin>> name;
			
				cout<<"input the age= ";
			cin>> age;
			
				cout<<"input the per= ";
			cin>> per;
			
			
			cout<<"\ninput the name of teacher= ";
			cin>> name_t;
			
				cout<<"input the age of teacher= ";
			cin>> age_t;
			
				cout<<"input the salary of teacher= ";
			cin>> salary_t;
			
			
			
			
		}
		
		
		
		void display()
		
		{
			
			cout<<"------------------------------";
			cout<<"\nname="<<name<<"\n age="<<age<<"\n per="<<per;
			
			
		}
	
	void display_t()
	{
		cout<<"\n name teacher="<<name_t<<"\n age of teacher="<<age_t<<"\n salary tea="<<salary_t;
		
	}
	
	void update()
	{
		cout<<"\n input the new salary=";
		cin>>salary_new;
	
	}
	
	
	void display_newsalary()
	{
		cout<<"---------------------------";
		cout<<"\n name="<<name<<"\n age="<<age<<"\n per="<<per;
		cout<<"\n name teacher="<<name_t<<"\n age of teacher="<<age_t;
		cout<<"\n new salary="<<salary_new;
	}
	

	
};

int main()
{
	char choice;
	person obj;
	obj.display();
	obj.display_t();
	
	cout<<"\n\nif you want to update salary ,then click'y' other wish 'n'  ";

	cin>>choice;
	if(choice=='y'|| choice=='Y')
	{
		
		obj.update();
	}
	
	obj.display_newsalary();
	

	
	
		return 0;
}




