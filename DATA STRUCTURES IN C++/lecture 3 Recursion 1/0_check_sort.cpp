#include<iostream>
using namespace std;

bool is_sorted(int arr[] , int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool small_is_sorted = is_sorted(arr+1 ,--size);
    return small_is_sorted;
}


int main(){
    int n;
    cin >> n;
    int *arr=new int[n];
    for( int i =0 ;i<n;i++){
        cin >> arr[i];
    }
    bool sort=is_sorted(arr,n);
    cout << sort ;

}