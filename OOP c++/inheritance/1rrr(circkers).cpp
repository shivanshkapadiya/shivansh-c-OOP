#include<iostream>
using namespace std;

class cricketer{
	protected:
   int run,best_p;
   float avg;	
	
	
};

class bat : public cricketer{
	
     protected :
		int ball;
	public:
	
	bat()
	{
		cout<<"\ninput the total run";
		cin>>run;
		
		cout<<"\ninput the total best play";
		cin>>best_p;
	}
	
	
	
	void avg_run()
	{
		cout<<"\navg run of bat";
		cin>>ball;
	avg	=run/ball;
	}
	
	void display()
	{
		cout<<"  run"<<run<<"  ball"<<ball<<  "best_p"<<best_p<<  "avg"<<avg;
	}
	
};

int main()
{
	bat obj;
	obj.avg_run();
	obj.display();
		
	return 0;
}
