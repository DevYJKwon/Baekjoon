#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int dp[500][500] = {0,};
	int depth,res=0;
	cin >> depth;

	for (int i = 0; i < depth; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> dp[i][j];
		}
	}

	for (int i = 0; i < depth; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				dp[i][j] = dp[i][j] + dp[i - 1][0];
			}
			else if (j == i) {
				dp[i][j] = dp[i][j] + dp[i - 1][j-1];
			}
			else {
				dp[i][j] = max(dp[i][j] + dp[i - 1][j-1], dp[i][j]+dp[i-1][j]);
			}
			res = max(dp[i][j], res);
		}
	}
	cout << res << endl;
	return 0;
}
