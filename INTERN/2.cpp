#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define endl "\n";
const int MOD = 1e9 + 7;
void solve();
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int testcase = 1; // cin >> testcase;
    while (testcase--)
        solve();
    return 0;
}
int lengthOfLongestSubstring(string &s)
{
    int i = 0;
    int j = 0;

    int n = s.size();
    unordered_map<char, int> mp;
    int res = 0;

    while (j < n)
    {
        if (mp.find(s[j]) == mp.end())
        {
            mp[s[j]]++;

            res = max(res, j - i + 1);
        }
        else
        {
            mp[s[j]]++;
            while (i < j && mp[s[j]] > 1)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
        }
        j++;
    }
    return res;
}
void solve()
{
   string s="abcabcbb";
   cout<<"Length of the longest substring without repeating characters: "<<lengthOfLongestSubstring(s);
}