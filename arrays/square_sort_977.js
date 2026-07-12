// var sortedSquares = function(nums) {
//     nums=nums.map((num)=>num*num)
//     nums.sort((a,b)=>a-b)
// };

var sortedSquares = function(nums) {
    let arr=nums.map(num=>num*num)
    for(let k=0;k<arr.length;k++){
        nums[k]=arr[k]
    }

    nums.sort((a,b)=>a-b)
}