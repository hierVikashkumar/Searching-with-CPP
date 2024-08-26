#include<iostream>
using namespace std;

int main(){
    int n, m, temp;
    cout<<"Enter the number n: ";
    cin>>n;

    cout<<"Enter the number m: ";
    cin>>m;

    temp=n;
    n=m;
    m=temp;
    cout<<"After swping the number we get "<<endl;
    cout<<"the number n became: "<<n<<endl;
    cout<<"the number m became: "<<m;
    
    return 0;
}