#include<iostream>
#include<math.h>
using namespace std;

long long check(long long n){
	long long res=-1;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				res=i;
				n/=i;
			}
		}
	}
	if(n!=1 ) res=n;
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	long long n;
	cin>>n;
	cout<<check(n)<<endl;
	}
}
