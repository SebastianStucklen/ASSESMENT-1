#include<iostream>
using namespace std;


int main() {
	// MILD
	cout << "MILD: FOR LOOPS";
	cout << endl;
	cout << endl;

	// Write a C++ for loop that prints out the numbers 50-70 counting by 2s
	cout << "Write a C++ for loop that prints out the numbers 50-70 counting by 2s";
	cout << endl;
	for (int a = 50; a <= 71; a += 2)
		cout << a << "    ";
	cout << endl;
	cout << endl;

	// Write a C++ for loop that prints out the numbers from 100 down to 50 counting down by 5s
	cout << "Write a C++ for loop that prints out the numbers from 100 down to 50 counting down by 5s";
	cout << endl;
	for (int b = 100; b >= 49; b -= 5)
		cout << b << "     ";
	cout << endl;
	cout << endl;

	// Write a C++ for loop that prints out the numbers from 2 to 2048 multiplying by 2s
	cout << "Write a C++ for loop that prints out the numbers from 2 to 2048 multiplying by 2s";
	cout << endl;
	for (int c = 2; c <= 2049; c *= 2)
		cout << c << "     ";
	cout << endl;
	cout << endl;
	cout << endl;
	
	// MEDIUM: NESTED LOOPS
	cout << "MEDIUM: NESTED LOOPS";
	cout << endl;
	cout << endl;

	// Write a nested loop that prints out a 6x10 box of stars.
	cout << "Write a nested loop that prints out a 6x10 box of stars. I am assuming it is width x height";
	cout << endl;
	for (int d = 10; d >= 1; d -= 1) {
		for (int e = 6; e >= 1; e -= 1) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	// Write a nested loop that prints out the numbers "1, 2, 3, 4"  five times by printing out variables of the loop.
	cout << "Write a nested loop that prints out the numbers '1, 2, 3, 4'  five times by printing out variables of the loop.";
	cout << endl;
	for (int f = 5; f >= 1; f -= 1) {
		for (int g = 1; g <= 4; g += 1){
			cout << g;
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "the end :)";

}