#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count[26] = { 0, };
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        count[temp[0] - 'a']++;
    }
    string res="";
    for (int i = 0; i < 26; i++) {
        if (count[i] >= 5) {
            res += 'a' + i;
        }
    }

    if (res.size() == 0) {
        cout << "PREDAJA";
    }
    else {
        cout << res;
    }
        return 0;
}

