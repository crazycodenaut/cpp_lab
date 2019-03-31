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
   cout << "Circle Contents: " << circle.to_string() << endl;
   
   
   return 0;
}
