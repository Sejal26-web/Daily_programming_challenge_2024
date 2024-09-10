#include <iostream>
#include <vector>
using namespace std;

// Function to find the missing number
int missingNumber(vector<int>& a, int N) {
   int xor1 = 0 ;   // 0(n) : time 
   // 0 ^ 0 = 0
   //1 ^ 0 = 1 
   int xor2 = 0 ; 
   int n = N-1 ; 
   for(int i=0;i<n;i++){
    xor2 = xor2 ^ a[i];
    xor1 = xor1 ^ (i+1);
   }
   xor1 = xor1 ^ N ; 
   return xor1 ^ xor2; 
}

int main() {
    // Example usage: Create a vector with a missing number
    vector<int> a  = {1,3,4,5};
     // Missing number is 
    int N = 5; // The range is from 1 to 6

    // Call the missingnumber function
    int missing = missingNumber(a, N);

    // Print the missing number
    cout << "The missing number is: " << missing << endl;

}