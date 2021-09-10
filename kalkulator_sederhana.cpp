#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,c;
    char b;
    cout<<"masukkan peritah: \n";
    cin>>a>>b>>c;
    if (b=='+')
    {
        cout<<"hasil anda adalah: ";
        cout<<a+c;
    }
    else if (b=='-')
    {
        cout<<"hasil anda adalah: ";
        cout<<a-c;
    }
    else if (b=='*')
    {
        cout<<"hasil anda adalah: ";
        cout<<a*c;
    }
    else if (b=='/')
    {
        cout<<"hasil anda adalah: ";
        cout<<a/c;
    }
    else if (b=='^')
    {
        cout<<"hasil anda adalah: ";
        cout<<pow(a,c);
    }
    else
    {
        cout<<"PERINTAH SALAH\n";
        cout<<"gunakan perintah: +,-,*,/,^ \n";
    }
    return 0;
}//karya :hq_lco