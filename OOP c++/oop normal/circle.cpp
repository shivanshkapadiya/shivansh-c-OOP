#include<iostream>
using namespace std;
	float r;
class calculate{

	float circle_area;
	float circle;
	
	
	public:
			
		void area()
		{
			circle_area = 3.14*r*r;
			cout<<"Circle calculation : "<<circle_area<<endl;
		}
		
		void circumference()
		{
			circle = 2*circle_area;
			cout<<"circumference : "<<circle;
		}
};

int main(){
	
		calculate obj;
		
			cout<<"input the Radius of circle: ";
			cin>>r;
		
		obj.area();
		obj.circumference();
		
		return 0;
}
