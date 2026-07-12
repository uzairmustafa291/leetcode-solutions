let array=[10,9,1,3,5,8,2,4,6,7]
  //this is ascending,
  console.log("ascending order")
array.sort((a,b)=>a-b)
//this is descending
console.log(array)

console.log("descending order")
array.sort((a,b)=>b-a)
console.log(array)