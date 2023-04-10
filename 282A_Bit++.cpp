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
    int n, x(0);
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+'){
            ++x;
        }else{
            --x;
        }
    }
    cout << x << endl;
}
