#include <iostream>

using namespace std;

float f(float x){
    return x*x*x-7*x*x+14*x-6;
}

int main()
{
    float p0;
    cin>>p0;
    int maxit = 100;
    float tol = 1E-3;
    int i = 1;
    while(i<=maxit){
        float p = f(p0);
        if(abs(p-p0)<tol){
            cout<<p<<endl;
            break;
        }
        i=i+1;
        p0=p;
    }

    return 0;
}
