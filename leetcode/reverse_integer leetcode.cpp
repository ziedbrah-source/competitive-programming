 int reverse(int x) {
        // We HAVE THE MAX int goes from "-2^31, and 2^31-1"
        int reminder;
        int rev=0;
        while(x!=0){
            reminder=x%10;
            x=x/10;
            if(rev > INT_MAX/10 || rev==INT_MAX/10 && reminder>7){
                return 0;
            }
            if(rev < INT_MIN/10 || rev==INT_MIN/10 && reminder < -8){
                return 0;
            }
            
            
            
            
            rev=rev*10+reminder;
        }
        return rev;
    }
