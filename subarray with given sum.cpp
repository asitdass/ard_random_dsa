vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        
         
        vector<int> result;
        long long sum = 0;
        int left = 0;
        int right = 0;
        
        if(s == 0)
        {
            result.push_back(-1);
            return result;
        }
        
        while (right < n)
        {
            sum += arr[right];
    
            while (sum > s)
            {
                sum -= arr[left];
                left++;
            }
    
            if (sum == s)
            {
                result.push_back(left + 1);
                result.push_back(right + 1);
                return result;
            }
    
            right++;
        }
        result.push_back(-1);
        return result;
        // Your code here
    }
