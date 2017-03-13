#include<iostream>
using namespace std;

int calculate_print(int number){
	if(number%2 == 1){
		number = 3*number+1;
	}else{
		number = number/2;
	}
	cout << " "  << number;
	return number;
}

int main(){
	int number, i;
	cin >> number;
	cout << number;
	for(i=0; number!=1; i++){
		number = calculate_print(number);
	}
	cout << endl;
	return 0;
}
