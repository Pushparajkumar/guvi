#include <iostream>
using namespace std;

int main()
{
    int na,nb,nc,max=0;
    cin>>na>>nb>>nc;
    if(na>nb){
        if(na>nc)
            max=na;
        else if(nc>na)
            max=nc;
    }
    else if(nb>na){
        if(nb>nc)
            max=nb;
        else if(nc>nb)
            max=nc;
    }
    cout<<"Max:"<<max;
    return 0;
}
