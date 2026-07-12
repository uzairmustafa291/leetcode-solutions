/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
// var findKthLargest = function(nums, k) {
//     nums.sort((a,b)=>b-a)
//     return nums[k-1]
// };


//now sort with ascending, lets see what happens? 
var findKthLargest = function(nums,k){
    nums.sort((a,b)=>a-b)
    return nums[nums.length-k]
}