#include<iostream>

using namespace std;
class cal{
	int n1,n2;
	public:
		cal(){
			cout<<"input the num1=";
			cin>>n1;
			cout<<"input the num2=";
			cin>>n2;
			  cout<<"1=+ \n 2=- \n 3=* \n 4=/";
			 
		}
		
		void add()
		{
			cout<<n1<<"+"<<n2<<"="<<n1+n2;
		}
		void sub()
		{
			cout<<n1<<"-"<<n2<<"="<<n1-n2;
		}
		void into()
		{
			cout<<n1<<"*"<<n2<<"="<<n1*n2;
		}
		void div()
		{
			cout<<n1<<"/"<<n2<<"="<<n1/n2;
		}
		
		
};

int main()
{ 

int choice;
 cal obj;
   
   
   cout<<"input cho";
   cin>>choice;
   
  
   
   switch(choice)
   {
   	case 1:obj.add();break;
   		case 2:obj.sub();break;
   		
   			case 3:obj.into();break;
   				case 4:obj.div();break;
   					
   					default:cout<<"not valid"; 
   }
   
   
   

        return 0;

}
