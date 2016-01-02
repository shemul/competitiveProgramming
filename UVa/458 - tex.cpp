#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

    char c;
    bool ax=1;

    while(scanf("%c",&c)!=EOF){
        if(c=='"'){
            if(ax) {
              printf("``");
            } else {
                printf("''");
            }
            if(ax) {
                ax = 0 ;
            } else {
                ax = 1;
            }
        }else {
            printf("%c",c);
        }
    }

    return 0;
}
