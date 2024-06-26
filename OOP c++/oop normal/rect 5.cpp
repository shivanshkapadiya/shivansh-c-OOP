#include<iostream>
using namespace std;

float we;
float l;

class cal{
	float rect_area;
	float rect_p;
	
	public:
		
	void area()
	{
		rect_area = we*l;
		cout<<"Ractangle area ="<<rect_area<<endl;
	}
	
	void perimeter()
	{
		rect_p = 2*l+2*we;
		cout<<"Ractangle perimeter ="<<rect_p<<endl;
	}
};

int main(){
	
	cal obj;
	
	cout<<"input length of ractangle: ";
	cin>>l;
	
	cout<<"input width of ranctangle: ";
	cin>>we;
	
	obj.area();
	obj.perimeter();
	
	return 0;
}
