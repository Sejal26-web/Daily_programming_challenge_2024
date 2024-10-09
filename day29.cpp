#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
    #define ff first 
    #define ss  second
    #define setBits(x) builtin_popcount(x)

    const int N = 1e5+2, M0D = 1e9+7;
    //constant table 
    int dp[N];



    int fib(int n){
        
        if(n==0)
        return 0 ;

        if(n==1)
        return 0;

        if(n==2)
        return 1;

        if(dp[n]!=-1)
        return dp[n];

        dp[n]  = fib(n -1 ) + fib(n-2);

        return dp[n];
    }
int  main(){
    int n ; 
    cin>>n;

    rep(i,0,N){
        dp[i] = -1;
    }
    cout<<fib(n)<<endl;
    return 0 ;
}