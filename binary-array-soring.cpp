vector<int> SortBinaryArray(vector<int> binArray)
    {
        int left=0;
        int right=1;
        if(binArray.size()==1){
            return binArray;
        }
        while(right<binArray.size()){
            if(binArray[left]==binArray[right]){
                right++;
            }
            else if(binArray[left]>binArray[right]){
                swap(binArray[left],binArray[right]);
                left++;
            }
            else{
                left++;
                right++;
            }
        }
        return binArray;
        // Your code goes here 
    }
