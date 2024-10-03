#include<iostream>
#include<stack>
#include<sstream>
using namespace std;

int evaluatepostfixexpression(string exp ){
    stack<int> stack ; 

    stringstream ss(exp);
    string token ;

    while(ss >> token ){
        if(isdigit(token[0]) || (token[0]=='-' && token.size() > 1)){
            stack.push(stoi(token));
        }
        else{

            int b = stack.top();
            stack.pop();

            int a = stack.top();
            stack.pop();

            if(token == "+"){
                stack.push(a + b);

            }
            else if (token == "-"){
                stack.push(a - b);
            }
            else if ( token =="*"){
                stack.push(a * b);
            }
            else if ( token == "/"){
                stack.push(a / b );
            }
        }
    }

    return stack.top();
}
int main(){
    string exp = "2 12 + 3 * ";
    int result = evaluatepostfixexpression(exp);

    cout<<" result is :"<<result;
    cout<<endl;
}


