#include <iostream>

#include "circle.hpp"

int main(int argc, char *arv[])
{
   using namespace std;
   
   /* Prototype Testing */
   Circle<int, 10> circle;

   cout << "Circle Size: " << circle.size() << endl;
   cout << "Circle Type: " << circle.type_name() << endl;

   //
   // 
   
   cout << "(1) Circle Contents: " << endl << circle.to_string() << endl;
   circle.add(309);
   circle.add(42);
   circle.add(1);
   circle.add(2);
   circle.add(3); // index 4
   circle.add(4);
   circle.add(5); // element 5
   circle.add(6);
   circle.add(7);
   circle.add(777); // element 9 (last index)
   circle.add(9); // circles, index 0
   circle.add(10); // index 1
   
   circle.remove_index(4);
   circle.remove_element(5);
      
   cout << "(2) Circle Contents; " << endl << circle.to_string() << endl;

   Circle<int*, 3> ptr_circle;
   
   int* a = new int(10);
   int* b = new int(11);
   int* c = new int(12);
   
   ptr_circle.add(a);
   ptr_circle.add(b);
   ptr_circle.add(c);
   
   ptr_circle.remove_element(c);
   
   cout << "(3) Circle Contents: " << endl << ptr_circle.to_string() << endl;
   
   return 0;
}
