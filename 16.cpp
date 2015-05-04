#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
  string linea;
  double ciudad;
  string ciudadString;
  double calle;
  string calleString;
  double precio;
  string priceString;
  double promedio_C = 0.0;
  double promedio_H = 0.0;
  double promedio_P = 0.0;
  int contador = 0;
  double MPG_C = 0.0;
  double MPG_H = 0.0;
  double P = 0.0;
  
  ifstream myfile;
  myfile.open ("93cars.dat.txt");
  if (myfile.good() == true){
    while (getline (myfile, linea)){
      if ((contador % 2) == 0){
        ciudadString = linea.substr (52,3);
        ciudad = stod (ciudadString);
        MPG_C += ciudad;
        calleString = line.substr (55,3);
        calle = stod (calleString);
        MPG_H += calle;
        priceString = line.substr (42,3);
        precio = stod (priceString);
        P += precio;
      }
      contador ++;
      promedio_C = MPG_C / (contador / 2);
      promedio_H = MPG_H / (contador / 2);
      promedio_P = P / (contador / 2);
     }
  }
  cout << "El promedio de MPG en la ciudad es de " << promedio_C << endl;
  cout << "El promedio de MPG in la calle es de  " << promedio_H << endl;
  cout << "El promedio de rango de precio medio es de " << promedio_P << endl;
return 0;}
