#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int HH;
	for(HH=1;HH<31;HH++)
	{
		cout<<"\n========"<<HH<<":Cycle========";
		int hafiz;
		cout<<"\n\n Enter 1st Integral : "; 
		cin>>hafiz;
	    int hamza;
		cout<<"\n Enter 2nd Integral : ";
		cin>>hamza;
		hafiz=hafiz+hamza;
		hamza=hafiz-hamza;
		hafiz=hafiz-hamza;
		cout<<"\n\n********Swapped********"<<"\n   1st Integral ="<<hafiz<<"\n   2nd Integral ="<<hamza<<"\n\n";
	}
	getch();
	
	}