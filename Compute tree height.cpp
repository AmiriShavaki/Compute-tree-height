#include <iostream>
#include <algorithm> //Using max

using namespace std;

const int N = 100005;

int par[N];

int computeDepth(int i) {
	int res = 1;
	while (par[i] != -1) {
		i = par[i];
		res++;
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> par[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = max(ans, computeDepth(i));
	}
	cout << ans;
}
