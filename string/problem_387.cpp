#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        // Count frequency
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        // Find first unique character
        for (int i = 0; i < s.length(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main(){
    Solution s;
    string str="leetcode";
    int result=s.firstUniqChar(str);
    cout<<result;
    return 0;
}