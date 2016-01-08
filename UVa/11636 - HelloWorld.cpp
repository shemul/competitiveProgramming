#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main() {
	int n; int count = 1 ;
	while(cin>>n) {
        if(n < 0) {
            break;
        }
        cout << "Case " << count <<": " <<ceil( log(n) / log(2)) << "\n";
        count++;
	}
	return 0;
}
