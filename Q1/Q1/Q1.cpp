#include <iostream>
#include <conio.h>
#include <string>
float monthly(float[]);
using namespace std;
void main()
{
	float hafiz[15];
	int a;
	int choice;
	for(a=1;a<13;a++)
	{
		cout<<"\nEnter Month "<<a<<"=";
		cin>>hafiz[a];
	}

	cout<<"\n\t\t\tMenu\n1 Display monthly amounts\n2 Display total amount\n3 Display average amount\n4 Display highest amount\n5 Display lowest amount\n6 End program";
	cout<<"\nEnter Code : ";
	cin>>choice;
	if(choice==1)
	{
		for(a=1;a<13;a++)
		{
			cout<<"\nThe Month "<<a<<" Rain Fall Amount ="<<hafiz[a];
		}
	}
	if(choice==2)
	{
	float hamzasum=0;
	for(a=1;a<13;a++)
	{
		hamzasum+=hafiz[a];

	}
	cout<<"\n\nThe Total Rain Fall Amount ="<<hamzasum;
	}
	if(choice==3)
	{
	float hamzaavg=0;
	for(int a=1;a<13;a++)
	{
		hamzaavg+=hafiz[a];
		hamzaavg/=12;
	}
	cout<<"\n\nThe Avg Rainfall Amount ="<<hamzaavg;
	}
	if(choice==4)
	{
	for(a=1;a<13;a++)
	{
			if(hafiz[1] < hafiz[a])
			{
			hafiz[1] = hafiz[a];
			
			}
		
		}
	cout << "\n\nThe Higest Rain Fall Amount =" << hafiz[1] << endl;
	}
	if(choice==5)
	{
	for(a=1;a<13;a++)
	{
			if(hafiz[1] > hafiz[a])
			{
			hafiz[1] = hafiz[a];
			
			}
		
		}
	cout << "\n\nThe Lowest Rainfall Amount is =" << hafiz[1] << endl;
	}
	if(choice>=6)
	{
		exit(0);
	}
	
	getch();
}
float monthly(float hafiz [13])
{

	int a;
	for(a=1;a<13;a++)
		{
			cout<<"\nThe Month "<<a<<" Rain Fall Amount ="<<hafiz[a];
		}

	return hafiz[a];
}