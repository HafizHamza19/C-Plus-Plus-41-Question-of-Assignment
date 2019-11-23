#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<"----------Sales Tax Calculator(10%)-----------";
	int hafiz;
	cout<<"\n\nEnter Monthly Income : ";
	cin>>hafiz;
	cout<<"\n\nYour Monthly Income Is ="<<hafiz;
	if(hafiz>=40000)
	{
	float hamza;
	hamza=(hafiz/100)*10.8;

		cout<<"\n\nYour Monthly Tax ="<<hamza;
	}
	else
	{
		cout<<"\n\nYour Monthly Tax = 0";
	}
	int hamza19;
	hamza19=hafiz*12;
	cout<<"\n\nYour Yearly Income Is ="<<hamza19;
		if(hamza19>=48000)
	{
	float hamza66;
	hamza66=(hamza19/100)*10.8;

		cout<<"\n\nYour Yearly Tax ="<<hamza66;
	}
	else
	{
		cout<<"\n\nYour Monthly Tax = 0";
	}
	

	getch();
}