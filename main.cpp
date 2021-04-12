#include <iostream>
#include <fstream>
#include <stdexcept>
#include "type.h"
#include "stack.h"
using namespace std;

int main()
{
  Stack<T1> s; //T1 para el stack s
  Stack<T2> t; //T2 para el stack t
  
  try //Se intenta hacer un pop
  {
    auto valor = s.pop();
    cout << "Test " <<endl;
  }
  catch( exception &exception ) //Se atrapa y muestra el valor
  {
    cout << "Error: " << exception.what() << endl;//Mensaje de error.
    //exit(0); //Se acaba la ejecución.
  }

  cout << "El programa sigue vivo ... " <<endl;//Confirmación de que el programa sigue corriendo
  s.push(7);
  T1 var = 6;
  s.push(var+8);
  s.push(move(var));

  t.push(3.5);
  t.push(50.2);
  t.push(78.23);
  t.push(60.8);
  t.push(11.23);

  cout << "Punto 2 ... " <<endl;//Siguiente parte del programa
  s.flush_printing(cout);//Flush Printing del Stack s en consola

  ofstream of("salida.txt");//Archivo "salida.txt"
  t.flush_printing(of);//Flush Printing del Stack t en el archivo "salida.txt"

   return 0;
}
 
