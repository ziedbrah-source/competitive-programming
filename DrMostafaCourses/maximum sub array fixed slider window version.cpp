#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	
	vector <int> input;
	int indices[2];
	int n;
	int in;
	int k;
	cin >> n;
	cin >> k;
	for(int i=0;i<n;i++){
		cin >> in;
		input.push_back(in);
	}
	int max=0;
	for(int i=0;i<k;i++){
		max+=input[i];
	}
	int sum=max;
	indices[0]=0;
	indices[1]=k-1;
	// we assume that we have k or more items
	for(int i=k;i<n;i++){
		sum=sum-input[i-k]+input[i]; // the item before i-k+1 and we add the i th item 
		if(sum>max){
			indices[0]=i-k+1;
			indices[1]=i;
			max=sum;
		}
	}
	
	cout << indices[0] << " " << indices[1] << "avec " << max << endl;
    return 0;
}


