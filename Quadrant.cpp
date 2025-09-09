// #include<iostream>
// using namespace std;

// int main() {
//     int x, y;
//     cout << "Enter x coordinate: ";
//     cin >> x;
//     cout << "Enter y coordinate: ";
//     cin >> y;

//     if(x == 0 && y == 0) {
//         cout << "Point lies at the Origin (0,0)";
//     }
//     else if(x == 0) {
//         cout << "Point lies on the Y-axis";
//     }
//     else if(y == 0) {
//         cout << "Point lies on the X-axis";
//     }
//     else if(x > 0 && y > 0) {
//         cout << "Point lies in the 1st Quadrant";
//     }
//     else if(x < 0 && y > 0) {
//         cout << "Point lies in the 2nd Quadrant";
//     }
//     else if(x < 0 && y < 0) {
//         cout << "Point lies in the 3rd Quadrant";
//     }
//     else if(x > 0 && y < 0) {
//         cout << "Point lies in the 4th Quadrant";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    string result = (x == 0 && y == 0) ? "Origin" :
                    (x == 0) ? "On Y-axis" :
                    (y == 0) ? "On X-axis" :
                    (x > 0 && y > 0) ? "1st Quadrant" :
                    (x < 0 && y > 0) ? "2nd Quadrant" :
                    (x < 0 && y < 0) ? "3rd Quadrant" :
                                       "4th Quadrant";

    cout << "Point lies in: " << result;

    return 0;
}
