#include <iostream>
#include <string>
#include <vector>

using namespace std; 


int main(){
	int n;
	int k;
	vector <int> g1;
	vector <int> g2;
	vector <int> AB;
	cin >> n;
	cin >> k;
	
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			g1.push_back(i);
		}
				else{
			g2.push_back(i);
		}
	}
	if(k<g1.size()){
		cout << g1.at(k-1);
	}else {
		k-=g1.size();
		cout << g2.at(k-1);
	}
	
	

	return 0;
}

