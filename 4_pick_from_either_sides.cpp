int Solution::solve(vector<int> &A, int B) {
    int maxi = 0;
    int sum = 0;
    for(int i =0; i<B; i++){
        sum+=A[i];
    }
    maxi = sum;
    
    int end = A.size()-1;
    
    for(int i = B-1; i>=0; i--){
        sum-=A[i];
        sum+=A[end];
        maxi = max(maxi, sum);
        end--;
    }
    
    return maxi;
}
