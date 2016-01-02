#include "bits/stdc++.h"
using namespace std;
int main()
{

    int positive_number =  -4 ;
    int binary[100];
    int i = 0 ;
    while(positive_number > 0) {
        binary[i] = positive_number%2 ;
        positive_number = positive_number/2 ;
        i++;
    }

    for(int j =i-1  ; j >= 0 ; j--) {
        cout << binary[j];
    }

    return 0;
}
