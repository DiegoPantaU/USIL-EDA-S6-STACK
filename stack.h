#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>
#include <vector>
using namespace std;

// Created by Angel Mejia
template <typename T>
class Stack
{
private:
  size_t m_top;
  vector<T> m_stack;    //2

public:
  // Constructor
  Stack() : m_top(0)  {  }
  // Destructor
  ~Stack() {   } 
  // Returns the number of elements
  size_t size() { return m_top;  }

  // Insert a new item to my stack
  
  //Se usa el && para hacer referencia a un valor temporal - Luis Mendoza

  void push(T &&elem);
  // Remove and return the item on the top
  T pop();

  void flush_printing(ostream &os);
};

template <typename T>
void Stack<T>::push(T &&elem)
{
  m_stack.insert(m_stack.end(), elem);
  m_top++; 
}

template <typename T>
T Stack<T>::pop()
{
  if(m_top>0)
    return m_stack[--m_top];
  throw out_of_range("This stack is empty."); 
}

template <typename T>
void Stack<T>::flush_printing(ostream &os)
{
  while( size() > 0) // Tiene elementos?
  {
    auto v = pop();
    os << v <<endl;
  }
}

#endif

// Pendiente subir  