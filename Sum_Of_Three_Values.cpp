#include <bits/stdc++.h>
using namespace std;
 
#define fast                    ios_base::sync_with_stdio(false);  cin.tie(NULL);
#define time                    cerr<<"Time taken : " <<(float)clock()/CLOCKS_PER_SEC <<" secs"<<"\n"  ;
#define F                       first
#define S                       second
#define pb                      push_back
typedef long long int           ll  ;
 
void solve() {
 
       ll n , tar ;
       cin >> n >> tar ;
 
       ll arr[n]  ;
 
       vector<pair<ll, ll>>index ;
 
       for (ll i = 0; i < n ; i++) {
              ll h ;
              cin >> h ;
              index.pb({h, i + 1})  ;
       }
 

       sort(index.begin(), index.end())  ;
 
       for (ll i = 0 ; i < n; ++i) {
 
              ll l = 0 , r = n - 1 ;
 
              while (l != r) {
 
                     ll tot = tar - index[i].F  ;
 
                     if (r != i && l != i && index[l].F + index[r].F == tot) {
 
                            cout << index[l].S << " " << index[r].S << " " << index[i].S << "\n" ;
                            return ;
 
                     }
 
                     if (index[l].F + index[r].F < tot) {
                            l++ ;
                     }
                     else {
                            r-- ;
                     }
              }
       }
 
       cout << "IMPOSSIBLE\n"  ;
 
}
 
 
int32_t main() {
 
       fast ; time;

       ll t = 1;
       //cin >> t;
 
       while (t--) {
              solve()  ;
       }
 
 
       return 0  ;
}
