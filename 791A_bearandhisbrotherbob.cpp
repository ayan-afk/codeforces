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
    int a, b;
    cin >> a >> b;
    for(int i=0;i<1000000;i++){
        if(a>b){
            cout << i;
            break;
        }else{
             a*=3;
             b*=2;
        }
    }    
}
