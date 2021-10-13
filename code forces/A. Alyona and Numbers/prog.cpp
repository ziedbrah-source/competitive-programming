#include <iostream>

using namespace std; 


int main(){
	long long n;
	long long m;
	long long arrayOne[5]={0,0,0,0,0};
	int arrayTwo[5]={0,0,0,0,0};
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		arrayOne[i%5]++;
	}
	for(int i=1;i<=m;i++){
		arrayTwo[i%5]++;
	}
	
	cout << arrayOne[1]*arrayTwo[4]+arrayOne[2]*arrayTwo[3]+arrayOne[3]*arrayTwo[2]+arrayOne[4]*arrayTwo[1]+arrayOne[0]*arrayTwo[0] << endl; 

	
	

	return 0;
}

