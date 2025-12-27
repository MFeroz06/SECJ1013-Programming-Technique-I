//MUHAMMAD FAIRUZ BIN HERMAN , A25CS0267, 11-11-2025, SET 3
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Enter an integer number : ";
	cin >> n; //INPUT THE INTEGER
	int product = 1;
	int digit;
	
	
	while (n!=0){ //LOOP FOR PRODUCT DIGIT OF THE INTEGER
		digit = n %10;
		product = product * digit;
		n = n/10;	
	}
	cout << "Product of digits for the integer : "<<product<<endl;
	if (product % 4 == 0){ // DETERMINE MULTIPLIES OF 4
		
		cout << product << " is multiples of 4"<<endl;
	}
	if (product % 5 == 0){ //DETERMINE MULTIPLIES OF 5
		
		cout << product << " is multiples of 5"<< endl;
	}
	if (product % 7 == 0){ // DETERMINE MULTIPLIES OF 7
		
		cout << product << " is multiples of 7 "<< endl;
		
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
}
