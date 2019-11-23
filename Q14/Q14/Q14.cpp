#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"*************************************\n\n";
	float hafiz;
	float hamza;
	float hamza19;
	cout<<"\n Enter Qauntity: ";
	cin>>hafiz;
	if(hafiz>0 && hafiz<10)
	{
		cout<<"\nNo Discount In "<<hafiz<<" Qauntity";
		cout<<"\n\nThe Total Cost Of Purchase Is ="<<hafiz*99<<"$";
	}
	if(hafiz>=10 && hafiz<20)
	{
		hamza=((hafiz*99/100)*20);
        hamza19=hafiz*99-hamza;
		cout<<"\nThe Real Price ="<<hafiz*99;
		cout<<"\n\nGiven 20% Discount In "<<hafiz<<" Qauntity "<<"\n\nThe Total Cost Of Purchase Is ="<<hamza19<<"$";
	}
	if(hafiz>=20 && hafiz<50)
	{
		hamza=((hafiz*99/100)*30);
        hamza19=hafiz*99-hamza;
		cout<<"\nThe Real Price ="<<hafiz*99;
		cout<<"\n\nGiven 30% Discount In "<<hafiz<<" Qauntity "<<"\n\nThe Total Cost Of Purchase Is ="<<hamza19<<"$";
	}
	if(hafiz>=50 && hafiz<100)
	{
		hamza=((hafiz*99/100)*40);
        hamza19=hafiz*99-hamza;
		cout<<"\nThe Real Price ="<<hafiz*99;
		cout<<"\n\nGiven 40% Discount In "<<hafiz<<" Qauntity "<<"\n\nThe Total Cost Of Purchase Is ="<<hamza19<<"$";
	}
	if(hafiz>=100)
	{
		hamza=((hafiz*99/100)*50);
        hamza19=hafiz*99-hamza;
		cout<<"\nThe Real Price ="<<hafiz*99;
		cout<<"\n\nGiven 50% Discount In "<<hafiz<<" Qauntity "<<"\n\nThe Total Cost Of Purchase Is ="<<hamza19<<"$";
	}


	getch();
}