#include <iostream>
using namespace std;

//these are default parameters. they become arguments if a call does not bring in values.
int area (int length = 10, int width = 4)
{
    return length * width;
}

int main ()
{
    //cout << area (); //would use both default parameters.
    //cout << area (6, 3); //would not use any of the parameters.
    cout << area (5); //would use width parameter only, 5 = length here.
    return 0;
}
