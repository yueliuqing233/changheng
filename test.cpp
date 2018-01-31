#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
void quicksort(int arr[],int L,int R){
    int i = L;
    int j = R;
    int pivot = arr[(i+j)/2];
    
    while(i<=j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]<pivot){
            j--;
        }
        if(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if(L<j){
        quicksort(arr,L,j);
    }
    if(i<R){
        quicksort(arr,i,R);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
