#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"--------------------------------------"<<endl;
    cout<<"Ingrese un numero: "; cin>>n;
    int a[n][3*n];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<3*n; j++) {
            if (i == 0) {
                a[i][j] = 1;
            }
            else if (i != 0 & i != n-1 & j != (3*n)-1) {
                if (j == 0) {
                    a[i][j] = 1;
                }
                else {
                    a[i][j] = 0;
                }
            }
            else if (j == (3*n)-1 & i!= n-1) {
                a[i][j] = 1;
            }
            else if (i == n-1) {
                a[i][j] = 1;
            }
        }
    }
    cout<<"--------------------------------------"<<endl;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<3*n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------------------------------"<<endl;
}