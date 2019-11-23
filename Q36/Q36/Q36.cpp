#include <iostream>
#include <conio.h>
using namespace std;
int namelen(char *hafiz)
{
	static int hamza=0;
	if(*hafiz!=NULL)
	{
		hamza++;
		namelen(++hafiz);
	}
	else
	{
		return hamza;
	}

}
void main()
{
	cout<<"*****Find Length Of Name********\n\n";
	char hafiz19[50];
	cout<<"Enter Name : ";
	cin.getline(hafiz19,50);
	int hamza1=0;
	hamza1=namelen(hafiz19);
	cout<<"\n\nThe Length Of "<<hafiz19<<" ="<<hamza1;

	getch();
}
