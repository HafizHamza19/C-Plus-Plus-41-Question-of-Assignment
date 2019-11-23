#include<iostream>
#include <conio.h>
#include<string>
using namespace std;
void main()
{
float hafiz;
cout<<"\nEnter Grams Of Fats : ";
cin>>hafiz;
float hamza;
cout<<"\nEnter Number Of Calories : ";
cin>>hamza;
float hafiz19;
hafiz19=hafiz*9;
cout<<"\n\nThe Calories Of Fats ="<<hafiz19;
float hamza19;
hamza19=hafiz19/hamza;
cout<<"\n\nThe Percentage Of Calories From Fats ="<<hamza19<<"%";
if(hamza19<30)
{
	 cout<<"\n\n *The Food Is Low In Fat*";

}
	getch();
}