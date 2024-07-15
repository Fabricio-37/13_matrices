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
    for (int i = 0; i<orden; i++) {
        for (int j = i + 1; j<orden; j++) {
            s = s + a[i][j];
        }
    }
    cout<<"La suma de los elementos por encima de la diagonal principal es: "<<s<<endl;
    cout<<"--------------------------------------"<<endl;
    return 0;
}