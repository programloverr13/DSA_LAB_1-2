#include<iostream>
#define nl cout<<endl; 
// #define rr s,&i,&top
using namespace std;

int main(){
    int a[]={2,3,8,9,15,18,38,47,58,60};
    int l=0,r=sizeof(a)/4;
    int m=(l+r)/2;
    int num;cin>>num;
    while(l<r){
        if(a[m]==num){break;}
        else if(a[m]>num){r=m;}
        else if(a[m]<num){l=m;}
        m=(l+r)/2;
    }
    cout<<m;
}