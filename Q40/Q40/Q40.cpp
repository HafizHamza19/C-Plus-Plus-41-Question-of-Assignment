#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
void main()
{
	time_t now=time(0);
	char *dt=ctime(&now);
	cout<<"Time="<<dt;
	cout<<"\n\nGame If Total = 1$ You Won If Total != 1$ You Lose\n\n";
	float hafiz;
	cout<<"Enter Pennies : ";
	cin>>hafiz;
	float a;
	a=hafiz*0.01;
	
	float hafiz2;
	cout<<"\nEnter Nickles : ";
	cin>>hafiz2;
	float b;
	b=hafiz*0.05;
	
	float hamza;
	cout<<"\nEnter Dimes : ";
	cin >>hamza;
	float c;
	c=hamza*0.10;
	
	float hamza2;
	cout<<"\nEnter Quarters : ";
	cin >>hamza2;
	float d;
	d=hamza2*0.25;
	
	float hafiz19;
	hafiz19=a+b+c+d;
	cout<<"\n\n"<<hafiz19<<"$";
	if(hafiz19==1)
	{
		cout<<"\n\n>>>>>>>>congratulation!! You Have Won the game.<<<<<<<< ";
	}
	else
	{
		cout<<"\n\n>>>>You Loss<<<<";
	}


	getch();
}