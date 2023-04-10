#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, count_A=0, count_B=0;
	string s;
	cin >> n;
	cin >> s;
	for(int i=0;i<n;i++){
		if(s.at(i) == 'A'){
			count_A += 1;
		}else if(s.at(i) == 'D'){
			count_B += 1;
		}else{
			break;
		}
	}
	if(count_A > count_B){
		cout << "Anton";
	}else if(count_A < count_B){
		cout << "Danik";
	}else{
		cout << "Friendship";
	}
	return 0;
}
