// C++ Program to toggle string 
#include <cstring> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	string str = "Hello_guys_this_is_harshit"; 

	for (int i = 0; str[i] != '\0'; i++) { 
		if (islower(str[i])) { 
			str[i] = toupper(str[i]); 
		} 
		else if (isupper(str[i])) { 
			str[i] = tolower(str[i]); 
		} 
	} 

	cout << "Toggled string: " << str << endl; 

	return 0; 
}
