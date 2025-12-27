#include <iostream>
using namespace std;
int average(int [], int);
double average(double [],int);

int main(){
	int aver;
	double aver1;
	const int SIZE=6;
	int array[SIZE]={1,2,3,4,5,6};
	double array2[SIZE]={6.0,4.4,1.9,2.9,3.4,3.5};
	aver=average(array,SIZE);
	cout <<aver<<endl;
	aver1=average(array2,SIZE);
	cout << aver1;
	
}
int average(int array[],int SIZE){
	int sum=0;
	int result;
	for (int i=0; i<SIZE ; i++){
		sum=sum+array[i];
	}
	result=sum/6;
	return result;
}
double average(double array[],int SIZE){
	double sum=0;
	double result;
	for (int i=0; i<SIZE; i++){
		sum=sum+array[i];
	}
	result=sum/6.0;
	return result;
}

	
	
