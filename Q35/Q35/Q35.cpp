#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<"******Swap Value From x to y & y TO x******\n\n ";
	int hamza;       
	cout<<"Enter Any Number (x) : ";
	cin>>hamza;
	int hafiz;
	cout<<"Enter Any Number (y) : ";   
	cin>>hafiz;
	int *hafiz1=&hafiz;
	hamza=*hafiz1;
	int *hamza1=&hamza;
	hafiz=*hamza1;

	cout<<"\n\nThe Value Of x="<<hamza<<"\n\nThe Value Of y ="<<hafiz;

	getch();
}