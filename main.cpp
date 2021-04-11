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
  
  try
  {
    auto valor = s.pop();
    cout << "Test " <<endl;
  }
  catch( exception &exception )
  {
    cout << "Error: " << exception.what() << endl;
  }

  cout << "El programa sigue vivo ... " <<endl;
  s.push(7);
  T1 var = 6;
  s.push(move(var));
  s.push(var+8);

  t.push(3.5);
  t.push(50.2);
  t.push(78.23);
  t.push(60.8);
  t.push(11.23);

  cout << "Punto 2 ... " <<endl;
  s.flush_printing(cout);

  ofstream of("salida.txt");
  t.flush_printing(of);

   return 0;
}
 