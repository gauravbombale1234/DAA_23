/*
Implement Subset Sum Problem.
Statement Given a set of non-negative integers and a
value sum, the task is to check if there is a subset of the
given set whose sum is equal to the given sum.
Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: True
Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
Output: False
*/

// A recursive solution for subset sum problem

#include <bits/stdc++.h>
using namespace std;

// Returns true if there is a subset
// of set[] with sum equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
	// Base Cases
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	// If last element is greater than sum,
	// then ignore it
	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum);

	// Else, check if sum can be obtained by any
	// of the following:
	// (a) including the last element
	// (b) excluding the last element
	return isSubsetSum(set, n - 1, sum)
		|| isSubsetSum(set, n - 1, sum - set[n - 1]);
}

// Driver code
int main()
{
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		cout << "Found a subset with given sum";
	else
		cout << "No subset with given sum";
	return 0;
}


