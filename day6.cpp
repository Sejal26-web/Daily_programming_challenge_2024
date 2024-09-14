#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std; 

vector<pair<int, int>>findzerosumsubarrays(int arr[], int n ){
    vector<pair<int, int>>result; 
    unordered_map<int,vector<int>>summap;
    int sum = 0 ;

    for(int i =0;i<n;++i){
    //add sum value to array 
    sum+= arr[i]; 
    if(sum ==0){
        result.push_back({i,0});
    }

    if(summap.find(sum)!=summap.end()){
        for(int idx : summap[sum]){
            result.push_back({idx + 1,i});
        }
    }
    summap[sum].push_back(i);
}
return  result; 
}
int main(){
    int arr[] ={1,-1, 3,-2,2, -3, 3};
    int n =sizeof(arr)/sizeof(arr[0]);

    vector<pair<int, int>> subarrays = findzerosumsubarrays(arr, n );
    for(auto & subarray: subarrays){
        cout<<"subarray from index :"<<subarray.first<<" to "<<subarray.second<<endl;
    } 
    return 0 ;
}