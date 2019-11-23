#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<"\n-------------Cubic Program-----------";
	int hafiz;
	cout<<"\n\nEnter Number : ";
	cin>>hafiz;
	if (hafiz%2==0)
	{
		int hamza;
	hamza=hafiz*hafiz*hafiz;
	cout<<"\n\nThe Cube Of "<<hafiz<<" is "<<hamza;
	main();
	}
	else
	if(hafiz%3==0)
	{
		cout<<"Not Available";
	}

	getch();
}