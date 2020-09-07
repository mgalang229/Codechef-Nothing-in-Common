#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		set<int> a, b, c;
		for(int i=0; i<n; ++i) {
			int x;
			cin >> x;
			a.insert(x);
			c.insert(x);
		}
		for(int i=0; i<m; ++i) {
			int x;
			cin >> x;
			b.insert(x);
			c.insert(x);
		}
		cout << int(a.size() + b.size() - c.size()) << "\n";
	}
}
