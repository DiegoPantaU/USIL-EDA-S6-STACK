#include <iostream>
#include <fstream>
#include <stdexcept>
#include "type.h"
#include "aritmetica.h"
#include "student.h"
#include "stack.h"
using namespace std;

int f1(int n1)
{ return ++n1; }

int f2(int &n2)
{ return ++n2; }

int main()
{
  int x = 10, y = f1(x); 
  
  cout << "x=" << x << ", y=" << y << endl;
  x = 10; y = f2(x); 
  cout << "x=" << x << ", y=" << y << endl;
  exit(0);

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
  s.push(var);
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

  /*int a=9, b=5;
  Aritmetica obj(a,b);
  cout << "Hello World! ... " << a/b << endl;
  cout << "Suma de: " << a << " y " << b << " es: " << obj.suma() << endl;
  cout << "Resta de: " << a << " y " << b << " es: " << obj.resta() << endl;
  cout << "Mult de: " << a << " y " << b << " es: " << obj.mult() << endl;
  cout << "Division de: " << a << " y " << b << " es: " << obj.division() << endl;

  Student s1("Estefano");

  cout << "Nombre de alumno: " << s1.getName() <<endl;

  s1.setName("Jessie");
  cout << "Nombre de alumno: " << s1.getName() << endl;
  */

   return 0;
}
 