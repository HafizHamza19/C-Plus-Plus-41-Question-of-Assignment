#include<iostream>
#include <conio.h>
#include<string>
using namespace std;
void main()
{
	cout<<"********Running Race**********\n\n";
	cout<<"#####Enter Players Name#####\n\n";
	char hafiz[20];
	cout<<"Enter Name Of First Runner : ";
	cin.getline(hafiz,20);
	char hafiz2[20];
	cout<<"Enter Name Of 2nd Runner   : ";
	cin.getline(hafiz2,20);
	char hafiz3[20];
	cout<<"Enter Name Of 3rd Runner   : ";
	cin.getline(hafiz3,20);
	cout<<"\n\n@@@@@@Enter Time Of Runners@@@@@@\n";
	int hamza;
	cout<<"\n\nEnter Time Of First Runner : ";
	cin>>hamza;
	int hamza2;
	cout<<"Enter Time Of 2nd Runner   : ";
	cin>>hamza2;
	int hamza3;
	cout<<"Enter Time Of 3rd Runner   : ";
	cin>>hamza3;
	if(hamza<hamza2 && hamza<hamza3 && hamza2<hamza3) 
	
	{
		cout<<"\n"<<hafiz<<"    Got 1st Position";
		cout<<"\n"<<hafiz2<<"   Got 2nd Position";
	    cout<<"\n"<<hafiz3<<"   Got 3rd Position";
	}
	
	if(hamza2<hamza && hamza2<hamza3 && hamza<hamza3)
	{
		cout<<"\n"<<hafiz2<<"   Got 1st Position";
		cout<<"\n"<<hafiz<<"    Got 2nd Position";
	    cout<<"\n"<<hafiz3<<"   Got 3rd Position";
	}
	if(hamza3<hamza && hamza3<hamza2 && hamza<hamza2)
	{
		cout<<"\n"<<hafiz3<<"   Got 1st Position";
		cout<<"\n"<<hafiz<<"    Got 2nd Position";
	    cout<<"\n"<<hafiz2<<"   Got 3rd Position";
	}
	if(hamza3<hamza && hamza3<hamza2 && hamza2<hamza)
	{
		cout<<"\n"<<hafiz3<<"   Got 1st Position";
	    cout<<"\n"<<hafiz2<<"   Got 2nd Position";
		cout<<"\n"<<hafiz<<"    Got 3rd Position";
	}
	if(hamza<hamza3 && hamza<hamza2 && hamza3<hamza2)
	{
		cout<<"\n"<<hafiz<<"    Got 1st Position";
		cout<<"\n"<<hafiz3<<"   Got 2nd Position";
	    cout<<"\n"<<hafiz2<<"   Got 3rd Position";
	}
	if(hamza2<hamza && hamza2<hamza3 && hamza3<hamza)
	{
		cout<<"\n"<<hafiz2<<"   Got 1st Position";
		cout<<"\n"<<hafiz3<<"   Got 2nd Position";
		cout<<"\n"<<hafiz<<"    Got 3rd Position";
	}
	getch();
}