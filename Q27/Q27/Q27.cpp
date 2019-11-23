#include<iostream>
#include <conio.h>
#include<string>
using namespace std;
void main()
{
	float hafiz;
	cout<<"Enter Meal Charges : $";
	cin>>hafiz;
	
	float hamza19;
	hamza19=hafiz+(hafiz/100)*6.75;
	cout<<"\n\nThe Meal Cost +6.75% Tax =$"<<hamza19;

	float hamza;
	hamza=(hafiz/100)*6.75;
	cout<<"\n\nThe Tax(6.75%) Amount    =$"<<hamza;

	float hafiz19;
	hafiz19=(hafiz/100)*15;
	cout<<"\n\nThe Tip(15%) Amount      =$"<<hafiz19;
	
	float hamza66;
	hamza66=hafiz+hamza+hafiz19;
    cout<<"\n\nThe Total Bill           =$"<<hamza66;

	getch();
}