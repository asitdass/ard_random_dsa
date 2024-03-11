int Solution::solve(vector<int> &A) {
    int n = A.size();
    int countSpecial = 0;
    int idx=0;
   
    // Step - 1: calculate oddSum and evenSum neglecting 0th element
    int evenSum=0, oddSum=0;
    for(int i=1; i<n; i++){
        // If the index is odd, add the element to evenSum
        if(i%2!=0){
            evenSum+=A[i];
        }
        // If the index is even, add the element to oddSum
        else{
            oddSum+=A[i];
        }
    }
    // If evenSum is equal to oddSum, increment countSpecial
    if(evenSum == oddSum){
        countSpecial++;
    }
   
    // Step 2: find odd and even sum for the complete array, neglecting each element one by one
    for(int i=1; i<n; i++){
        // Update evenSum and oddSum based on the removal of the current element
        if(i%2!=0){
            evenSum += A[i-1] - A[i];
        }
        else{
            oddSum += A[i-1] - A[i];
        }
       
        // If evenSum is equal to oddSum, increment countSpecial
        if(evenSum == oddSum){
            countSpecial++;
        }
    }
    // Return the total count of special arrays
    return countSpecial;
}
