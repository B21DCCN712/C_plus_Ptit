#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string str;
		cin>>str;
		int n=str.size();
		int sum=0,res=0;
		for(int i=0;i<n;i++){
			if(isdigit(str[i])){
				res = res * 10 + str[i]-'0';
			}
			else {
				sum += res;
				res=0;
			}
		}
		cout<< sum + res <<endl;
	}
}
