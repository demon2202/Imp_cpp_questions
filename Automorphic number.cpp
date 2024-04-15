//Explanation : Number = 5
//Square of number = 25
//as the square of the number ends with the number itself, It's an Automorphic number.

#include <iostream>
using namespace std;

int isAutomorphic(int n){
    
    int square = n * n;
    
    while(n != 0)
    {
        
        if(n % 10 != square % 10){
            return 0;
        }
        
       
        n /= 10;
        square /= 10;
    }

    return 1;
}

int main ()
{
    int n = 376, sq = n * n ;
    
    if(isAutomorphic(n))
        cout << "Num: "<< n << ", Square: " << sq << " - is Automorphic";
    else
        cout << "Num: "<< n << ", Square: " << sq << " - is not Automorphic";
    

}
