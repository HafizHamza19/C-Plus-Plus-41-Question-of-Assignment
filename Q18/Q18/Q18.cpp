#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char hafiz;
	cout<<"Do you have children? \n   Ans: ";
	cin>>hafiz;
	char hamza;
	cout<<"\nDo you have lots of money? \n   Ans: ";
	cin>>hamza;
	char hamza19;
	cout<<"\nDo you like trucks? \n   Ans: ";
	cin>>hamza19;
	if(hafiz=='n'&& hamza=='y' && hamza19=='n')
	{
		cout<<"\n\nYukon";
	}
	if(hafiz=='n'&& hamza=='y' && hamza19=='y')
	{
		cout<<"\n\nCivic";
	}
	if(hafiz=='y'&& hamza=='y' && hamza19=='n')
	{
		cout<<"\n\nExplorer";
	}
	if(hafiz=='y'&& hamza=='y' && hamza19=='y')
	{
		cout<<"\n\nSentra";
	}
	if(hafiz=='n' && hamza=='y' && hamza19=='n')
	{
		cout<<"\n\nVilleger";
	}
	getch();
}