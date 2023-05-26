#include <iostream>
#include <stack>

using namespace std;
int num[1000001] = { 0, };
int main()
{
	int n;
	cin >> n;
	string res;
	stack <int> st;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	int index=1;
	for (int i = 1; i <= n; i++) {
		st.push(i);
		res.append("+");
		while (!st.empty() && st.top() == num[index]) {
			st.pop();
			index++;
			res.append("-");
		}
	}
	if (st.empty()) {
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << '\n';
		}
	}
	else {
		cout << "NO\n";
	}
	return 0;
}
