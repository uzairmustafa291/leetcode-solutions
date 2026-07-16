#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum2=0;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
            int num=nums[i];
            while(num!=0){
                int dig=num%10;
                sum1+=dig;
                num=num/10;
            }
        }
        return abs(sum2-sum1);
        
    }
};

int main(){
    Solution s;
    vector<int>nums={1,15,6,3};
    int result=s.differenceOfSum(nums);
    cout<<result;
    return 0;
}