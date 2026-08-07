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

int n;
cin>>n;
vll a(n);
for(auto &i:a)cin>>i;

string s;
cin>>s;
vector<pair<int,char>>pr(n);
for (int i = 0; i < n; ++i)
{
    pr.pb({a[i],s[i]});
}
sort(all(pr),greater<pair<int,char>>());

ll scr = 0;

int i = 0;

while(i<pr.size() and pr[i].ss=='B' )++i;
while(i<pr.size() and  pr[i].ss=='A')pr[i].ss='B';





for(auto &i:pr){
    if(i.ss=='B')scr+=i.ff;
}

cout<<scr<<endl;











}

int main() {
    optimize();
    int tc = 1;
   if (testcase) cin >> tc;
   while (tc--) brainrot();

return 0;    
}
