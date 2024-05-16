#include <iostream>
using namespace std;

class abc{

  mutable int x; // mutable is used for debug purpose only
 // Can be changed in a const function
  int *y;
  const int z;
 public:
//    abc(){
//     x = 0;
//     y = new int(0);
//   }
// //Way to constructor by old Style
//  abc(int _x, int _y, int _z = 0 ){ // Z variable is a default argument
//    x = _x;
//    y = new int(_y);
//    z = _z;
   
//    }

// //Way to constructor by new Style // Initialization list
// can  reinitializing const variables
//  abc(int _x, int _y, int _z = 0 ):x(_x), y(new int(_y)), z(_z){}


   int getX() const{
     x = 10;
     return x;
}
   void setX(int x){
  this->x = x;
}
   int getY() const{

  return *y;
}
   void setY(int val){
  *y = val;
}
   int getZ() const{

  return z;
}
};

void printABC(const abc &a){ // const class
  cout << "okay" <<endl;
  cout << a.getX() << " " << a.getY() << " " <<a.getZ() <<  endl;
}
int main() {

  // abc a;
  // cout << a.getX() << endl;

  // cout << a.getY() << endl;

  abc a(1,2,3);
  cout << "okay " << endl;
  printABC(a);

  return 0;
}
int main2() {
 //  //Creating a constant variable
 //  //Initialization can be done
 //  const int x = 8;
 //  //but reassign cannot be done
 //  //x = 10;
 //  cout << x << endl;

 // // CONST with pointers

 // // 1. CONSTANT content(data) and NON CONSTANT variable
  
 //  // const int *a = new int(10);
 //  int const *a = new int(10);
 // // *a = 10; Cannot be reassigned
 //  cout << *a << endl;
 //  int b = 5;
 //  a = &b;
 //  cout << *a << endl;

  // // 2. CONSTANT pointer and NON CONSTANT content(data)

 //  int *const a = new int(10);
 //  cout << *a << endl;
 //  *a = 20;
 //  cout << *a << endl;
 //  int b = 5;
 // // a = &b; Cannot be done as a is a constant pointer
  

//   // 3. CONSTANT Pointer and CONSTANT content(data)

//   const int*const a = new int(10);
//   cout << *a <<endl;
//  // *a = 20; Cannot be done as a is a constant variable
//   int b = 5;
//   // a = &b; Cannot be done as a is a constant pointer

  


return 0;

}