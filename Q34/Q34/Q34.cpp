#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<"*********Vowels & CONSONANT***********\n\n ";
	char hafiz[100];
	cout<<"Enter Keywords : ";
	cin.getline(hafiz,100);
	char *hamza;
	hamza=hafiz;
	int hafiz19;
	int hamza19;
	hafiz19=hamza19=0;
	while (*hamza!='\0')
	{
		if(*hamza=='A' || *hamza=='E' || *hamza=='I' || *hamza=='O'||*hamza=='U' || *hamza=='a'|| *hamza=='e' || *hamza=='i' || *hamza=='o'||*hamza=='u')
		
			hafiz19++;
		else
			hamza19++;
		hamza++;

	}
	 cout<<"\nTotal number of VOWELS ="<<hafiz19 <<"\nCONSONANT ="<<hamza19;        


	getch();
}