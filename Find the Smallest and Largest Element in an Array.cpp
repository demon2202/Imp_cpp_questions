#include <iostream> 
using namespace std; 
 
void findMinMax(int arr[], int n) 
{ 
	int mini = arr[0]; 
	int maxi = arr[0]; 

	for (int i = 0; i < n; i++) { 
		if (arr[i] < mini) { 
			mini = arr[i]; 
		} 
		else if (arr[i] > maxi) { 
			maxi = arr[i]; 
		} 
	} 

	cout << "Min: " << mini << endl; 
	cout << "Max: " << maxi << endl; 
} 

int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5 }; 
	int N = sizeof(arr) / sizeof(arr[0]); 

	findMinMax(arr, N); 

	return 0; 
}
