vector<int> Solution::findOccurences(vector<int> &A) {
    vector<int> res; // Initialize a vector to store the occurrences of each element
    int i=0, count=1; // Initialize variables for iteration and counting occurrences
    sort(A.begin(), A.end()); // Sort the input vector to group same elements together
    while(i < A.size()-1) { // Iterate through the sorted vector
        if(A[i] != A[i+1]) { // If the current element is different from the next element
            res.push_back(count); // Push the count of occurrences of the current element into the result vector
            count = 1; // Reset the count for the new element
        } else { // If the current element is the same as the next element
            count++; // Increment the count of occurrences
        }
        i++; // Move to the next element
    }
    res.push_back(count); // Push the count of occurrences of the last element into the result vector
    return res; // Return the result vector containing the occurrences of each element
}
