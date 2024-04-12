// C++ program to check if a 
// number is Palindrome or not 
#include <iostream> 
using namespace std; 

// Function to check Palindrome 
bool checkPalindrome(int n) 
{ 
	int ans = 0; 
	int temp = n; 
	while (temp != 0) { 
		ans = (ans * 10) + (temp % 10); 
		temp = temp / 10; 
	} 

	return (ans == n); 
} 

int main() 
{ 
	int n = 12321; 

	if (checkPalindrome(n) == 1) { 
		cout << "Yes\n"; 
	} 
	else { 
		cout << "No\n"; 
	} 

	return 0; 
}
