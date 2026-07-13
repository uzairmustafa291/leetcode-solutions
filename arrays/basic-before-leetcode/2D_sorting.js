const arrays=[
    [1,2,3],
    [22,3,4],
    [0,4,5],
    [4,5,9]
]

arrays.sort((a,b)=>a[0]-b[0])  //it is element wise sorting
console.log(arrays)