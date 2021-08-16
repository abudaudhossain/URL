#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
 int a[3],b[3];
 double c[3],d=0;
 for(int i=1;i<3;i++){
    cin>>a[i]>>b[i]>>c[i];
    d+=b[i]*c[i];
 }



 cout<<fixed;
 cout<<setprecision(2);
 cout<<"VALOR A PAGAR: R$ "<<d;

 return 0;
}
