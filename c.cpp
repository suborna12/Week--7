#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define nl cout << endl
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(x) x.begin(),x.end()
const ll intf=1e9+7;
using namespace std;
bool e(vector<ll>&a,vector<ll>&b,ll n){
    ll d=intf;
    for(ll i=0;i<n;i++){
        if(b[i] != 0) d=min(d,a[i]-b[i]);
    }
    if(d<0) return false;
    if(d==intf) return true;
    for(ll i=0;i<n;i++){
        if(a[i]-b[i]>d) return false;
        if(b[i]!=0 && a[i]-b[i]<d) return false;
    }
    return true;
}
void s(){
 ll n;
 cin>>n;
 vector<ll>a(n),b(n);
 for(ll i=0;i<n;i++) cin>>a[i];
 for(ll i=0;i<n;i++) cin>>b[i];
 if(e(a,b,n)) yes;
 else no;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
     cin>>t;
    while(t--)
    {
        s();
    }
}




