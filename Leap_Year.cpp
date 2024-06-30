#include <iostream>
using namespace std;

main()
{
    int year = 2024;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout<<"This Year is Leap Year";
    }
    else
    {
        cout<<"This Year is Not Leap Year";
    }
    return 0;
}