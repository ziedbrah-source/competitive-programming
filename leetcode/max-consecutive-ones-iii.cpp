    int longestOnes(vector<int>& nums, int k) {
        int maxLength=0;
        int start=0;
        int end=0;
        unordered_map <int,int> u;
        
        while(end<nums.size()){
            u[nums[end]]++;
               while(u[0]>k){ // cause it's illegal
                    u[nums[start]]--;
                    start++;
                }
            maxLength=max(maxLength,end-start+1);
            end++;
        }
        return maxLength;
    }
