/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
// var removeElement = (nums, val) => {
//     nums = nums.filter((x) => x !== val);
//     return nums.length;
// };

var removeElement = function(nums, val) {
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === val) {
            console.log("Found match:", nums[i]);

            for (let j = i; j < nums.length - 1; j++) {
                nums[j] = nums[j + 1];
            }

            nums.pop(); // remove the duplicate last element

            console.log("Array after removing:", nums);

            i--; // check this index again
        }
    }

    return nums.length;
};
let array=[1,2,4,5,6,7,8,8]
let val=8
console.log(removeElement(array,val))