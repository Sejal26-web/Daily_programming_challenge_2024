#include<iostream>
using namespace std;

string exxpandaroundcenter(string &s, int left, int right){

    while(left>= 0 && right < s.size() && s[left]== s[right]){
        left--;
        right++;
    }

    return s.substr(left +1, right - left - 1);
}

string longestpalindrome(string s){

    if(s.empty())
    return "";

    string longest = "";
    for(int i=0;i<s.size();i++){

    string evenpalindrome = exxpandaroundcenter(s,i,i+1);
    if(evenpalindrome.size() > longest.size()){

        longest = evenpalindrome;
    }

    string oddpalindrome = exxpandaroundcenter(s,i,i);

    if(oddpalindrome.size()> longest.size()){

        longest = oddpalindrome;
    }
    }
    return longest;

}


int main(){

    string input = "dbababd";
    cout<<" longest palindrome substring is :"<<longestpalindrome(input);

    cout<<endl;


    return 0 ;
}