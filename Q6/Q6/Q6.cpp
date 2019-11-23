#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<"--------Seller Man Got 40% Profit---------";
	float hamza;
	cout<<"\n\nEnter Cost Price Of Product : ";
	cin>>hamza;
	float hafiz;
	hafiz=(hamza-(hamza/100)*60)+hamza;
	cout<<"\n\nThe Selling Price OF Product Is "<<hafiz;


	getch();
}