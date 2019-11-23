#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	cout<<"***********Area Calculator***********\n\n";
	cout<<"\n1. Calculate the area of a circle\n2. Calculate the area of a rectangle\n3. Calculate the area of a triangle\n4. Quit";
	int hafiz;
	cout<<"\n\nEnter Code What Do You Want Calculate : ";
	cin>>hafiz;
switch(hafiz)
{
case (1):
	float hamza;
	cout<<"\n\nEnter Radius Of Circle : ";
	cin>>hamza;
	float area;
	area=3.142*hamza*hamza;
	cout<<"\nThe Area Of The Circle Is = "<<area<<" cm^3"; 
	break;
case (2):
	float hamza66;
	cout<<"\n\nEnter Length Of Triangle  : ";
	cin>>hamza66;
	float hamza19;
	cout<<"\nEnter Width Of Triangle  : ";
	cin>>hamza19;
	float hafiz19;
	hafiz19=hamza19*hamza66;
	cout<<"\n\nThe Area Of The Circle Is = "<<hafiz19<<" cm^3"; 
	break;
case (3):
	float hamza666;
	cout<<"\n\nEnter Base Of Triangle  : ";
	cin>>hamza666;
	float hamza019;
	cout<<"\nEnter Height Of Triangle  : ";
	cin>>hamza019;
	float hafiz019;
	hafiz019=hamza019*hamza666*0.5;
	cout<<"\n\nThe Area Of The Circle Is = "<<hafiz019<<" cm^3"; 
	break;
case (4):
	exit(0);
default:
	cout<<"\n\nCode Is Out Of Range";
}
	getch();
}