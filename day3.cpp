#include<iostream>
#include<vector>
using namespace std;
//brute force: here we will sort the array linearly and the one element index will have same ele : 0( n )  space: 0(n)
//optimum: using totoise method  using slow and fast variable 
int finduplicates(vector<int> &arr){
    int slow = arr[0];
    int fast = arr[0];

    do{
        slow = arr [slow];
        fast = arr[arr[fast]];

    }
    while(slow!=fast);
    slow = arr[0];
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    
            return slow ;

}
int main(){
    vector<int> arr = {3,1,4,4,2};
    int duplicate = finduplicates(arr);
    cout<<" duplicate element present in array is:"<<duplicate;
    cout<<endl;
    return 0;
}