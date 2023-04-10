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
   int n;
   cin >> n;
   string a[n];
   for(int i=0;i<n;i++){
       cin >> a[i];
   }
   for(int j=0;j<n;j++){
       if(a[j].size() <= 10){
           cout << a[j] << endl;
       }else{
           cout << a[j].at(0) << a[j].size() -2 << a[j].at(a[j].size()-1) << endl;
       }
   }
}
