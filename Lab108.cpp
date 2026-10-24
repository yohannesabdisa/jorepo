#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[] = "Hi!";
    cout << "Length= " << strlen(word) << endl;
    cout << "Size= " << sizeof(word) << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << i << ":" << (int)word[i] << endl;
    }
}