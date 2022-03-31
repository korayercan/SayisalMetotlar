#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

#define  f(x)  pow(x,3)-7*pow(x,2)+14*x-6

int main() {
    float q,p,p0,p1,TOL,N0;
    int i = 2;
    q0=f(p0);
    q1=f(p1);
    while(i<=N0){
        p=p1-q(p1-p0)/(q1-q0);
        if(abs(p-p1)<TOL){
            cout<<p;
            break;
        }
        i=i+1;
        q=f(p);
        if(q*q1<0){
            p0=p1;
            q0=q1;
        }
        p1=p;
        q1=q;
    }
    return 0;
}
