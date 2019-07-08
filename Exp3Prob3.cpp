
#include <iostream>
#include <conio.h>

using namespace std;
  
int main()
{
    char arrin[50], arrout[50];
	int  i, j;
    
	cout << "I will reverse the way your array is typed." << endl;
	cout << "How many elements would you want in your array? ";
	cin >> j;
    cout << "Hello and please enter the elements of your array (max of " << j << " elements)" << endl;
    
    for (i = 0; i < j; i++)
	{
        cin >> arrin[i];
    }
      
    for (i = 0; i < j; i++)
	{
        arrout[i] = arrin[j-i-1];
    }    
    
    cout << endl;

	cout << "When the array is reversed, it looks like this : ";
    for(i = 0; i < j; i++)
	{
        cout << arrout[i] << " ";
    }

	cout << "Array size is : " << j;
    cout << endl;

    _getch();
    return 0;
}