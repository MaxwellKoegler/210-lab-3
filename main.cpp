// COMSC-210 | Lab 3 | Maxwell Koegler
#include <iostream>
#include <string>

using namespace std;

struct Restaurant {
    int rating;
    string address;
    string cuisine;
    bool openStatus;
    double waitTime;
};

Restaurant populate();

int main() {
    Restaurant r1 = populate();

    cout << r1.rating << endl;
    cout << r1.address << endl;
    cout << r1.cuisine << endl;
    cout << r1.openStatus << endl;
    cout << r1.waitTime << endl;

    exit(0);
}


//this funciton uses user input to populate a temp restraunt struct and returns it
Restaurant populate() {
    Restaurant temp;
    cout << "Please enter the restraunt rating: ";
    cin >> temp.rating;
    cout << "Please enter the restraunt address: ";
    cin >> temp.address;
    cout << "Please enter the restraunt cuisine: ";
    cin >> temp.cuisine;
    cout << "Please enter the restraunt open status: ";
    cin >> temp.openStatus;
    cout << "Please enter the restraunt wait time: ";
    cin >> temp.waitTime;

    return temp;
}


//this function receives a struct object as its formal param
// and outputs the struct's data in a presentable format
void present(Restaurant r) {

}