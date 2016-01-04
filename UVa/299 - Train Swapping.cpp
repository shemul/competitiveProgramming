/** Bubble Sort
 *
 *
 *  Increasing Order
 *  Complexity : O(n^2)
 *  With swap checking
 *  Visualize http://visualgo.net/sorting.html
 *  Shemul Hossain
 *
 *
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase ;
    cin >> testcase ;
    for(int p = 1 ; p <= testcase ; p++) {
        int i , j ;
        int n ;
        cin >>n ;
        int arr[n];

        for(i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }

        //this flag will determine is the array already sorted or not
        int flag = false ;
        int swap_cnt = 0 ;
        for(i = 0 ; i < n ; i++) {

            for(j = 0 ; j < n -1 ; j++) {
                // a_size -1 , that needed for to be not exceeded the array boundary
                if(arr[j] > arr[j+1]) {
                    swap(arr[j] , arr[j+1]);
                    flag = true ;
                    swap_cnt= swap_cnt + 1;
                }

            }

            if(flag == false ) {
                // if the inner loop found any swap needed then the flag will be true that means it is not sorted
                break;
            }

        }


        cout <<"Optimal train swapping takes " <<swap_cnt <<" swaps.\n" ;
    }
}
