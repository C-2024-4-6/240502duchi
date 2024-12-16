#include <iostream>

using namespace std;

class Cuboid {
public:
    
    double length;
    double width;
    double height;

    
    Cuboid() : length(0), width(0), height(0) {}

   
    void input() {
        cout << "Enter length, width, and height for Cuboid: ";
        cin >> length >> width >> height;
    }

   
    double calculateVolume() const {
        return length * width * height;
    }

    
    void displayVolume() const {
        cout << "Volume of the cuboid is: " << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboids[3]; 

    
    for (int i = 0; i < 3; ++i) {
        cout << "For Cuboid " << (i + 1) << ":" << endl;
        cuboids[i].input(); 
        cuboids[i].displayVolume(); 
    }

    return 0;
}
