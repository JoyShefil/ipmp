#include <iostream>

using namespace std;

int main() {
	long num,n1= 0,n2 = 1, n3;
	cin >> num;										

	for(int i = 3; i<= num ; i++ ){
		n3 = n1 + n2;
		
	    n1 = n2;
		n2 = n3;
	}

	cout<< n3;

	return 0;
}
		
