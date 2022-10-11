

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )
void maxmin(int, int, int, int &, int &);

void maxmin(int num1, int num2, int num3, int &maxVal, int &minVal)
{

    
    if((num1 > num2) && (num1 > num3))
        maxVal = num1;
    
    else if((num2 > num1) && (num2 > num3))
        maxVal = num2;

    else if((num3 > num1) && (num3 > num2))
        maxVal = num3;
    

    if((num1 < num2) && (num1 < num3))
        minVal = num1;
    
    else if((num2 < num1) && (num2 < num3))
        minVal = num2;

    else if((num3 < num1) && (num3 < num2))
        minVal = num3;
    
}