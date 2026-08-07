#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define testcase int t; cin >> t; while(t--)

#define ll long long
#define ld long double

using vll = vector<ll>;
using mll = map<ll, ll>;


const ll  INF = 1e18;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0);

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(v) (v).begin(), (v).end()
    



void brainrot() {


  /*  aaabccddeeff
    aaa b cc ddd ee ff 5
     x        x

     aaaa b a bbbbb c dd

     aa b 
        x 
*/
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 1;
    bool td = false;
    for (int i = 1; i < n; ++i)
    {
        if(s[i]!=s[i-1])++ans;

    }
    for (int i = 1; i < n-1; ++i)
    {
        if(s[i-1]==s[i+1] and s[i]!=s[i-1]){
            ans-=2;
            cout<<ans<<endl;
            return;
        }else if(s[i-1] != s[i] && s[i] != s[i+1] && s[i-1] != s[i+1]){
          
         td = true;
        }




    }

    // cout<<ans<<endl;
    cout<<((td)?ans-1:ans)<<endl;








}

int main() {
    optimize();
    testcase 
    brainrot();
    return 0;
}