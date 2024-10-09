#include <iostream>
using namespace std;

//Base class vehicle
class vehicle{
    public:
       void Vehicle(){
          cout<<"I am a vehicle"<<endl;
       }
};


class TwoWheeler:public vehicle {
    public:
       void twoWheeler(){
          cout<<"I have a Two wheels"<<endl;
       }
};

class bike:public TwoWheeler{
    public:
       void Bike(){
          cout<<"I am a bike"<<endl;
       }
};

int main(){
  //Creat an object of class Bike
      bike myBike;
  // Calling methods of bike.twoWheeler,and vehicle through bike object
    myBike.Bike();
    myBike.twoWheeler();
    myBike.Vehicle();
    
    return 0;
}
