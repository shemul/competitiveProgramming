#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i , j ;
    int a_size  ;
    while(cin >>a_size) {
        int arr[a_size];
        for(i=0 ; i < a_size ; i++) {
            cin>> arr[i];
        }

        bool flag = false ;
        int swap_count =0 ;
        for(i = 0 ; i < a_size ; i++) {

            for(j=0 ; j < a_size-1; j++) {
                if(arr[j] > arr[j+1]) {
                    swap(arr[j] , arr[j+1]);
                    flag = true ;
                    swap_count = swap_count +1;
                }
            }

            if(flag==false) {
                break;
            }
        }

        cout << "Minimum exchange operations : " << swap_count <<"\n";

    }
}
