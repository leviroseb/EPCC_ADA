#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int maxProduct(int A[],int n){
    for (int i=1;i<n-1;i++){
        if(A[i]>=A[i+1]){
            swap(A[i],A[i+1]);
        }
        if(A[i]<=A[i-1]){
            swap(A[i],A[i-1]);
        }
    }

    return A[n-1]*A[n-2];
}


int main(){
    int n,A[100],producto;
    cout<<"Tamaño del arreglo: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"Añadir: ";
        cin>>A[i];
    }

    producto=maxProduct(A,n);
    

    cout<<"Producto máximo: "<<producto;
    return 0;

}