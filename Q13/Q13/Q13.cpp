#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"******Seconds Convert Into Minutes,Hours,Days,Weeks,Months,Years****** ";
int hafiz;
float hamza;
cout<<"\n\nEnter Seconds : ";
cin>>hafiz;
if(hafiz>=60 && hafiz<=3600)
{
	hamza=hafiz/60;
	cout<<"\n\nIn "<<hafiz<<" Seconds = "<<hamza<<" Minutes";

}
if(hafiz>=3600 && hafiz<=86400)
{
	hamza=hafiz/3600;
	cout<<"\n\nIn "<<hafiz<<" Seconds = "<<hamza<<" Hours";

}
if(hafiz>=86400 && hafiz<=604800)
{
	hamza=hafiz/86400;
	cout<<"\n\nIn "<<hafiz<<" Seconds = "<<hamza<<" Days";

}
if(hafiz>=604800 && hafiz<=2419200)
{
	hamza=hafiz/604800;
	cout<<"\n\nIn "<<hafiz<<" Seconds = "<<hamza<<" Weeks";

}
if(hafiz>=2419200 && hafiz<=29030400)
{
	hamza=hafiz/2419200;
	cout<<"\n\nIn "<<hafiz<<" Seconds = "<<hamza<<" Month";

}
if(hafiz>=29030400)
{
	hamza=hafiz/29030400;
	cout<<"\n\nIn "<<hafiz<<" Seconds = "<<hamza<<" Year";

}
	getch();
}