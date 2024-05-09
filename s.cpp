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
using namespace std;
void s(){
 ll n;
 cin>>n;
 vector<ll>a(n),b;
 for(ll i=0;i<n;i++) cin>>a[i];
 ll mn=INT_MAX;
 for(ll i=0;i<n-1;i++){
   b.push_back(abs(a[i]-a[i+1]));
 }
 if(n>=2){
    mn=min(mn,b[0]);
    mn=min(mn,b[n-2]);
 }
 for(ll i=0;i<n-1;i++){
    ll r=max(b[i-1],b[i]);
    mn=min(mn,r);
 }
 cout<<mn<<endl;
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



