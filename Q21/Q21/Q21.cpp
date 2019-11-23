#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"****Alphabets Convert Into Phone Number****\n\n";
	char hafiz;
	  int hamza;
    cout << "\nEnter a phone number in letters only : " ;
      
    for(hamza = 0; hamza < 7; hamza ++)
{
     cin >>hafiz;
     if(hafiz >= 'A' && hafiz <= 'Z' || hafiz >= 'a' && hafiz <= 'z')
     switch(hafiz)
{
         case 'A':
         case 'a':
         case 'B':
         case 'b':
         case 'C':
         case 'c':
             cout << 2;
             break;
         case 'D':
         case 'd':
         case 'E':
         case 'e':
         case 'F':
         case 'f':
             cout << 3;
             break;
         case 'G':
         case 'g':
         case 'H':
         case 'h':
         case 'I':
         case 'i':
             cout << 4;
             break;
             
         case 'J':
         case 'j':
         case 'K':
         case 'k':
         case 'L':
         case 'l':
             cout << 5;
             break;
         case 'M':
         case 'm':
         case 'N':
         case 'n':
         case 'O':
         case 'o':
             cout << 6;
             break;
         case 'P':
         case 'p':
         case 'Q':
         case 'q':
         case 'R':
         case 'r':
         case 'S':
         case 's':
             cout << 7;
             break;
             
         case 'T':
         case 't':
         case 'U':
         case 'u':
         case 'V':
         case 'v':
             cout << 8;
             break;
             
         case 'W':
         case 'w':
         case 'X':
         case 'x':
         case 'Y':
         case 'y':
         case 'Z':
         case 'z':
             cout << 9;
             break; 
}
	}   
	cout<<"  <<Phone Number   ";


	getch();
}