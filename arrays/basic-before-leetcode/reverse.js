const array=["flower","flow","flight"]
const array1=[...array]
//this is the old method, i used in c++
//now js has funcitons, which i can use to find the reverse
for (let i=0,j=array1.length-1;i<j;i++,j--){
    let temp=array1[i]
    array1[i]=array1[j]
    array1[j]=temp
}

console.log(array1.reverse())
console.log(array1)


