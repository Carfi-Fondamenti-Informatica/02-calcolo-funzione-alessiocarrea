#include <iostream>
using namespace std;

int main() {
   float a, b, x, y, z;
   cin >> a >> b >> x >> y;
   if(x<0 && y>0){
      z=(a*x)-(b*y);
   } else if (x>=0 && y<=0){
      z=(a*x^2)-(b*y);
   } else {
      z=(a*x)-(b*y^2);
   }  
   cout << z << endl;
   return 0;
}
