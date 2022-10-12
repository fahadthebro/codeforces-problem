#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,s,e;
    int c,d;
    cin>>a>>b;
    if(a!=b){
    s=a/b;
    c=a/b;
    d=(a/b)+1;
    e=s-c;
    cout<<"floor "<<a<<" / "<<b<<" = "<<c<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<d<<endl;
    if(e<0.5){
     cout<<"round "<<a<<" / "<<b<<" = "<<c<<endl;
}
else if(e>=0.5){
     cout<<"round "<<a<<" / "<<b<<" = "<<d<<endl;
}
    }
    else if(a==b){
    c=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<c<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<c<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<c<<endl;
    }
}
