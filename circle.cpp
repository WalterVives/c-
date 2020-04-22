#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float area, radio,perimeter;
    
        
    cout<< "\tThis is a program to calculate the area and perimeter of the circle.\n\n";
    cout<<"Enter the radio:\n ";
    cin>> radio;
    
    area = 3.1416 * radio * radio;
    perimeter = 2 * 3.1416 * radio;

    // the setprecision() is for give the decimal precision.
    cout<< "The area of the circle is: " <<setprecision(4) << area;
    cout<< "\nThe perimeter of the circle is: " << setprecision(4) <<perimeter;
    
    
    return 0;
        
}
