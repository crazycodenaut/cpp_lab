#include "circle.hpp"

#include <sstream>

template <class T, int N>
std::string Circle<T, N>::to_string() 
{
   using namespace std;
   stringstream string_buffer;
   
   for(int i = 0; i < N; i++)
   {
      if(&_buffer[i] == NULL) continue;
      
      string_buffer << _buffer[i] << endl;
   }
   
   return string_buffer.str();
}

template <class T, int N>
void Circle<T, N>::add(T new_element)
{
   _buffer[_current_index] = new_element;
   _current_index = (_current_index + 1)%N;
}

template <class T, int N>
bool Circle<T, N>::remove_element(T existing_element)
{
   // TODO
}

template <class T, int N>
void Circle<T, N>::remove_index(int index)
{
   _buffer[index%N] = NULL;
}



