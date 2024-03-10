vector<int> Solution::solve(vector<int> &A) {
    // Get the size of the input array
    int n = A.size();
    // Create a vector to store the squared values of elements
    vector<int> ans(n);
    // Initialize two pointers: left pointer at the beginning of the array and right pointer at the end
    int left = 0, right = n - 1;
    // Initialize an index variable for filling the result vector from the end to the beginning
    int idx = n - 1;
    
    // Iterate until the left pointer crosses the right pointer
    while (left <= right) {
        // Calculate the square of the element pointed by the left pointer
        int squareLeft = A[left] * A[left];
        // Calculate the square of the element pointed by the right pointer
        int squareRight = A[right] * A[right];
        
        // Compare the squares of the elements
        if (squareLeft > squareRight) {
            // If square of left element is greater, store it in the result vector from the end
            ans[idx--] = squareLeft;
            // Move the left pointer to the next element
            left++;
        } else {
            // If square of right element is greater or equal, store it in the result vector from the end
            ans[idx--] = squareRight;
            // Move the right pointer to the previous element
            right--;
        }
    }
    // Return the result vector
    return ans;
}
