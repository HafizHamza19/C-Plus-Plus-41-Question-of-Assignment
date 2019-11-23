#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"********Triangle Checker********";
	int hafiz;
	cout<<"\n\nEnter First Triangle : ";
    cin>>hafiz;
	int hamza;
	cout<<"\n\nEnter 2nd Triangle : ";
    cin>>hamza;
	int hamza19;
	cout<<"\n\nEnter 3rd Triangle : ";
    cin>>hamza19;
	int HH;
	HH=hafiz+hamza+hamza19;
	if(HH==180)
	{
		cout<<"\n\n\n\n    *Triangle Is Valid*";
	}
	else
	{
		cout<<"\n\n\n\n    *Triangle Is Not Valid*";
	}



	getch();
}