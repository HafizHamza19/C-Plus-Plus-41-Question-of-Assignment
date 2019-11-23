#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 cout<<"--------------Income Tax Calculator----------------";
 int hafiz;
 float hamza;
 cout<<"\n\nPlease Enter Your Salary To Find Income Tax : ";
 cin>>hafiz;
 
 if(hafiz<=400000)
 {
 cout<<"\n\nIncome Tax = 0% ";
 } 
 
 if(hafiz>400000 && hafiz<=500000)
 {
 hamza=hafiz-400000*(0.02);
 cout<<"\n\nYour Total Income Tax Is = "<<hamza;
 
 }
 if(hafiz>500000 && hafiz<=750000)
 {
 hamza=(hafiz-500000)*(2000+0.05);
 
 cout<<"\n\nYour Total Income Tax Is = "<<hamza;
 }
 if(hafiz>750000 && hafiz<=1400000)
 {
 hamza=(hafiz-750000)*(14500+0.1);
 
 cout<<"\n\nYour Total Income Tax Is = "<<hamza;
 
 }
 if(hafiz>1400000)
 {
 hamza=(hafiz-750000)*(17500+0.2);
 
 cout<<"\n\nYour Total Income Tax Is = "<<hamza;
 
 }
 getch();
}