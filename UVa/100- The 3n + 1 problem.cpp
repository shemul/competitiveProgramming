#include<iostream>
#include<stdio.h>
using namespace std;


int tell_me_cycle(int n) {

    int counter = 1 ;
    while ( n != 1 ) {
        if ( n % 2 == 1 ) {
            n = 3 * n + 1;
            n /= 2;
            counter += 2;
        }
        else {
            n /= 2;
            counter++;
        }
    }

    return counter ;

}

int main()
{
    int a , b;

    while(scanf("%d%d" , &a,&b)!=EOF) {
        int temp_A = a ;
        int temp_B = b ;

        if ( a > b ) swap (a, b);

        int max = 0 ;

        int counter ;
       // int cycle_length;
        while ( a <= b ) {

            unsigned int n = a;

            counter = 1 ;
            while ( n != 1 ) {
                if ( n % 2 == 1 ) {
                    n = 3 * n + 1;
                    n /= 2;
                    counter += 2;
                }
                else {
                    n /= 2;
                    counter++;
                }
            }



            if(counter > max) {
                max =counter;
            }
            a++;
        }
        cout << temp_A << " " << temp_B << " "<< max <<"\n" ;

    }

 return 0;
}
