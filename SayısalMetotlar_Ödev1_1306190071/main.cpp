#include <iostream>
#include <math.h>

using namespace std;

float f(float x){
    return 5*sin(2*x)-8*cos(5*x);
}
float derivative_f(float x){
    return 10*(cos(2*x)+4*sin(5*x));
}
bool bisection_method(){
    int maxit = 100;
    float a = 0;
    float b = 1;
    float i = 1;
    float tol = 1E-3;
    float FA = f(a);
    while(i<=maxit){
        float p = (a+b)/2;
        float FP = f(p);
        if(FP==0 || (a-b)/2<tol){
            cout<<p<<endl;
            return true;
        }
        i++;
        cout<<FA<<" "<<FP<<endl;
        if(FA*FP>0){
            a=p;
            FA = FP;
        }
        else{
            b=p;
        }
    }
    cout<<"Method failed after maximum number of iterations, maxit =',maxit"<<endl;
    return false;
}

bool newtonRaphson_method(){
    int maxit = 100;
    float a = 0.5;
    float i = 1;
    float tol = 1E-3;
    float p0 = a;
    while(i<=maxit){
        float p = p0 - f(p0)/ derivative_f(p0);
        if(abs(p-p0)<tol){
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
    cout<<"Newton-Raphson Method's solution:"<<endl;
    bool a = newtonRaphson_method();
    //cout<<"Bisection Method's solution:"<<endl;
    //bool b = bisection_method();
    return 0;
}
