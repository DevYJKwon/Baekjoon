#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int dp[100001];
    int table[10001];
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        cin >> table[i];
    }

    dp[1] = table[1];
    dp[2] = table[1] + table[2];

    for (int i = 3; i <= num; i++) {
        dp[i] = max(dp[i - 1], max(dp[i - 2] + table[i], dp[i - 3] + table[i] + table[i - 1]));
    }

    cout << dp[num];

    return 0;
}
