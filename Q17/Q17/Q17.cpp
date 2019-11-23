#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"********Transpose Matrix********\n\n";
    int hafiz[4][4];
	int hamza[4][4];
    int a;
	int b;
	int hamzarows;
	int hamzacols;
      cout<<"Enter Number of ROWS :";
      cin>>hamzarows;
      cout<<"Enter Number Of COLS  :";
      cin>>hamzacols;
       for( a=0;a<hamzarows;a++)
	   {
           for( b=0;b<hamzacols;b++)
           {
               cin>>hafiz[a][b];
           }
          }

          cout<<"\n Matrix You Entered\n";

       for( a=0;a<hamzarows;a++)
	   {
           for( b=0;b<hamzacols;b++)
           {
               cout<<hafiz[a][b]<<"     ";
           }
           cout<<endl;
          }
    cout<<"\n\n\nTranspose of Entered Matrix\n";
       for( a=0;a<hamzarows;a++)
	   {
           for( b=0;b<hamzacols;b++)
           {
               hamza[b][a]=hafiz[a][b];
           }
           cout<<endl;
          }

       for( a=0;a<hamzacols;a++){
           for( b=0;b<hamzarows;b++)
           {
               cout<<hamza[a][b]<<"    ";
           }
           cout<<endl;
          }

	getch();
}