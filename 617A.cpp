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
    int n,ans=0;
    int a[]={5,4,3,2,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        ans+=n/a[i];
        n=n%a[i];
    }
    cout<<ans<<endl;
}
