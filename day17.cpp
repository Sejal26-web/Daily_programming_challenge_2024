#include<bits/stdc++.h>
using namespace std;

int lengthoflongestsubstring(string s ){
    unordered_set<char> charset ;
    int left = 0 ; 
    int maxlength = 0; 
    for(int right = 0;right<s.length();++right){

        while(charset.find(s[right])!=charset.end()){

            charset.erase(s[left]);
            ++left;

        }
        charset.insert(s[right]);
        maxlength = max(maxlength, right - left +1);
    }
    return maxlength;

}


int main(){

    string s  ="ababbccaaabbc";
    cout<<" longest substring with no repeating words in it :"<<lengthoflongestsubstring(s);
    cout<<endl;
    return  0 ;
}