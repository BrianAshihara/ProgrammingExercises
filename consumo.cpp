#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


main(){

  int distTotal;
  double combsGasto;

  cin >> distTotal;
  cin >> combsGasto;

  cout<<fixed<<setprecision(3);


  double consumoMedio;

  consumoMedio = distTotal / combsGasto;

  cout<<consumoMedio<<" km/l"<<endl;

  return 0;
}