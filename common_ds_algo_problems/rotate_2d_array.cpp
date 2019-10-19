/* Rotate a 2D array without using extra space
 
 You are given an n x n 2D matrix representing an image.
 Rotate the image by 90 degrees (clockwise).
 */
 
 #include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v[n];
	    for(int i=0;i<n;i++){
	        vector<int>row(n);
	        for(int j=0;j<n;j++){
	            cin>>row[j];
	        }
	        v[i]=row;
	    }
	    int temp;
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            swap(v[i][j],v[j][i]);
	        }
	       
	    }
	      for(int i=0;i<n;i++){
	        for(int j=0;j<n/2;j++){
	            swap(v[i][j],v[i][n-1-j]);
	        }
	       
	    }
	    
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++)
	            cout<<v[i][j]<<" ";
	       
	    }
	    cout<<endl;
	}
	return 0;
}
