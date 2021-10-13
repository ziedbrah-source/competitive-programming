#include <iostream>
    
#include <algorithm>
using namespace std;

int main() {    
    int n;
    cin >> n;
    string count;
    cin >> count;
    int A=0;
    int D=0;
    for (int i = 0; i < count.size(); i++)
    {
    	if (count[i] == 'A') A++;
    	else D++;
	}
if(A==D){
	cout << "Friendship";
}else if (A>D){
	cout << "Anton";
}else {
	cout << "Danik";
}

	



    return 0;
}


