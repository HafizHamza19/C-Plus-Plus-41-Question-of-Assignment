#include <iostream>
#include <conio.h>
using namespace std;
void main()
{	
	int hafiz;
	int hamza=0;
	int hamza1=0;
	int hamza2=0;

	for (int a=1;a<16;a++)
	{
		cout<<"Enter age of person "<<a<<" : " ;
		cin>>hafiz;
		
		if(hafiz>=0 && hafiz<=5)
			hamza++;
		else if(hafiz>=6 && hafiz<=17)
			hamza1++;
		else
			hamza2++;
		
	}
	
	cout<<"\n\nBaby age   ="<<hamza;
	cout<<"\n\nSchool age ="<<hamza1;
	cout<<"\n\nAdult age  ="<<hamza2;
	getch();
}