#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    string s_name;
    double a,b;
    cin >>s_name;
    cin >>a>>b;


    cout<<fixed;
    cout <<setprecision(2);
    cout<<"TOTAL = R$ "<<a+b*0.15<<endl;

    return 0;
}

