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
    float a = 1;
    float b = 2;
    float i = 1;
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
    float a = 1;
    float b = 2;
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
    cout<<"Bisection Method's solution:"<<endl;
    bool b = bisection_method();
    return 0;
}
