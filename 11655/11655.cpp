#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    for (int i = 0; i < input.size(); i++) {
        if (isalpha(input[i])) {
            if (isupper(input[i])) {
                input[i] += 13;
                if (input[i] > 'Z') {
                    input[i] -= 26;
                }
            }
            else {
                if (input[i]+13 > 'z') {
                    input[i] -= 13;
                }
                else {
                    input[i] += 13;
                }
            }
        }
    }

    cout << input;

    return  0;
}
