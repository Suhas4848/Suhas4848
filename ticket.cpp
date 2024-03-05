#include<iostream>
using namespace std;

class Ticket
{
	int ticket;
	int no_of_ticket;
	
	public:
		
		
		Ticket(int ticket,int no_of_ticket)
		{
			this->ticket=ticket;
			this->no_of_ticket=no_of_ticket;    
		}
		
		void display()
		{
			
			cout<<ticket<<endl;
			cout<<no_of_ticket<<endl;
		
			
		}
};

int main()
{
	Ticket t1(15,4);

	t1.display();
	return 0;
}
