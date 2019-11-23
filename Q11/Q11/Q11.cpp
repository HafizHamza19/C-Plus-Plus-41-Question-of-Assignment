#include <iostream>;
#include <conio.h>
using namespace std;
void main()
{
int hafiz;
cout<<"\nEnter Units : ";
cin>>hafiz;
if (hafiz>=1 && hafiz<=100)
{

	cout<< " \n\nUnite Charges                        = 2.00 Rs";
	cout<<"\nGST(Tax)                             = 10%";
	hafiz=(hafiz*2.00)+(hafiz/100*10);
cout<<"\n\nThe Amount To be Paid By Costumer Is = "<<hafiz;
}
if (hafiz>=101 && hafiz<=200)
{
	cout<<"\n\nPer Unite Charges                    = 3.50 Rs";
	cout<<"\nGST(Tax)                             = 10%";
	hafiz=(hafiz*3.50)+(hafiz/100*10);
cout<<"\n\nThe Amount To be Paid By Costumer Is = "<<hafiz;
}
if (hafiz>=201)
{
	cout<<"\n\nPer Unite Charges                    = 4.50";
	cout<<"\nGST(Tax)                             = 10%";
	hafiz=(hafiz*4.50)+(hafiz/100*10);
cout<<"\n\nThe Amount To be Paid By Customer Is = "<<hafiz;
}
getch();
}