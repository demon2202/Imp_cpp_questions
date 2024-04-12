// C++ Program to Find the Nth Term of the Fibonacci Series 
#include <iostream> 
using namespace std; 

int fib(int n) 
{ 
	int first = 0, second = 1, ans; 
	if (n == 0) 
		return first; 

	for (int i = 2; i <= n; i++) { 
		ans = first + second; 
		first = second; 
		second = ans; 
	} 

	return ans; 
} 

int main() 
{ 
	int n = 13; 

	cout << fib(n); 
	return 0; 
}
