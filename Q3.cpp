#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
public:
    Solution();
    bool isPalindrome(string str);
};
Solution::Solution(){}
bool Solution::isPalindrome(string str)
{
    int low = 0;
    int high = str.length()-1;
    while(low < high)
    {
        if(str[low++] != str[high--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string str;
    cin >> str;
    if(sol.isPalindrome(str))
    {
        cout << "Yes The Given String Is Palindrome" << endl;
    }
    else
    {
        cout << "No The Given String is NotPalindrome " << endl;
    }
}
