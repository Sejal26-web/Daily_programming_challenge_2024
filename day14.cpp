#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int atmostkdistinctchar(string &s, int k ){

    unordered_map<char, int> charcount ;
    int left = 0 ; 
    int right = 0 ; 
    int count = 0 ;

    for(right = 0;right< s.size();right++){

        charcount[s[right]]++;

        while(charcount.size() > k ){
            charcount[s[left]]--;
            if(charcount[s[left]] == 0){

            charcount.erase(s[left]);

            
            }
            left++;


        }
        count += right - left +1;
    }
    return count ; 
}
int substringwithexactkchar(string &s, int k ){

    return atmostkdistinctchar(s,k) - atmostkdistinctchar(s, k-1);
}



int main(){

    string s = "pqpqs";
    int k =2; 
    int result = substringwithexactkchar(s,k);
    cout<<" substring  with exact k char is :"<<result;

    return 0 ;
}