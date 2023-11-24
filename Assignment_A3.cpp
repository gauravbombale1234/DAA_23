/*
Implement a problem of smallest number with at
least n trailing zeroes in factorial.
Statement: Given a number n. The task is to find the
smallest number whose factorial contains at least n
trailing zeroes.
Input : n = 1 Output : 5
Input : n = 6 Output : 25
*/

#include <iostream> 
using namespace std; 

int findNum(int n) { 
	int num = 1; 
	int cnt = 0; 
	while (true) { 
		int temp = num; 
		while (temp % 5 == 0) { 
			cnt++; 
			temp /= 5; 
		} 
		if (cnt >= n) { 
			return num; 
		} 
		num++; 
	} 
} 

int main() { 
	int n = 6; 
	cout << findNum(n) << endl; 
	return 0; 
} 
