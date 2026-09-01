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
void present(Restaurant);

int main() {
    Restaurant r1 = populate();
    cout << "Restaurant 1: " << endl;
    present(r1);
    Restaurant r2 = populate();
    cout << "Restaurant 2: " << endl;
    present(r2);
    Restaurant r3 = populate();
    cout << "Restaurant 3: " << endl;
    present(r3);
    Restaurant r4 = populate();
    cout << "Restaurant 4: " << endl;
    present(r4);
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
    cout << "Restaurant rating: " << r.rating << endl;
    cout << "Restaurant address: " << r.address << endl;
    cout << "Restaurant cuisine: " << r.cuisine << endl;
    cout << "Restaurant open: " << r.openStatus << endl;
    cout << "Restaurant wait time: " << r.waitTime << endl;
}