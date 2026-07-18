#include<iostream>
#define nl cout<<endl; 
#define rr s,&i,&top
using namespace std;
// struct arr {int val,x,y,z; };
// int create(

void push(int *s,int *i,int *top,int v){
    s[(*i)]=v;
    (*i)++;
    
}
void pop(int *s,int *i,int *top){
    // s[(*i)]=v;
    (*top)++;
    
}
void peek(int *s,int *i,int *top){
    // s[(*i)]=v;
    // (*i)--;
    cout<<s[(*top)]<<endl;
}
void isEmpty(int *s,int *i,int *top){
    ((*i)==(*top))?cout<<"Empty"<<endl:cout<<"There's data"<<endl;
}
void free(int *s,int *i,int *top){
    (*i)=0;
    (*top)=0;
}
void size(int *s,int *i,int *top){
    cout<<(*i)-(*top)<<endl;
}
    
int main(){
    int s[5];
    
    int i=0,top=0;
    push(rr,0);
    push(rr,1);
    pop(rr);
    peek(rr);
    push(rr,2);
    push(rr,3);

    size(rr);
    cout<<i;nl;
    while(i>0) {i--;cout<<s[i]<<' ';}
}
