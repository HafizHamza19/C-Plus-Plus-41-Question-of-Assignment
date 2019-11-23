#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int hafiz;
	cout<<"Enter Units   = ";
	cin>>hafiz;
	if(hafiz==100)
	{
		cout<<"1st 100 units =1 Rs\n";
		cout<<"Meter Charges = 50\nTax           = 10%";
		cout<<"\nThe Total Bil = "<<(hafiz*1)+10+50;
	}
	if(hafiz==200)
	{
		cout<<"\n\n1st 100 units =1 Rs\nNext 100 units =2 Rs\n\n";
		cout<<"Meter Charges = 50\nTax           = 10%";
		cout<<"\nThe Total Bil = "<<(hafiz*3)+20+50;
	}
	if(hafiz==300)
	{
		cout<<"\n\n1st 100 units =1 Rs\nNext 100 units =2 Rs\nNext 100 units =3 Rs\n\n";
		cout<<"Meter Charges = 50\nTax           = 10%";
		cout<<"\nThe Total Bil = "<<(hafiz*5)+30+50;
	}
	if(hafiz==500)
	{
		cout<<"\n\n1st  100 units =1 Rs\nNext 100 units =2 Rs\nNext 100 units =3 Rs \nNext 200 units =4 Rs\n\n";
		cout<<"Meter Charges = 50\nTax           = 10%";
		cout<<"\nThe Total Bil = "<<(hafiz*6)+60+50;
	}
	if(hafiz>500)
	{
		cout<<"\n\n1st 100 units =1 Rs\nNext 100 units =2 Rs\nNext 100 units =3 Rs\nNext 200 units =4Rs\nNext units =5 Rs\n\n";
		cout<<"Meter Charges = 50\nTax           = 10%";
		cout<<"\nThe Total Bil = "<<(hafiz*10)+100+50;
	}
	
	getch();
}