#include<iostream>
using namespace std;

 class tri{
 
 
 	int a;
 	int b;
 	int c;
 	 
 	 public:
 	tri()
 	{
 		
 		cout<<"input the triangel frist-side=";
 		cin>>a;
 		cout<<"input the triangel second-side=";
 		cin>>b;
 		cout<<"input the triangel third -side=";
 		cin>>c;
 		
 		if(a==b&&b==c)
 		{
 			cout<<"equilateral";
		 }
		 
		 else if(a==b||b==c||c==a)
		 {
		 	cout<<"isoscales";
		 }
		 
		 else
		 {
		 	cout<<"scalene";
		 }
 		
	 
 	
 	
 	
 }
 	
 };
 int main()
 {
 	
 	tri boj;
 		
 	
 	return 0;
 }
 
