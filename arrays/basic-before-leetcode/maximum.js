let array=[1,2,3,4,56,7]
let max=array[0]

for(let i=0;i<array.length;i++){
    if(array[i]>max){
        max=array[i]
    }
}

console.log(max)


//using reduce funciton 

const max1=array.reduce((acc,curr)=>{
    return acc>curr? acc:curr
})

console.log(max1)


console.log(array)