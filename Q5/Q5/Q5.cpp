#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<"FootBall Tournament Of Four Teams Every Team Played 3 Matches ";
	int hamza1;
	    cout<<"\n\n\n 1st Team  : How Many Match Won : ";
		cin>>hamza1;
	int hamza2;
		cout<<"\n 2nd Team  : How Many Match Won : ";
	    cin>>hamza2;
	int hamza3;
		cout<<"\n 3rd Team  : How Many Match Won : ";
		cin>>hamza3;
	int hamza4;
		cout<<"\n 4th Team  : How Many Match Won : ";
		cin>>hamza4;
	int hafiz1;
		hafiz1=hamza1*2;
	int hafiz11;
	    hafiz11=hamza1*100/3;
		cout<<"\n\n\nThe Point Of 1st Team Is "<<hafiz1<<"  The Avg Of 1st Team Is "<<hafiz11;
		if(hafiz1>=4)
		{

			cout<<"\n\n(Team 1st Has Qualified For Final)";
		}
		else
		{
			cout<<"/n/nDisQualified";
		}
	int hafiz2;
		hafiz2=hamza2*2;
	int hafiz22;
	    hafiz22=hamza2*100/3;
		cout<<"\n\n\nThe Point Of 2nd Team Is "<<hafiz2<<"  The Avg Of 2nd Team Is "<<hafiz22;
		if(hafiz2>=4)
		{

			cout<<"\n\n(Team 2nd Has Qualified For Final)";
		}
		else
		{
			cout<<"\n\nDisQualified";
		}
	int hafiz3;
		hafiz3=hamza3*2;
	int hafiz33;
	    hafiz33=hamza3*100/3;
		cout<<"\n\n\nThe Point Of 3rd Team Is "<<hafiz3<<"  The Avg Of 3rd Team Is "<<hafiz33;
		if(hafiz3>=4)
		{

			cout<<"\n\n(Team 3rd Has Qualified For Final)";
		}
		else
		{
			cout<<"\n\nDisQualified";
		}
	int hafiz4;
		hafiz4=hamza4*2;
	int hafiz44;
	    hafiz44=hamza4*100/3;
		cout<<"\n\n\nThe Point Of 4th Team Is "<<hafiz4<<"  The Avg Of 4th Team Is "<<hafiz44;
		if(hafiz4>=4)
		{

			cout<<"\n\n(Team 4th Has Qualified For Final)";
		}
		else
		{
			cout<<"\n\nDisQualified";
		}
	
		
		
		
		
		
		
		getch();
}