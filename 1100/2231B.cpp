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
    ll mx = -1LL*INF;
    for (int i = 0; i < n-1 ; ++i)
    {
        if(arr[i]>arr[i+1]){
           mx = max(arr[i]-arr[i+1],mx);
        }
    }
    for (int i = 0; i < n-1; ++i)
    {
        if(arr[i]>arr[i+1])arr[i+1]+=mx;
    }
    if(is_sorted(all(arr))){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


}

int main() {
    optimize();
    int tc = 1;
   if (testcase) cin >> tc;
   while (tc--) brainrot();

return 0;    
}

