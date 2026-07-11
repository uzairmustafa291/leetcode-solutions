let arr=[1,2,3,4,5]
let sum=0
for (num of arr){
    sum+=num
}
console.log(sum)


//using reduce

let arr1=[...arr]; //copying the element
let sum1=arr1.reduce((acc,current)=>{
    return acc+current
},0)


console.log(sum1)
