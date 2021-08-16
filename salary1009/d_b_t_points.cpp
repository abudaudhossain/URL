#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{

 int d,a[3],b[3];
 for(int i=1;i<3;i++){
    cin>>a[i]>>b[i];

 }
d=sqrt(( pow((a[2]-a[1]),2))+(( pow(b[1]-b[2]),2));


 cout<<fixed;
 cout<<setprecision(2);
 cout<<"VALOR A PAGAR: R$ "<<d;

 return 0;
}
