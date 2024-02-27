#include<iostream>
#include<iomanip>
using namespace std;

class Movie
{
	string name;
	float at_price=100;
	float ct_price=50;
	int adult;
	int child;
	
	
	
	public:
		void getData()
		{
			cout<<"movie name:";
			cin>>name;
			
			cout<<"enter the adult members:"<<endl;
			cin>>adult;
			
			cout<<"enter the child members:"<<endl;
		    cin>>child;
		}
		
		
      	int ticket()
      	{
          	cout<<"movie name :"<<name<<endl;
			  
			cout<<"total amount for adult :"<<adult*at_price<<endl;
			
			cout<<"total amount for child :"<<child*ct_price<<endl;
			
			int total=adult*at_price+child*ct_price;
			cout<<"your total amount is :"<<total<<endl;
			
			cout<<"total charity amount :"<<(total*10)/100<<endl;
			
		}
		
	
};

int main()
{
	Movie m1;
	m1.getData();
	m1.ticket();
}






