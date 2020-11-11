#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout <<"\nEnter Three Numbers: ";
    cin >>a>>b>>c;
    if((a>=b)&&(a>=c))
        cout <<"\nLargest Number: "<< a;
    else if ((b>=a)&&(b>=c))
        cout <<"\nLargest Number: "<< b;
    else
        cout <<"\nLargest Number: "<< c;
    return 0;
}
