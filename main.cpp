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

int main() {
    Restaurant r1;
    r1.rating = 4;
    r1.address = "123 simple st.";
    r1.cuisine = "french";
    r1.openStatus = false;
    r1.waitTime = 0.0;

    cout << r1.rating << endl;
    cout << r1.address << endl;
    cout << r1.cuisine << endl;
    cout << r1.openStatus << endl;
    cout << r1.waitTime << endl;


}