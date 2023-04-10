#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve();

int a,b,sum;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	solve();
	return 0;
}   
void solve()
{
    int n;
    cin >> n;
    if(n>2){
        if(n%2==0){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }else {
        cout << "NO" << endl;
    }
}
