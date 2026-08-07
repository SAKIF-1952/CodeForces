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
    

ll LCM(ll a,ll b)
{
    return a/gcd(a,b)*b;
}
    
 
 
void brainrot() {
 
    ll a,b,c,x;
    cin>>a>>b>>c>>x;
    ll abc = x/LCM(LCM(a,b),c);
    ll ab = x/LCM(a,b) - abc;
    ll ac = x/LCM(a,c) - abc;
    ll bc = x/LCM(c,b) - abc;
    ll a_o = x/a-ab-ac-abc;
    ll b_o = x/b-ab-bc-abc;
    ll c_o = x/c-bc-ac-abc;
 
    cout<<a_o*6+(ab+ac)*3+abc*2<<" "<< b_o*6+(bc+ab)*3+abc*2<<" "<<c_o*6+(ac+bc)*3+abc*2<<endl;
 
 
}



int main() {
    optimize();
    int tc = 1;
   if (testcase) cin >> tc;
   while (tc--) brainrot();

return 0;    
}

/*copy main.cpp 900\2245B.cpp
git add 900\2245B.cpp
git commit -m "2245B"
git push*/

