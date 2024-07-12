#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define endl "\n";
const int MOD = 1e9 + 7;
void solve();
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int testcase = 1; //cin >> testcase;
    while(testcase--) solve();
    return 0;
}
void solve(){
  int n;
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int mini=INT_MAX;
  int maxi=INT_MIN;

  for(int i=0;i<n;i++){
    mini=min(mini,arr[i]);
    maxi=max(maxi,arr[i]);
  }
  cout<<"The maximum difference between any two elements in the array: "<<maxi-mini;


}