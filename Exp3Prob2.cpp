#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	int provA [10], provB [10], provC [10];
	int i;
	 
	cout << "Enter all the temperatures for the week for provinces A, B and C : " << endl;
	 
	for (i = 1; i <= 7; i++)
	{
		cout << "Province A, Day " << i << ": ";
		cin >> provA [i];
	}
	cout << endl;

	for (i = 1; i <= 7; i++)
	{
		cout << "Province B, Day " << i << ": ";
		cin >> provB [i];
	}

	cout << endl;
	for (i = 1; i <= 7; i++)
	 
	{
		cout << "Province C, Day " << i << ": ";
		cin >> provC [i];
	}

	cout << "\n\n\n\n\n";
	cout << "Displaying Values:" << endl;

	for (i = 1; i <= 7; i++)
	
	{
		cout << "Province A, Day " << i << ": " << provA [i] << endl;
	}

	cout << endl;

	for (i = 1; i <= 7; i++)
	
	{
		cout << "Province B, Day " << i << ": " << provB [i] << endl;
	}

	cout << endl;

	for (i = 1; i <= 7; i++)
	 
	{
		cout << "Province C, Day " << i << ": " << provC [i] << endl;
	}

	cout << endl;


_getch ();
	return 0;
 }
