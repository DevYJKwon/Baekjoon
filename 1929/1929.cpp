#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        bool isPrime = true;
        if (i == 1) {
            isPrime = false;
        }
        for (int x = 2; x <= sqrt(i); x++) {
            if (i % x == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << '\n';
        }
    }
}
