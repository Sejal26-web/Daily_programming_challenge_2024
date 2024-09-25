#include<iostream>
using namespace std;

// gcd of two numbers
int gcd(int a ,int b){
    while(b!=0){
        int temp = b; 
        b = a % b; 
        a = temp ; 

    }
    return a ; 
}

int lcm ( int n,  int m){
    return (n * m )/ gcd(n,m);
}
int main(){
    int n, m; 
    cout<<" enter the two numbers :";
    cin>> n>> m ; 
    cout<< "lcm of"<< n <<" and"<< m <<" are"<<lcm(n,m);
    cout<<endl;

    return 0 ;
}