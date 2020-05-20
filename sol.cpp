#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x, y;
	vector<int> v;
	cin >> n >> x;
	int a;
	for(int i = 0; i < x; i++){
		cin >> a;
		v.push_back(a);
	}
	cin >> y;
	int b;
	for(int i = 0; i < y; i++){
		cin >> b;
		v.push_back(b);
	}
	sort(v.begin(), v.end());
	vector<int> v2;
	int cnt = 0;
	for(int i = 0; i < (int)v.size(); i++){
		if(v[i] != v[i+1]){ 
			v2.push_back(v[i]);
			cnt++;
		}
	}
	int cnt2 = 0;
	sort(v2.begin(), v2.end());
	for(int i = 0; i < cnt; i++){
		if(i+1 == v2[i]){
			cnt2++;
		}
	}
	if(cnt2 == n){
		cout << "I become the guy.";
	} else{
		cout << "Oh, my keyboard!";
	}
	cout << "\n";
	return 0;
}
