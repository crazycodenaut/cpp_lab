#ifndef __circle_h
#define __circle_h

#include <string>
#include <typeinfo>

/* Prototypes:
 * CBuffer<int, 20> buffer; 
 *    This should create a circular buffer of 20 integers.
 */

template<class T, int N>
class Circle
{
 private:
   int _current_index;
   T _buffer[N];
   
 public:
   Circle() 
     {  }
   ~Circle() 
     {  } 
  
   const int size() const 
   {
	return N;
   }
   
   const char* type_name() const
   {
      // TODO: Demangle the name, then return the const char*
	return typeid(T).name();
   }
   
   /*
    * Iterates over Circular collection (starting at index 0) and "pretty-prints" (subjective judgement) the elements to a string that is returned.
    */
   const char* to_string();
   
   /*
    * Adds new_element to next index in buffer.
    */
   void add(T new_element);
   
   /*
    * Searches buffer for existing_element, if it exists then it will delete it and return true; otherwise return false.
    */
   bool remove_element(T existing_element);
   
   /*
    * If there is an element at index, then delete it from the buffer; otherwise...do nothing.
    */
   void remove_index(int index);
   
};

// implementation of circle buffer template class.
#include "circle.cpp"

 #endif //__circle_h
