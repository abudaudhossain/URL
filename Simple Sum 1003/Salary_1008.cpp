#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    double c;

    cin >>a>>b;
    cin >>c;
    cout <<"NUMBER = "<<a<<endl;
    cout <<fixed;
    cout <<setprecision(2);
    cout <<"SALARY = U$ "<<b*c<<endl;


    return 0;
}
