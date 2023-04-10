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
    int n, k;
    cin >> n >> k;
    for(int i=1;i<=k;i++){
        if(n%10!=0){
            n-=1;
        }else if(n%10==0){
            n/=10;
        }else{
            break;
        }
    }
    cout << n << endl; 
}


