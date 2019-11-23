#include<iostream>
#include <conio.h>
#include<string>
using namespace std;
void main()
{
	float hafiz;
	cout<<"Enter Number Range : ";
	cin>>hafiz;

	float *hamza;
	hamza = (float*) calloc(hafiz, sizeof(float));
	for(int a=1;a<=hafiz;a++)
	{
		cout<<"\nEnter Number "<<a<<" : ";
		cin>>hamza[a];
	}
	for(int b=1;b<=hafiz;b++)
	{
		if(*hamza < *(hamza+b))
		*hamza=*(hamza+b);
	}

	cout<<"\n\n\nLargest Number ="<<*hamza;


	getch();
}