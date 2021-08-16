#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
 double r;
 cin>>r;
 cout<<fixed;
 cout<<setprecision(2);
 cout<<"VALOR A PAGAR: R$ "<<(4.0/3)*3.14159*(pow(r,3))<<endl;

 return 0;
}
