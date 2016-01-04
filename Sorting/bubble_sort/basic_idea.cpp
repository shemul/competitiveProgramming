/** Bubble Sort
 *
 *
 *  Increasing Order
 *  Complexity : O (n^2)
 *  With swap checking
 *  Visualize http://visualgo.net/sorting.html
 *  Shemul Hossain
 *
 *	related problem : uva 299 ,
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , j ;
    int u_array[10] = {3,2,1,5,4,9,8,7,6,10};
    int sorted_array [10] = {1,2,3,4,5,6,7,8,9,10};
    int a_size = 10 ;

    //this flag will determine is the array already sorted or not
    int flag = false ;

    for(i = 0 ; i < a_size ; i++) {

        for(j = 0 ; j < a_size -1 ; j++) {
            // a_size -1 , that needed for to be not exceeded the array boundary
            if(u_array[j] > u_array[j+1]) {
                swap(u_array[j] , u_array[j+1]);
                flag = true ;
            }

        }

        if(flag == false ) {
            // if the inner loop found any swap needed then the flag will be true that means it is not sorted
            break;
        }

    }


    for(i =0 ; i < a_size ; i++) {
        cout << u_array[i] <<",";

    }

}
