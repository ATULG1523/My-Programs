#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    string n;
    cout << "Enter Number : ";
    cin >> n;
    cout << n[0] << "@@" << n[n.length() - 1];
    return 0;
}