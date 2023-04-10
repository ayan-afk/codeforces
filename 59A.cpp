#include <bits/stdc++.h>
using namespace std;
void solve();

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	solve();
	return 0;
}   
void solve()
{
    string s;
    int a=0, b=0;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if('A' <= s.at(i) && s.at(i) <= 'Z'){
            a++;
        }else if('a'<= s.at(i) && s.at(i) <= 'z'){
            b++;
        }else{
            break;
        }
    }
    if(b>=a){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << endl;
}

