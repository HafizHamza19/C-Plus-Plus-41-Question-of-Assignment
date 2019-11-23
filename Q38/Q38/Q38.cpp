#include <iostream>
#include <conio.h>
#include <string.h>
#include <time.h>
using namespace std;
void main()
{
	cout<<"*****How Many Program Take Time*******\n\n";
	time_t begin;
	time_t end;
    char hafiz[100];
    begin=clock();
    cout<<"\nEnter any Keywords : ";
    cin.getline(hafiz,100);
    cout<<"\nEntered Keywords is ="<<hafiz;

    end=clock();
    cout<<"\n\n\nThe Program Take Time = "<<(double)(end-begin)/(double)CLK_TCK;


	getch();
}