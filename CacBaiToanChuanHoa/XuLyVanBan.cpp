#include<bits/stdc++.h> 
using namespace std; 


int check( string s){
	if( s[s.size() - 1] == '?' || s[s.size() - 1] == '.' || s[s.size()-1] == '!') return 1; 
	return 0;
}

int main(){
	string s;
	string tmp="";
	vector<string> v;
	while( cin >> s){
		if ( tmp == "") tmp += s;
		else tmp = tmp + " " + s;
		if( check(tmp) ){
			tmp.pop_back();
			tmp[0] = toupper(tmp[0]);
			for(int i=1 ; i<tmp.size(); i++ ){
				tmp[i]= tolower(tmp[i]);
			}
			v.push_back(tmp);
			tmp="";
		}
		if( s=="a") break;
	}
	for( int i=0 ; i< v.size();i++) {
		cout << v[i] << endl;
	}
}
