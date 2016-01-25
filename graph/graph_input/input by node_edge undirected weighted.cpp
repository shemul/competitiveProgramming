

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int matrix[100][100];

    int node;
    cin >> node ;
    for(int i =0 ; i < node ; i++ ) {
        for(int j = 0 ; j < node ; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i=0;i<node;i++){
       for(int j=0;j<node;j++) {
            cout << matrix[i][j] <<" " ;
       }
       cout <<endl;
    }

    cout << "use (1 1) input to check any connection between then\n";

    int n1 , n2 ;

    cin >> n1 >> n2 ;
    if(matrix[])


    return 0;
}
