vector<int> Solution::wave(vector<int> &A) {
    int n = A.size(); // Get the size of the input array A
    sort(A.begin(), A.end()); // Sort the array A in non-decreasing order
    
    // Iterate through the array A up to the second last element
    for(int i = 0; i < n - 1; i++){
        // Check if the current index is even
        if(i % 2 == 0){
            // If the current element is smaller than the next element, swap them
            if(A[i] < A[i+1]){
                swap(A[i], A[i+1]);
            }
        } else { // If the current index is odd
            // If the current element is greater than the next element, swap them
            if(A[i] > A[i+1]){
                swap(A[i], A[i+1]);
            }
        }
    }
    
    return A; // Return the modified array A
}
