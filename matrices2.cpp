#include <iostream>
using namespace std;
int main () {
    int orden;
    cout<<"--------------------------------------"<<endl;
    cout<<"Ingrese el orden de la matriz cuadrada: "; cin>>orden;
    int a[orden][orden];
    for (int i = 0; i<orden; i++) {
        for (int j = 0; j<orden; j++) {
            cout << "Ingrese el elemento A[" << i+1 << "][" << j+1 << "]: ";
            cin >> a[i][j];
        }
    }
    cout<<"--------------------------------------"<<endl;
    cout<<"La matriz A de orden "<<orden<<"x"<<orden<<" es: "<<endl;
    for (int i = 0; i<orden; i++) {
        for (int j = 0; j<orden; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------------------------------"<<endl;
    int s = 0;
    for (int i = 0; i < orden; i++) {
        s = s + a[i][orden - 1 - i];
    }
    cout<<"La suma de la diagonal secundaria es: "<<s<<endl;
    cout<<"--------------------------------------"<<endl;
    return 0;
}