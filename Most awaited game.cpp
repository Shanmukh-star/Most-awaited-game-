//Shanmukh//
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pub push_back
#define fastio() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
  fastio()
  ll t,i,n,j,m;
  cin>>t;
  while(t--)
  {
    cin>>n;
    vector<ll> a(n);
    vector<ll> a1(n);
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cin>>m;
    vector<ll> b(m);
    vector<ll> b1(m);
    for(i=0;i<m;i++)
    {
      cin>>b[i];
    }
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    if(a[0]>b[0]) cout<<"Alice"<<endl<<"Alice"<<endl;
    else if(a[0]<b[0]) cout<<"Bob"<<endl<<"Bob"<<endl;
    else
    {
      if(n<m)
      {
        for(i=0;i<n;i++)
        {
            ll ai=count(a.begin(),a.end(),a[i]);
            ll bi=count(b.begin(),b.end(),b[i]);
            if((a[i]<b[i])||(a[i]==b[i]&&ai<bi)) {cout<<"Bob"<<endl<<"Bob"<<endl;break;}
            else if(a[i]>b[i]||(a[i]==b[i]&&ai>bi)) {cout<<"Alice"<<endl<<"Alice"<<endl;break;}
        }
        if(i==n) cout<<"Bob"<<endl<<"Bob"<<endl;
      }
      else if(n>m)
      {
        for(i=0;i<m;i++)
        {
            ll ai=count(a.begin(),a.end(),a[i]);
            ll bi=count(b.begin(),b.end(),b[i]);
            if((a[i]<b[i])||(a[i]==b[i]&&ai<bi)) {cout<<"Bob"<<endl<<"Bob"<<endl;break;}
            else if(a[i]>b[i]||(a[i]==b[i]&&ai>bi)) {cout<<"Alice"<<endl<<"Alice"<<endl;break;}
        }
        if(i==m) cout<<"Alice"<<endl<<"Alice"<<endl;
      }
      else 
      {
        for(i=0;i<m;i++)
        {
            ll ai=count(a.begin(),a.end(),a[i]);
            ll bi=count(b.begin(),b.end(),b[i]);
            if((a[i]<b[i])||(a[i]==b[i]&&ai<bi)) {cout<<"Bob"<<endl<<"Bob"<<endl;break;}
            else if(a[i]>b[i]||(a[i]==b[i]&&ai>bi)) {cout<<"Alice"<<endl<<"Alice"<<endl;break;}
        }
        if(i==m) cout<<"Bob"<<endl<<"Alice"<<endl;
      }
    }
  }
}
int main()
{
    solve();
}
