/*
Implement a problem of move all zeroes to end of
array.
Statement: Given an array of random numbers, Push all the zero’s
of a given array to the end of the array. For example, if the given
arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9,
8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be
same.
Input : arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0, 0};

*/

#include <algorithm> 
#include <iostream> 
#include <vector> 

void push_zeros_to_end(std::vector<int>& arr) 
{ 
std::stable_partition(arr.begin(), 
			arr.end(), 
			[](int n) { return n != 0; }); 
} 

int main() 
{ 
std::vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9}; 
	
push_zeros_to_end(arr); 
	
for(const auto& i : arr) 
	std::cout << i << ' '; 

std::cout << "\n"; 

return 0; 
} 

