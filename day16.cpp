#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> primefacors(int n ){
    vector<int> factors; 

    // when factor is odd
    while( n % 2 ==0){
        factors.push_back(2);
        n/=2;
    }

    // when odd factros are : 
    for(int i =3;i * i<=n;i+=2){
        while(n % i==0){
            factors.push_back(i);
            n/=i;
        }
    }

    if(n > 2){
        factors.push_back(n);
    }
    return factors;
}
    

//n is prime greater than 2

int main(){
    int n ; 
    cout<<" enter the integer:";
    cin>> n ; 
    vector<int> factors = primefacors(n);
    cout<<" primefactors of "<< n<<" are :";
    for(int factor : factors){
        cout<<factor<< " ";
    }
    cout<<endl;

    return 0 ;
}
