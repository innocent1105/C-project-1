#include <iostream>
using namespace std;
3

double add_numbers(int x,int y){
	int z  = x + y;
	cout<< z;
}

int main(int argc, char** argv) {
	cout<< "Enter any number\n";
	int num_x = 0;
	cin>> num_x;
	
	cout<< "Nice!, enter another number.\n";
	int num_y = 0;
	cin>> num_y;
	
	add_numbers(num_x, num_y);
}
