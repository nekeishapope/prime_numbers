#include<iostream>
#include<bitset>
#define SIZE 1025
using namespace std;
void primeNumber() {
	bitset<SIZE>bsPrime;
	//int arry[SIZE];
	//arry[0] = 0;
	//arry[1] = 0;
	bsPrime.reset(0);
	bsPrime.reset(1);
	for (int i = 0; i < SIZE; i++) {
		bsPrime.set(i);
	}
	
	for (int i = 2; i < SIZE; i++) {
		if (bsPrime.test(i)) {
			for (int j = i * 2; j < SIZE; j += i)
			{
				bsPrime.reset(j);

			}
			cout << i << endl;
		}

	}
	cout << "Enter a number: ";
	int number;
	cin >> number;
	if (bsPrime[number]) {
		cout << number << " is a prime." << endl;
	}
	else {
		cout << number << " is not a prime. " << endl;
	}
	cout << "The prime factors of " << number << " is: " << endl;
	for(int i = 1; i <= sqrt(number); i =i+2) {
		if (number % i == 0)
		{
			cout << i << endl;
			number = number / i;
		}
	}
}

int main() {
	cout << "Prime Numbers betwween 1 and 1024 is: " << endl;
	
	primeNumber();
}