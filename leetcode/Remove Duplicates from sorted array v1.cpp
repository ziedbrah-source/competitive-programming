
#include <iostream>

using namespace std; 
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int max=2147483647;
        int j;
        int i=0;
        int length=nums.size();
        while(i<nums.size()){
            int j;
            for(j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    nums[j]=max;
                    length--;
                }else {
                    break;
                }
            }
            i=j;
        }
        sort(nums.begin(),nums.end());
        return length;
    }
    
    int main(){
	// bla bla , initiate a vector, target and test.
	return 0;
}
