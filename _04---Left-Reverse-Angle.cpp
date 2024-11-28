#include <iostream>
using namespace std;

int main()
{
   for (int r = 1; r <= 5; ++r)
   {
      for (int c = 1; c <= 5; ++c)
      {
         if (c >= r) // Adjusted condition for stars and spaces
         {
            cout << "* ";
         }
         else
         {
            cout << "  "; // Two spaces for alignment
         }
      }
      cout << endl;
   }
   return 0;
}



// * * * * *
//   * * * *
//     * * *
//       * *
//         *