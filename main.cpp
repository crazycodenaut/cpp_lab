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
   circle.add(3);
   circle.add(4);
   circle.add(5);
   circle.add(6);
   circle.add(7);
   circle.add(8);
   circle.add(9);
   circle.add(10);
   
   circle.remove_index(4);
   cout << "(2) Circle Contents; " << endl << circle.to_string() << endl;
   
   return 0;
}
