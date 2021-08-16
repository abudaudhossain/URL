#include<iostream>
using namespace std;

int main()
{
    int amount,h,f,t,tn,fv,tw;
    cin >>amount;
    cout <<amount<<endl;
    h=amount/100;
    amount=amount%100;

    f=amount/50;
    amount=amount%50;

    t=amount/20;
    amount=amount%20;

    tn=amount/10;
    amount=amount%10;

    fv=amount/5;
    amount=amount%5;

    tw=amount/2;
    amount=amount%2;

    cout <<h <<" nota(s) de R$ 100,00"<<endl;
    cout <<f <<" nota(s) de R$ 50,00"<<endl;
    cout  << t<<" nota(s) de R$ 20,00"<<endl;
    cout << tn<<" nota(s) de R$ 10,00"<<endl;
    cout <<fv <<" nota(s) de R$ 5,00"<<endl;
    cout << tw<<" nota(s) de R$ 2,00"<<endl;
    cout << amount<<" nota(s) de R$ 1,00"<<endl;

    return 0;

}
