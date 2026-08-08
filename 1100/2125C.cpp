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


ll divi(ll x){
    return x-(x/2)-(x/3)-(x/5)-(x/7)
          +(x/6)+(x/10)+(x/14)+(x/15)+(x/21)+(x/35)
          -(x/30)-(x/42)-(x/70)-(x/105)
          +(x/210);
}
    



void brainrot() {
   /* no even as spf = 2, and all vals must not divisible by 2,3,5,7,9 as 
    vals* x = 1 digit present; spf>=11*/

    ll l,r;
    cin>>l>>r;

    cout<<divi(r)-divi(l-1)<<endl;



}

int main() {
    optimize();
    int tc = 1;
   if (testcase) cin >> tc;
   while (tc--) brainrot();

return 0;    
}


