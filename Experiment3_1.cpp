#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int values[10], i, max, min;
		double sum = 0;
   
    for (i = 0; i < 10; i++)
	{
        cout << "Input the elements of the array: ";
        cin >> values[i]; 
    }
        
    max = values[0]
	
	;
    for (i = 0; i < 10; i++)

    {
        if (max < values[i])
            max = values[i];
    }
    
    min = values[0];


    for (i = 0; i < 10; i++)
    {
			        if (min > values[i])
            min = values[i];
    }
    
    for (i = 0; i < 10; i++)
    {
    
		
		
		
		sum = sum + values[i];
    }
    
    cout << "Largest element: " << max << endl;

    cout << "Smallest element: " << min << endl;
    cout << "Total Sum: " << sum << endl;
    cout << "Average: " << sum/10 << endl;
    
    _getch ();
    return 0;
}

