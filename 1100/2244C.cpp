#include <bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int T = 1; T <= t; T++)
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
 
 
void brainrot() {

    int n,x,y;
    cin>>n>>x>>y;
    vector<int>arr(n+1);
    for (int i = 1; i <=n; ++i)
    {
        cin>>arr[i];
    }

  int gcd = __gcd(x,y);
  for (int i = 1; i <=n; ++i)
  {
        if(i%gcd != arr[i]%gcd){
            cout<<"NO"<<endl;
            return;
        }
  }

  cout<<"YES"<<endl;


 
}
 
 
int main() {
    optimize();
    testcase
    brainrot();
    return 0;
}



