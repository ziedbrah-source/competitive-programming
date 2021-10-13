#include <iostream>
 
using namespace std; 
 
 
int main(){
	long long k;
	long long h;
	long long n;
	cin >> n >> h >> k;
	long long array[n];
	for(long long i=0;i<n;i++){
		cin >> array[i];
	}
	long long sum=0;
	long long secondes=0;
	
	for(long long i=0;i<n;i++){
		if(sum+array[i]>h){ // OUPS lezem nkamel ch3andi bb
			if(sum%k==0){
				secondes+=sum/k;
			}else {
				secondes+= sum/k +1;
			}
			sum=array[i]%k;
			secondes+=array[i]/k;
		}else {
			sum+=array[i]; // emm nejem nzid nesta9bel bb
			secondes+=sum/k;
			sum=sum%k;
		}
	}
	if(sum>0){ 
		secondes++;
	}
	cout << secondes;
 
	return 0;
}
