#include <iostream>
using namespace std;
int main()
{
    char first[20], line[50];
    cout << "Word: ";
    cin >> first;
    cin.ignore(100, '\n');
    cout << "Sentence: ";
    cin.getline(line, 50);
    cout << first << " | " << line << endl;
    return 0;
}