#include <bits/stdc++.h> 
using namespace std; 
int n,m; 
int a[105][105]; 
int dx[8]={-1,-1,-1,0,0,1,1,1}; 
int dy[8]={-1,0,1,-1,1,-1,0,1};  
void dfs(int i, int j){ 		 
	a[i][j]=0; 					
	for (int k=0;k<8;k++){ 
		int imoi=i+dx[k]; 
		int jmoi=j+dy[k]; 
		if (imoi>=0&&imoi<n&&jmoi>=0&&jmoi<m&&a[imoi][jmoi]){ 
			dfs(imoi,jmoi); 
		} 
	} 
} 
int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		cin>>n>>m; 
		for (int i=0;i<n;i++){ 
			for (int j=0;j<m;j++){ 
				cin>>a[i][j]; 
			} 
		} 
		int cnt=0; 
		for (int i=0;i<n;i++){ 
			for (int j=0;j<m;j++){ 
				if (a[i][j]){ 
					cnt++; 
					dfs(i,j); 
				} 
			} 
		} 
		cout<<cnt<<endl; 
	} 
	return 0; 
}
