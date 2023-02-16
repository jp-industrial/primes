#include "c:\Users\james\Desktop\std_lib_facilities.h"

int prime_test(int in) {
	vector<int>known_primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	for (int primes : known_primes) {
		if (in < primes && in % primes == 0) //if some prime divides the number perfectly, this number is prime.
			return 0; // returns 0 when number is prime..
	}
	return 1;//and 1 when it isn't.
}
int main()

{
	//program that finds all prime numbers between 1 and 100.
	
	vector <int> found_primes;
	
	for (int in = 0; cin >> in;) {
		prime_test(in);
		if (prime_test(in) == 0)
			cout << in << " is prime.\n";
		else cout << in << " is not prime.\n";
	}
}


	