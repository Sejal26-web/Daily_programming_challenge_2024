#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

    void swapifgreater(long long arr1[], long long arr2[], int ind1, int ind2){
        if(arr1[ind1] > arr2[ind2]){
            swap(arr1[ind1], arr2[ind2]);
        }
    }

    void merge(long long  arr1[], long  long  arr2[], int n, int m){
        int len = n+ m; 
        int gap = (len/2) + (len%2);
        while(gap>0){
            int left = 0 ; 
            int right=  left + gap ; 
            while(right < len){
                if(left<= n && right>= n){
                    swapifgreater(arr1, arr2 , left, right -n);
                }
                else if (left>=n){
                    swapifgreater(arr2, arr2, left, right -n);
                }
                else{
                    swapifgreater(arr1, arr1 , left, right );

                }
                left++; 
                right++;
            }
            if(gap== 1)
                break ;
                gap =(gap/2) + (gap % 2);
            
        }
    }
int main(){
       long
     long arr1[] = {1, 4, 7, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, arr2, n, m);

    cout << "Merged arrays are:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    for(int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
