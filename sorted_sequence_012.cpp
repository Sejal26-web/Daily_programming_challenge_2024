#include<iostream>
#include<vector> 
#include<bits/stdc++.h>
using namespace std;
//use count sort for optimal solution it requires 2 passes that is 0(2n) 
// but we need to optmiize
//main logic 

//0 means : a[low] , a[mid] low++  mid++
//1 means : mid++;
//2 means : a[mid] a[high] high-- mid;

#include<iostream>
#include<vector>
using namespace std;

// Main logic to sort the sequence of 0s, 1s, and 2s
void sortsequence(vector<int>& a) {
    int low = 0;
    int high = a.size() - 1;
    int mid = 0;

    while (mid <= high) {
        switch (a[mid]) {
            case 0:
                swap(a[low++], a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid], a[high--]);
                break;
        }
    }
}

int main() {
    vector<int> a = {0, 1, 2, 1, 0, 1, 1, 2, 0, 1, 0, 1, 2};
    int n = a.size();

    sortsequence(a);

    cout << "Sorted sequence is: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}



