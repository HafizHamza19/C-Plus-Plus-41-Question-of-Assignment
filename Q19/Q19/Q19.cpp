#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"**********Internet Service Provider**********";
	cout<<"\n\nPackage A:\n  for $9.95/month, 10 hours of access are provided.\n Additional hours are $2.00/hour.";
	cout<<"\n\nPackage B:\n for $14.95/month, 20 hours of access are provided.\n Additional hours are $1.00/hour";
	cout<<"\n\nPackage C:\n for $19.95/month, unlimited access is provided";
	char hafiz;
	cout<<"\n\nSelect Package (A) (B) (C): ";
	cin>>hafiz;
	float hamza;
	double hamza19;
	float hamza66;
	float hafiz66;
	if(hafiz=='A' && 'a')
	{
		
		cout<<"\n How many hours were used : ";
		cin>>hamza;
		hamza19=hamza*9.95;
		char hafiz19;
		cout<<"\nDid You Use Additional hours Yes(y) Or Not(n) : ";
		cin>>hafiz19;
		if(hafiz19=='y')
		{
            
			cout<<"\n How many Additional hours were used : ";
			cin>>hamza66;
			hafiz66=hamza66*2;
			cout<<"\nYour Additional Hours Charge = "<<hafiz66;
			cout<<"\nYour Monthly Charge = "<<hamza19;
			double HH;
			HH=hafiz66+hamza19;
			cout<<"\nYour Total Bill = "<<HH<<"$";
		}
		else
		{
		cout<<"\nYour Monthly Bill = "<<hamza19<<"$";
		}
	}
	if(hafiz=='B' || hafiz=='b')
	{
		
		cout<<"\n How many hours were used : ";
		cin>>hamza;
		hamza19=hamza*14.95;
		char hafiz19;
		cout<<"\nDid You Use Additional hours Yes(y) Or Not(n) : ";
		cin>>hafiz19;
		if(hafiz19=='y')
		{
            
			cout<<"\n How many Additional hours were used : ";
			cin>>hamza66;
			hafiz66=hamza66*1;
			cout<<"\nYour Additional Hours Charge = "<<hafiz66;
			cout<<"\nYour Monthly Charge = "<<hamza19;
			double HH;
			HH=hafiz66+hamza19;
			cout<<"\nYour Total Bill = "<<HH<<"$";
		}
		else
		{
		cout<<"\nYour Monthly Bill = "<<hamza19<<"$";
		}
	}
	if(hafiz=='C' || hafiz=='c')
	{
		
		cout<<"\n How many hours were used : ";
		cin>>hamza;
		hamza19=hamza*14.95;
	cout<<"\nYour Monthly Bill = "<<hamza19<<"$";
	}
	getch();
}