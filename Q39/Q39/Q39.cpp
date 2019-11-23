#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
void main()
{
	time_t now=time(0);
	char *dt=ctime(&now);
	cout<<"Time & Date Of Program ="<<dt;
	int hafiz;
	cout<<"\n\n\nHow Many Book Have You Purchased In This Month : ";
	cin>>hafiz;
	switch(hafiz)
	{
	case(0):
		cout<<"\n\nYou Earned 0 Point";
		break;
    case(1):
		cout<<"\n\nYou Earned 5 Points";
		break;
		case(2):
		cout<<"\n\nYou Earned 15 Points";
		break;
		case(3):
		cout<<"\n\nYou Earned 30 Points";
		break;
		case(4):
		cout<<"\n\nYou Earned 60 Points";
		break;
		default:
		{
			cout<<"\n\nYour are Telling Lie\n\nYou Earned -5 points";
		}
	}




	getch();
}