#include<iostream>
#include<stdlib.h>

using namespace std;

void insertSort(int A[], int n){
    int key;
    for (int j=1;j<n;j++){
        key=A[j];
        int i=j-1;
        while(i>=0 && A[i]<key){
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
}

int main(){
    int A[]={4,6,9,2,56,1};
    int n=6;
    insertSort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}