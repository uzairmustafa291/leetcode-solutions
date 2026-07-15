#include<vector>
#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;
        stack<int> st;

        // Build next greater element map using nums2
        for (int i = 0; i < nums2.size(); i++) {

            while (!st.empty() && nums2[i] > st.top()) {
                mp[st.top()] = nums2[i];
                st.pop();
            }

            st.push(nums2[i]);
        }

        // Remaining elements have no greater element
        while (!st.empty()) {
            mp[st.top()] = -1;
            st.pop();
        }

        // Build answer for nums1
        vector<int> arr(nums1.size());

        for (int i = 0; i < nums1.size(); i++) {
            arr[i] = mp[nums1[i]];
        }

        return arr;
    }
};

int main(){
    Solution s;
    vector<int>nums1={4,1,2};
    vector<int>nums2={1,3,4,2};
    vector<int>result=s.nextGreaterElement(nums1,nums2);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}