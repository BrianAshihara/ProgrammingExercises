#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

    double a, b, c, res;

    cin >> a >> b >> c;

    cout<<fixed<<setprecision(1);
    bool triangulo = true;

    if((a + b) == c){
      triangulo = false;
    }else{
      if((a + c) == b){
        triangulo = false;
      }else{
        if((b + c) == a){
            triangulo = false;
        }
      }
    }

    if(triangulo){
      res = a+b+c;
      cout<<"Perimetro = "<<res<<endl;
    }else{
      res = (a+b)*(c)/2;
      cout<<"Area = "<<res<<endl;
    }



    return 0;
}