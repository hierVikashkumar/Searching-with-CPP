#include<iostream>
using namespace std;
int main(){
    // int arr [9] = {1,2,4,5,9,15,18,21,24};
    // // total element of n
    // int n = 9;
    // // target the element x element se bada element kon hi
    // int x = 12;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>x){
    //         cout<<arr[i];
    //         break;
    //     }
    // }

    /////////////////////////////////////////////////////////////////////

    //2nd method

    int arr [9] = {1,2,4,5,9,15,18,21,24};
    // total element of n
    int n = 9;
    // target the element x find the low & high value
    int x = 12;

    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while (lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid-1;
    }
    if(flag==false) cout<<arr[lo]; // it's lower bound me hi or upper bound me lo put karna padta hi
    
}