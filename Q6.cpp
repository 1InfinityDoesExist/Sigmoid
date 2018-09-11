#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
public:
    Solution();
    int solve(vector<int> &A, const int k);
};
Solution::Solution(){}
int Solution::solve(vector<int> &A, const int k)
{
    int cnt (0);
    map<int, int> mp;
    for(int iter = 0; iter < A.size(); iter++)
    {
        int remaining = abs(k - A[iter]);
        if(mp.find(remaining) != mp.end())
        {
            cnt = cnt + mp[remaining];
        }
        mp[A[iter]]++;
    }
    return cnt*2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int n;
        cin >> n;
        vector<int> A;
        for(int iter = 0; iter < n; iter++)
        {
            int data;
            cin >> data;
            A.push_back(data);
        }
        int k;
        cin >> k;
        int ans = sol.solve(A, k);
        cout << ans << endl;
    }
    return 0;
}
