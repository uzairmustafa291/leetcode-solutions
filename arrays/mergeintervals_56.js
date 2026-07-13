var merge = function(intervals) {

    intervals.sort((a,b)=>a[0]-b[0])
    for(let i=0;i<intervals.length;i++){
        if(i+1<intervals.length){
     if(intervals[i][1]>=intervals[i+1][0]){
        if(intervals[i][1]<intervals[i+1][1]){
            intervals[i][1]=intervals[i+1][1]
            intervals.splice(i+1,1)
        }
        else{
        intervals.splice(i+1,1)
        }
     }

    }
}

    return intervals
    
};

// Test Case 1
console.log(
    merge([
        [1,3],
        [2,6],
        [8,10],
        [15,18]
    ])
);

// Expected:
// [[1,6],[8,10],[15,18]]


// Test Case 2
console.log(
    merge([
        [1,4],
        [4,5]
    ])
);

// Expected:
// [[1,5]]


// Test Case 3
console.log(
    merge([
        [1,4],
        [2,3]
    ])
);

// Expected:
// [[1,4]]

