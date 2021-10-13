#include <iostream>
using namespace std; 



int searchInt(int nb,int bignumber,int k){
	int digit;
	while(bignumber>0){
		digit=bignumber%10;
		if(digit==nb){
			return 1;
		}
		bignumber/=10;
	}
	return 0;
}
int TestExistance(int k,int number){
	int searchResult;
			if(k==0){
			searchResult=searchInt(0,number,k);
			if(!searchResult){
				return 0;
			}
		}
			for(int j=0;j<=k;j++){
			//search in number;
			// if yes ; add else ta3mel chay.
			searchResult=searchInt(j,number,k);
			if(!searchResult){
				return 0;
			}
		}

		return 1;
}
int main(){
	int n,k;
	
	cin >> n >>k;
	int number;
	int sum=0;
	for(int i=0;i<n;i++){
		cin >> number;
		sum=sum+TestExistance(k,number);
	}
	cout << sum << endl;
	return 0;
}
