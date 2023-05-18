#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    string origin, reversed;

    cin >> origin;

    reversed = origin;
    reverse(reversed.begin(), reversed.end());

    if (reversed.compare(origin) == 0) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}

