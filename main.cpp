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

     int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    vector<bool>vis(n+1,false);
    mll mp;
    for (int i = 1; i <= n; ++i)
    {
       ll x;
       cin>>x;
       mp[i] = x;
    }
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
 
    }
    stack<int>st;
 
 
    vector<vector<int>>ans;
 
    for (int i = 1; i <=n; ++i)
    {
 
 
        if(!vis[i]){
            vis[i]=true;
            st.push(i);
            vector<int>tmp;
 
 
            while(!st.empty()){
                int node = st.top();
                st.pop();
                tmp.pb(node);
                for(auto &i:adj[node]){
                    if(!vis[i]){
                        vis[i] = true;
                        st.push(i);
                    }
                }
                
            }
            ans.pb(tmp);
 
 
        }
 
    }
 
    ll res = 0;
    for(auto &i:ans){
        ll mn = INF;
        for(auto &j:i){
            mn = min(mn,mp[j]);
        }
        res+=mn;
 
    }
    cout<<res<<endl;
   











}

int main() {
    optimize();
    int tc = 1;
   if (testcase) cin >> tc;
   while (tc--) brainrot();

return 0;    
}


