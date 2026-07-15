#include<vector>
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> arr(nums1.size());

        for (int i = 0; i < nums1.size(); i++) {

            for (int j = 0; j < nums2.size(); j++) {

                if (nums1[i] == nums2[j]) {

                    bool found = false;

                    for (int k = j + 1; k < nums2.size(); k++) {

                        if (nums2[k] > nums2[j]) {

                            arr[i] = nums2[k];
                            found = true;
                            break;
                        }
                    }

                    if (!found)
                        arr[i] = -1;

                    break;
                }
            }
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
        cout<<result[i]<<" "; // -1 3 -1
    }
}