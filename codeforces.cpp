#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char *argv[]){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int _steps = 0;
		vector<int> vec(n);
		for(int i=0; i<n; ++i){
			cin >> vec[i];
		}
		int x;
		for(int j = 0; j<m; ++j){
			cin >> x;
			for(int i = 0; i<n; ++i){
				if((x+vec[i])<=k) _steps++;
			}
		}
		cout << _steps << "\n";
	}
	return 0;
}
