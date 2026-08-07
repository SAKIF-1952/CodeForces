#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define ld long double

using vll = vector<ll>;
using vi = vector<int>;
using mll = map<ll, ll>;


const ll  INF = 1e18;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0);

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(v) (v).begin(), (v).end()
bool testcase = false;



void brainrot() {

 /*   2 1 0 3 0 0 3 2 4
    x x 0 x 0 0 x x x
    0 1 2 3 4 5 6 7 8
        i    (n-i)

     j   2   4   5   


    2<n/2 idx 1  4 ok but as 2 first 2 dominates 5> n/2 ok right dominate
*/
    int n;
    cin>>n;
    vll arr(n);
    vi p;
  for (int i = 0; i < n; ++i)
  {
      cin>>arr[i];
      if(arr[i]==0)p.pb(i);
  }
  vll dp(n,INF);
  ll idx = -1;
  for (int i = 0; i < n; ++i)
  {
    
    if(arr[i]==0){
        idx = i;
    }
    if(idx!=-1){
        dp[i] = i-idx;
    }
     
  }
  ll idx2 = -1;
  for (int i = n-1; i>=0; --i){
    
     if(arr[i]==0){
        idx2 = i;
     }
     if(idx!=-1){
        dp[i] = min(dp[i],(ll)abs(idx2-i));
     }

  }





  for (int i = 0; i < n; ++i)
  {
      cout<<dp[i]<<" ";
  }

  cout<<endl;
   

}

int main() {
    optimize();
    int tc = 1;
   if (testcase) cin >> tc;
   while (tc--) brainrot();

return 0;    
}



