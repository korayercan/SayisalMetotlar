#include <iostream>

using namespace std;

float f(float x){
    return x*x*x-7*x*x+14*x-6;
}
float derivative_f(float x){
    return 3*x*x-14*x+14;
}
bool bisection_method(){
    int maxit = 100;
    int a = 1;
    int b = 2;
    int i = 1;
    float tol = 1E-3;
    float FA = f(a);
    while(i<=maxit){
        float p = (a+b)/2;
        float FP = f(p);
        if(FP==0 || (b-a)/2<tol){
            cout<<p<<endl;
            return true;
        }
        i++;
        if(FA*FP>0){
            a=p;
            FA = FP;
        }
        else b=p;
    }
    cout<<"Method failed after maximum number of iterations, maxit =',maxit"<<endl;
    return false;
}

bool newtonRaphson_method(){
    int maxit = 100;
    int a = 1;
    int b = 2;
    int i = 1;
    float tol = 1E-3;
    while(i<=maxit){
        float p0 = a;
        float p = p0 - f(p0)/ derivative_f(p0);
        if(p-p0<tol && p-p0>-tol){
            cout<<p<<endl;
            return true;
        }
        i++;
        p0=p;
    }
    cout<<"The method failed after maximum number of iterations"<<endl;
    return false;
}

int main()
{
    bool a = newtonRaphson_method();
    bool b = bisection_method();
    return 0;
}
