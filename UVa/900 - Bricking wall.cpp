#include<bits/stdc++.h>
using namespace std;


int fib(int n)
{
    if(n == 1) return 1;
    if(n == 2) return 1;

    return fib(n-1) + fib(n-2);
}



int main(){

    int n ;
    while(cin >> n) {

        if (n==0) {
            break;
        }

        cout <<fib(n+1) <<"\n";
    }
}
