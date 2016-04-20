#include <iostream>
using namespace std;

int n, d, w[10], x[10], count=0;

void subset(int cs, int k, int r)
{
    int i;
    x[k] = 1;

    if(cs + w[k] == d)
    {
        cout<< "\n\nSolution " << ++count << " is:";
        for(i=0; i<=k; i++){
        if(x[i] == 1){
            cout << w[i] << " ";
        }
    }
}
    else if(cs + w[k] + w[k+1] <= d)
    {
        subset(cs + w[k], k+1, r - w[k]);
    }


    if(cs + w[k+1] <= d && cs + r - w[k] >= d)
    {
        x[k] = 0;
        subset(cs, k+1, r-w[k]);
    }
}

int main()
{
    int sum=0, i;

    cout << "enter the input elements number "<<"\n";
    cin >> n;

    cout <<"enter " << n << " elements\n";
    for(i=0; i<n; i++)
    {
        cin >> w[i];
    }


    for(i=0; i<n; i++){
        sum =sum + w[i];
    }

    cout << "enter value of sum " <<"\n";
    cin >> d;

    if(sum < d)
    {
        cout<<"INVALID SOLUTION\n";
    }

    else
    {
       subset(0,0,sum);
    }


}
