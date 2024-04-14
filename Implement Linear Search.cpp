// C++ Program to implement Linear Sort 
#include <iostream> 
using namespace std; 
  
int search(int arr[], int N, int x) 
{ 
    int i; 
    for (i = 0; i < N; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main() 
{ 
    int arr[] = { 5, 4, 1, 6, 10, 9, 23, 2 }; 
    int x = 9; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    int result = search(arr, N, x); 
  
    if (result == -1) 
        cout << "Element is not present in array"; 
    else
        cout << "Element is present at index " << result; 
    return 0; 
}
