#include<bits/stdc++.h>
using namespace std;

void funct(int n){
	vector<char> is_prime(n+1, true);
	is_prime[0]=is_prime[1]=false;
	for(int i =2; i<=n; i++){
		if(is_prime[i] && (long long)i*i<=n){
			for(int j = i*i; j<=n; j+=i){
				is_prime[j]=false;
			}
		}
	}
	for(int i=0; i<=n; i++){
		if(is_prime[i]){cout<<i<<"\t";}
	}
}
int main(int argc, char *argv[]){
	funct(100000000);
	return 0;
}
