var merge = function(nums1, m, nums2, n) {
    let i=0,j=0
    let arr=[]
    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            arr.push(nums1[i])
            i++
        }
        else{
            arr.push(nums2[j])
            j++
        }
    }

 while(i<m){
    arr.push(nums1[i])
    i++
 }

 while(j<n){
    arr.push(nums2[j])
    j++
 }
    return arr
};

let array=[]
array=merge([1,2,8,9,34],5,[3,3,6,7,8,8],6)
console.log(array)