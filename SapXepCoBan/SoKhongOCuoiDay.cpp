#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n+1]={0};
		int k=0;
		for(int i=0;i<n;i++){
			long long m;
			cin>>m;
			if(m!=0){
				a[k]=m;
				k++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
