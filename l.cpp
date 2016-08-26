#include <iostream>

using namespace std;

int main() {
    int n1;
    cin>>n1;
    if(n1%4==0 && n1%100!=0 || n1%400==0)
    cout<<"Leap year";
    else
    cout<<"not leap year";
    return 0;
}
