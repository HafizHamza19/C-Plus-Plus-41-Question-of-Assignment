#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int hafiz;
	cout<<"Enter Your Fsc Marks : ";
	cin>>hafiz;
	int hamza;
	cout<<"Enter Your NTS Marks : ";
	cin>>hamza;
    int hafiz66;
	hafiz66=hafiz*100/1100;
	
	int hamza66;
	hamza66=hamza*100/100;

	if(hafiz66>70)
	{
		if(hamza66>70)    //Nested IF
		{
		
		cout<<"You Are Eligible In Oxford University";
		}
	}
	if(hafiz66>70)
	{
		if(hamza66>60)   //Nested IF
		{
		
		cout<<"\n\nYou Have Selected In Electronics Department";
		}
	}
	if(hafiz66>70)
	{
		if(hamza66>50)  //Nested IF
		{
		cout<<"\t\t\t\nCongratulation";
		cout<<"\n\nYou Have Selected In Telecommunication Department";
		}
	}
	if(hafiz66>=60 && hafiz66<70)
	{
		if(hamza66>50)   //Nested IF
		{
		cout<<"\t\t\nCongratulation";
		cout<<"\n\nYou Have Selected In MIT IT Department";
		}
	}
	if(hafiz66>=50 && hafiz66<60)
	{
		if(hamza66>50)   //Nested IF
		{
		cout<<"\t\t\nCongratulation";
		cout<<"\n\nYou Have Selected In Chemical Eng. Department";
		}
	}
	if(hafiz66>=40 && hafiz66<50)
	{
		if(hamza66>50)   //Nested IF
		{
		cout<<"\t\t\nCongratulation";
		cout<<"\n\nYou Have Selected In Computer Eng. Department";
		}
	}
	if(hafiz66<40)
	{
		if(hamza66<50)
		{
			cout<<"\t\t\nSorry";
			cout<<"\n\nYou Are Not Eligible";
		}

	}
	getch();
}