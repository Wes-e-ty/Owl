#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long binpow(long long a, long long b){
	long long res = 1;
	while(b>0){
		if(b&1){
			res = res * a;
	    }
		a = a*a;
		b >>= 1;
	}
	return res;
}
int main(int argc, char *argv[]){
	int ans = binpow(11, 7);
	cout<<ans;
	return 0;
}
