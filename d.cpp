#include <iostream>
using namespace std;

int main()
{
    int a,i,fact=1;
    cin>>a;
    for(i=1;i<=a;i++){
        fact = fact*i;
    }
    cout<<"Factorial of "<<a<<" :"<<fact;
    return 0;
}
