#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    /*int a,b;
    cin >>a >>b;
    cout <<"PROD = " << a*b<<endl;*/

    double a,b,d,c;
    cin >>a >> b >>d;
    c=(a*2+ b*3+d*5)/(2+3+5);
    cout<<fixed;
    cout << setprecision(1);
    cout <<"MEDIA = " << c<<endl;

    return 0;
}
