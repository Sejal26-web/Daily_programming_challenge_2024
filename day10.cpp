#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<string>>groupedanagrams(vector<string>&strs){

    //declare a hash map 
    unordered_map<string,vector<string>>anagramgroups;

    //trverse 
    for(string& s: strs){
        //sort 

        string sortedstr = s;
        sort(sortedstr.begin(), sortedstr.end());

        //group all 
        anagramgroups[sortedstr].push_back(s);
    }

        //result 
        vector<vector<string>> result ; 
        for(auto&  group : anagramgroups){
            result.push_back(group.second);

        }
        return result;
    }



int main(){

    vector<string> strs = {"eat", "tea", "tan" , "ate", "nat" , "bat"};
    vector<vector<string>>result = groupedanagrams(strs);

    for(const auto& group : result){
        cout<<"[";
        for(const auto& word : group ){
            cout<<word <<" " ; 
        }
        cout<<"]\n";
    }
    return 0 ;
}