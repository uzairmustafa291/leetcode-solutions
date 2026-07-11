const array=[1,2,2,1,1,3,4]
let array1=[...array]

for (let i=0;i<array1.length;i++){
    if(array.includes(array1[i],i+1)){
        let temp=array1[i]
        array1[i]=array1[array.length-1]
        array1[array1.length-1]=temp
        array1.pop()
}
}

console.log(array)

// now we have the concept of sets, which only stores the 
//unique elements, lets say we have the array, then new Set returns 
//the unique, single occurence of the array..


let arrayset=[...new Set(array)]
console.log(arrayset) //1 2 3 4 (same set concept)