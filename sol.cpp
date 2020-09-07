#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=1e5;
int a[mxN], b[mxN], n, m;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		for(int i=0; i<m; ++i)
			cin >> b[i];
		int n1=*max_element(a, a+n);
		int n2=*max_element(b, b+m);
		int mx=max(n1, n2);
		int p[mx+1];
		memset(p, 0, sizeof(p));
		for(int i=0; i<n; ++i)
			p[a[i]]++;
		for(int i=0; i<m; ++i)
			p[b[i]]++;
		int cnt=0;
		for(int i=0; i<mx+1; ++i)
			if(p[i]>1)
				cnt++;
		cout << cnt << "\n";
	}
}
