#include <iostream>
#include <math.h>
#include <windows.h>
#include <fstream>
using namespace std;

int main()
{
    int X[10000], Y[10000], P[10000], i, n, c;
    cin>>n;
    ifstream cin ("pie.txt");
    for (i=1;i<=n;i++){
        cin>>P[i]>>X[i]>>Y[i];
    }
    ofstream cout ("Result.txt");
    for (i=1;i<=n;i++){
        if (P[i]>=0 && P[i]<=12){
            cout<<"white"<<endl;
        }
        else if (P[i]>12){
            X[i] = X[i]-50;
            Y[i] = Y[i]-50;
            c=sqrt(pow(X[i],2)+pow(Y[i],2));
            if (c>50){
                cout<<"white"<<endl;
            }
            else{
                cout<<"black"<<endl;
            }
        }
    }
    system("PAUSE");
}
