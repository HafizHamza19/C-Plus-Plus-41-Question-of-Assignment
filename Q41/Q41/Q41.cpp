#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
void main()
{
	time_t now=time(0);
	char *dt=ctime(&now);
	cout<<"Time ="<<dt;
	double hamza;
	cout << "\n\n----------This Program determines The An Electromagnetic Wave Type.----------\n";
	cout << "\n\nEnter The Wavelength In Meters Of An Electromagnetic Wave: ";
	cin  >> hamza;

	cout << "A " << hamza << " Meter Wavelength "
		 << "Electromagnetic\nWave is of the ";
	if(hamza <= 1E-11)
		cout << "\n\nGamma ray radiation type.\n";
	else if (hamza <= 1E-8)
		cout << "\n\nX-ray radiation type.\n";
	else if (hamza <= 4E-7)
		cout << "\n\nUltaviolet radiation type.\n";
	else if (hamza <= 7E-7)
		cout << "\n\nVisible light radiation type.\n";
	else if (hamza <= 1E-3)
		cout << "\n\nInfrared radiation type.\n";
	else if (hamza <= 1E-2)
		cout << "\n\nMicrowaves radiation type.\n";
	else
		cout << "\n\nRadio wave radiation type\n";

	getch();
}