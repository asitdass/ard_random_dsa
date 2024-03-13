vector<int> Solution::plusOne(vector<int> &A) {
    // Get the size of the input vector
    int n = A.size();
    
    // Remove leading zeros, if any
    while (A[0] == 0 && n > 1) {
        A.erase(A.begin()); // Erase the first element
        n--; // Decrease the size of the vector
    }
    
    // Traverse the vector from right to left
    for (int i = n - 1; i >= 0; i--) {
        // If the current digit is less than 9, we can simply add one to it
        if (A[i] < 9) {
            A[i]++; // Increment the digit by one
            return A; // Return the updated vector
        } else { // If the current digit is 9, we need to set it to 0 and continue
            A[i] = 0; // Set the current digit to 0
            
            // If we have reached the leftmost digit and it's 9,
            // we need to add one more digit at the beginning of the vector
            if (i == 0) {
                A.insert(A.begin(), 1); // Insert 1 at the beginning of the vector
            }
        }
    }
    
    // Return the updated vector
    return A;
}
