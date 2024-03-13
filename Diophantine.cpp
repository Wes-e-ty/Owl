#include<bits/stdc++.h>
using namespace std;

int e_gcd(int a, int b, int& x, int& y){
	if(b==0){
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int ans = e_gcd(b,a%b,x1,y1);
	x = y1;
	y = x1-y1*(a/b);
	return ans;
}

bool find_sol(int a, int b, int c, int& x, int& y, int& g){
	g = e_gcd(a,b,x,y);
	if(c%g){return false;}
	x = x*(c/g);
	y = y*(c/g);
	if(a<0){x=-x;}
	if(b<0){y=-y;}
	return true;
}

int main(int argc, char *argv[]){
	int a,b,c,x,y,g;
	cin>>a>>b>>c;
	int _ans = find_sol(a,b,c,x,y,g);
	if(_ans){
		cout<<"GCD: "<<g<<"\n";
		cout<<"x: "<<x<<"\t";
		cout<<"y: "<<y;
	}
	else{
		cout<<"solution does not exist";
	}
	return 0;
}




