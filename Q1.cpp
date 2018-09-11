//Sigmoid

#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
public:
    Solution();
    long solve(int n);
};
Solution::Solution(){}
long Solution::solve(int n)
{
    string str = "";
   while(n > 0)
   {
       str = (n%2 == 0 ? "0" : "1") + str;
       n = n/2;
   }
    //str.erase(0, str.find_first_not_of("0"));
    for(int iter = 0; iter < str.length(); iter++)
    {
        if(str[iter] == '0')
        {
            str[iter] = '1';
        }
        else if(str[iter] == '1')
        {
            str[iter] = '0';
        }
    }

    long decimal = bitset<8>(str).to_ulong();
    return decimal;
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
        long  ans = sol.solve(n);
        cout << ans << endl;
    }
    return 0;
}
