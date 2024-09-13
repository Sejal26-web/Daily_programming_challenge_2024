#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// leaders : is greatest  element to its right 

vector<int>  leadersinarray(int  a[], int n ){
    vector<int> out; 
    stack<int> s; 
    int max = a[n-1];
    for(int i= n-1;i>=0 ;i--){
        if(a[i] >= max){
            s.push(a[i]);

            max = a[i];

        }
    }
    while(!s.empty()){
        out.push_back(s.top());
        s.pop();
    }
    return out;

}

int main() {
    int a[] = {16, 17, 3, 4, 5, 2};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the array

    vector<int> result = leadersinarray(a, n);

    cout << "Leaders in the array are: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0 ;
}