// lab103 biggest and largest
#include <iostream>
using namespace std;
int main()
{
    int a[6] = {12, 7, 45, 3, 29, 18};
    int big = a[0], small = a[0];
    int Index = 0;
    int Index_Small = 0;
    for (int i = 1; i < 6; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
            Index = i;
        }
        if (a[i] < small)
        {
            small = a[i];
            Index_Small = i;
        }
    }
    cout << "Largest = " << big << endl;
    cout << "Smallest = " << small << endl;
    cout << "Largest index =" << Index << endl;
    cout << "Smallest index =" << Index_Small << endl;
}