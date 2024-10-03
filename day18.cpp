#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;    
int countdivisors(int n ){
    int count = 0;

    for(int i =1;i<sqrt(n);i++){

        if(n % i ==0){
            if(i==n /i){
                count++;
            }
            else{
                count+=2;
            }

        }


    }
    return count ; 
}


int main(){
    int n = 12 ; 
    cout<<" total number of divisor of "<< n   << "are:   "<<countdivisors(n);
    cout<<endl;

    return 0 ;
}