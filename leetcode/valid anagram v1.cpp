bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map < char,int> u;
        for(int i=0;i<s.length();i++){
            u[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            if(u.find(t[i])==u.end()){
                return false;
            }else {
                u[t[i]]--;
            }
        }
        for(int i=0;i < s.length();i++){
            if(u[s[i]]!=0){
                return false;
            }
        }
        return true;
    }
