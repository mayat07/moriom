#include<bits/stdc++.h>
using namespace std;
#define  optimize()  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  ll          long long int
#define  ull         unsigned long long int
#define  pb          push_back
#define  all(v)      v.begin(),v.end()
#define  rall(v)     v.rbegin(),v.rend()
#define  endl        "\n"
#define  lcm(a,b)    a/__gcd(a,b)*b
//#define  mod         (ll)1e9+7;
#define  gcd(a,b)    __gcd(a,b)
#define  Max(a,b,c)  max(max(a,b),c)
#define  Min(a,b,c)  min(min(a,b),c)
#define  pii         pair<ll,ll>
#define  S           second
#define  F           first
const ll inf=1e18;
void answer();
const ll mx=1e7+123;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
const int mod=1000000007;
int main()
{
    optimize();
     ll tt;
     cin>>tt;
    // vector<ll>div[mx];
    //ll tc=tt;
     while(tt--){
   //cout<<"Case "<<tc-tt<<": ";
        answer();
     }
     return 0;
}
void answer(){
      ll n;
      cin>>n;
      vector<ll>v(n);
      string s; cin>>s;
      for(ll i=0; i<n; i++)cin>>v[i];
      ll p=0,c=0,ans=0;
      for(ll i=0; i<n; i++)
      {

          if(s[i]=='P')p++;
            else c++;
      }
      multiset<ll>st;
      for(ll i=n-1; i>=0; i--)
      {

          if(s[i]=='C')st.insert(v[i]);
          else
          {
              p--;
              if(p<c)
              {
                  ans+=*st.begin() * v[i];
                  st.erase(st.begin());
              }

          }
      }
      cout<<ans<<endl;
  }
