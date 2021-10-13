#include <iostream>
#include <algorithm>
using namespace std;

int main() {    
   string one;
   string two;
   cin >> one;
   cin >> two ;
   for(int i=0;i<one.length();i++){
 	if(toupper(one[i])>toupper(two[i])){
   	cout << 1;
   	return 0;
   }else if (toupper(one[i]) <toupper(two[i])){
   	cout << -1;
   	return 0;
   }

   }
   
   cout << 0;
   

   
    return 0;
}


