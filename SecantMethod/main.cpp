#include <iostream>
#include <math.h>

using namespace std;

float f(float x) {
	return pow(x, 3) - 7 * pow(x, 2) + 14 * x - 6;
}
float df(float x) {
	return (f(x - 1) - f(x)) / -1;
}
int main() {
	float p,p0,p1,TOL,N0;
	cin>>p0;
    cin>>p1;
    cin>>TOL;
    cin>>N0;
    int i = 2;
    float q0 = f(p0);
    float q1 = f(p1);
    while(i<=N0){
        p=p1-q1(p1-p0)/(q1-q0);
        if(abs(p-p1)<TOL){
            cout<<p;
            break;
        }
        i=i+1;
        p0=p1;
        q0=q1;
        p1=p;
        q1=f(p);
    }
	return 0;
}
