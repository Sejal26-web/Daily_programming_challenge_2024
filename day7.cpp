#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rainwater(vector<int>&a){
    int n = a.size();
    vector<int>left(n), right(n);
    left[0] = a[0];
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1], a[i]);
    }
    right[n-1] = a[n-1];
    for(int i=n-2; i>=0;i--){
        right[i]= max(right[i+1],a[i]);

    }
    int ans = 0; 
    for(int i=1;i<n;i++){
        ans+= (min(left[i], right[i])-a[i]);
    }
    return ans ; 
}
int main(){
    vector<int>a ={4,2,0,3,2,5};
    int n = a.size();
    cout<<" rainwater whic will be trapped between bars:"<<rainwater(a);
    cout<<endl;
    return 0 ;
}