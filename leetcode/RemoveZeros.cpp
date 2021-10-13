
#include <iostream>
#include <vector>
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
       // int zeroOccurences=count(nums.begin(),nums.end(),0);
        int i=-1;
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                nums[++i]=nums[j];
            }
        }
        
        for(int j=i+1;j<n;j++){
            nums[j]=0;
        }
    }
using namespace std;
    
    int main(){
	// bla bla , initiate a vector,....
	return 0;
}
