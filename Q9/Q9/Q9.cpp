#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<"--------Welcome To H.H Bakery----------";
	int a=0;
	int hafiz[3];
	while(a<3)
	{
		a++;
		cout<<"\n\n\nEnter Price : ";
	cin>>hafiz[a];
	
	if(hafiz[a]>=1 && hafiz[a]<200 )
	{
		cout<<"\n***You Can Buy Cakes***";
	}

	if(hafiz[a]>=200 && hafiz[a] <400 )
	{
		cout<<"\n***You Can Buy Biscuits***";
	}
	
	if(hafiz[a]>=400 && hafiz[a] <700 )
	{
		cout<<"\n***You Can Buy Miscellaneous***";
	}
	if(hafiz[a]>=700 && hafiz[a] <999 )
	{
		cout<<"\n***You Can Buy Ice Cream***";
	}
	
	}
	int hamza;
	hamza=(hafiz[1]+hafiz[2]+hafiz[3])/3;
	cout<<"\n\nThe Average Of All Items : "<<hamza;

	getch();
}