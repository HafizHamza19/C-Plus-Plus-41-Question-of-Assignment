#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<"------------------Intermediate-------------------";
	int hafiz;
	cout<<"\n\n\nEnter Your Marks You Got In Inter Out Off (1100) : ";
	cin>>hafiz;

	float hamza;
	hamza=hafiz*100/1100;
	cout <<"\nYour Percentage Is: " << hamza <<"%"<<endl<<endl<<endl;
	if (hamza>=85)
	{

		cout<<"\n\t\t\tEXELLENT";
	}
	if(hamza>=75 && hamza<85)
	{
		cout<<"\n\t\t\tOUTSTANDING";
	}
	if(hamza>=65 && hamza<75)
	{
       cout<<"\n\t\t\tGOOD";
	}
	if(hamza>50 && hamza<65)
	{
		cout<<"\n\t\t\tPass But Need Very Work Hard :( ";
	}
	if(hamza>=0 && hamza<50)
	{
		cout<<"\t\t\tSORRY\n\t\t\tRepeat Course :( ";
	}
	getch();
}