#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//find all permutations for that particuar string
vector<string> uniquepermutation(string s){
    sort(s.begin(), s.end());
    vector<string> result ;
    do{
        result.push_back(s);
    }
    while
        (next_permutation(s.begin(), s.end()));

        return result;
    
    }



int main(){
    string s = "sejdia";

    vector<string> permutations = uniquepermutation(s);
    for(const string & perm : permutations){
        cout<<perm<<endl;
    }

    return 0 ;
}