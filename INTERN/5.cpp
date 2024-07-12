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
 void rotate(vector<int>& nums, int k) {
        k = k % nums.size();

        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
void solve(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<"Array before rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    rotate(arr,k);
    cout<<endl;
    cout<<"Array After rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}