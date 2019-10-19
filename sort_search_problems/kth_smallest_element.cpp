/*
Kth smallest element

Expected Time Complexity: O(n)

Input:
The first line of input contains an integer T, denoting the number of testcases. Then T test cases follow. Each test case consists of three lines. First line of each testcase contains an integer N denoting size of the array. Second line contains N space separated integer denoting elements of the array. Third line of the test case contains an integer K.

Output:
Corresponding to each test case, print the kth smallest element in a new line.
Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    int k;
	    cin>>k;
	    vector<int>v1(100001,0);
	    for(int i=0;i<n;i++){
	        v1[v[i]]=1;
	    }
	    vector<int>v2;
	    for(int i=0;i<v1.size();i++){
	        if(v1[i]==1)
	        v2.push_back(i);
	    }
	   cout<<v2[k-1];
	    cout<<endl;
	    
	}
	return 0;
}
