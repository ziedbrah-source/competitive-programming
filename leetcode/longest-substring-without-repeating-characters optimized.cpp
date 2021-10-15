int lengthOfLongestSubstring(string s) {
  
        if(s.length()==0){
            return 0;
        }
        int size=1;
        unordered_map <char,int>u;
        for(int left=0,right=0;right<s.length();right++){
            u[s[right]]++;
            while(u[s[right]]>1){
                u[s[left++]]--;
                
            }
        size=max(size,right-left+1);
        }
        return size;
    }
