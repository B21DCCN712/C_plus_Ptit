#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
	while(t--){
		int n,tmp; cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++){ 
			cin >> tmp;
			v.push_back(tmp); 
		} 
		int k, x; cin >> k >> x;
 		auto p = find(v.begin(), v.end(), x) - v.begin();
		if(p != n){
			int l = p-k/2, r = p+k/2;
			for(int i = l; i <= r; i++){
				if(i == p) continue; 
				cout << v[i] << " ";
			}
		} 
        else{ 
			if(x > v[n-1]){
				cout << 1 << endl;
				for(int i = n-k/2; i < n; i++) cout << v[i] << " ";
				for(int i = n-k/2; i < n; i++) cout << 0 << " ";
            } 
		}
		cout << endl;
	}
}
