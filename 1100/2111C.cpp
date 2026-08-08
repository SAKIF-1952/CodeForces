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
bool testcase = true;
    


void brainrot() {
    int n;
    cin>>n;
    vll arr(n);
    for(auto &i:arr)cin>>i;

    ll ans = INF;
   for (int i = 0; i < n; ++i)
   {
        if(i>0 and arr[i]==arr[i-1])continue;
        int j = i;
        while(j+1<n and arr[j+1]==arr[i])++j;
        ll x = 1LL*i*arr[i]+1LL*(n-j-1)*arr[i];
        ans = min(ans,x);
   }
   

cout<<ans<<endl;




}

int main() {
    optimize();
    int tc = 1;
   if (testcase) cin >> tc;
   while (tc--) brainrot();

return 0;    
}


