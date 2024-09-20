#include<iostream>
using namespace std;
class vella{
    public:
     string mykaam;
     int pika(int max);//delaration

};

int vella:: pika(int max){//definitation
 return max;
}
int main(){
  vella anu;
  anu.mykaam="sona";
  cout<<anu.pika(8);//calling
  return 0;
}



// class Car {
//   public:
//     int speed(int maxSpeed);
// };

// int Car::speed(int maxSpeed)