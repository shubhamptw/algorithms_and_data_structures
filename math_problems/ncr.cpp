/*Find nCr for given n and r.

Input:
First line contains number of test cases T. T testcases follow. Each testcase contains 1 line of input containing 2 integers n and r separated by a space.

Output:
For each testcase, in a new line, find the nCr. Modulus your output to 109+7.

Constraints:
1 <= T <= 50
1<= n <= 103
1<= r <=800
*/


#include<bits/stdc++.h>
#define ll unsigned long long
#define m 1000000007
using namespace std;
ll power(ll a, ll n){
	if(n==0)
	return 1;
	else if(n==1)
	return a;
	else{
		ll r=power(a,n/2);
		if(n%2==0)
		return ((r%m)*(r%m))%m;
		else return  (((r%m)*(r%m))%m*a)%m;
	}
}
ll ncr(ll n, ll r){
	if(r==0||n==r)
	return 1;
	else if(r==1)
	return n;
	else if(n<r)
	return 0; 
	else{
		std::vector<ll>v(n+1,1) ;
		for(int i=1;i<=n;i++){
			v[i]=(v[i-1]*i)%m;
		}
		ll temp= (power(v[r],m-2) % m *power(v[n-r], m-2) % m)%m;
		 return (v[n]*temp) % m; 
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,r;
		cin>>n>>r;
		cout<<ncr(n,r)<<endl;
	}
}

