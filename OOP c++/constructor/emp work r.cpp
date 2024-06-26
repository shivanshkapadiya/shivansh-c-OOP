#include<iostream>
using namespace std;
 class emp{
 	

 	
 		int id;
 		int salary;
 		string name;
 		//////////
 		public:
	 emp()
	 {
	 	
	 	cout<<"input the id=";
	 	cin>>id;
	 	cout<<"salary";
	 	cin>>salary;
	 	cout<<"name ";
	 	cin>>name;
	 }
	 
	 	
	void display()
 	{
 		
 		cout<<" id= "<<id<<" salary= "<<salary<<" name= "<<name;
	 }
	 

 };
 
 int main()
 {
 	emp obj;
	return 0;
}
 
