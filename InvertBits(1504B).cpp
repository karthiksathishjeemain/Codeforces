#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin >>n;
  string a;
  string b;
  cin>>a;
  cin>>b;
  int reverse =0;
  string ans = "YES";
  vector<int>counta(n);
  vector<int>countb(n);
  if (a[0]=='0')counta[0]++;
  else countb[0]++;
  for (int i=1;i<n;i++){
    counta[i]=counta[i-1];
    countb[i]=countb[i-1];
    if (a[i]=='0' ) counta[i]++;
    else countb[i]++;
  }
  for (int i=n-1;i>=0;i--){
    if (reverse%2==0){
    if (a[i]==b[i])continue;
    else {
      if (counta[i]==countb[i]){
        reverse++;
        continue;
      }
      else {
        ans = "NO";
        break;
      }
    }
    }
    else{
      if (a[i]!=b[i])continue;
      else {
        if (counta[i]==countb[i]){
          reverse++;
          continue;
        }
        else {
          ans = "NO";
          break;
        }
      }
    }
  }
  cout<<ans<<endl;
  
  
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

