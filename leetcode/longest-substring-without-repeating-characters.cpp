 int lengthOfLongestSubstring(string s) {
  
        int size=1;
        if(s.length()==0){ return 0;}
         
        for(int i=0;i<s.length();i++){
           unordered_map <char,int>u;
            for(int j=i;j<s.length();j++){
                if(u.count(s[j])){
                    break;
                }else {
                    u[s[j]]++;
                    size=max(size,j-i+1);
                }
            }
        }
        return size;
    }
