#include <iostream>
using namespace std;

int main() {    
  //int two_d[5][5];
   int contenu;
   int row;
   int column;
   
   for(int j=0;j<5;j++){
   	for(int i=0;i<5;i++){
   		cin >> contenu;
   		if (contenu == 1) {
   			row=i+1;
   			column=j+1;
   			break;
		   }
	   }
   }
   int count=abs(row-3)+abs(column-3);
   cout << count << endl;
   
   
	



    return 0;
}


