int Solution::repeatedNumber(const vector<int> &A) {
    int slow = A[0]; // Initialize slow pointer
    int fast = A[A[0]]; // Initialize fast pointer
    
    // Move slow pointer by one step and fast pointer by two steps
    while (slow != fast) {
        slow = A[slow]; // Move slow pointer one step
        fast = A[A[fast]]; // Move fast pointer two steps
    }
    
    // Move slow pointer to the beginning of the array
    slow = 0;
    
    // Move slow pointer and fast pointer by one step until they meet
    while (slow != fast) {
        slow = A[slow]; // Move slow pointer one step
        fast = A[fast]; // Move fast pointer one step
    }
    
    // At this point, both slow and fast pointers are at the duplicate number
    return slow;
}
