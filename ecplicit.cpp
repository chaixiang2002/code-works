#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point(int x = 0, int y = 0)
        : x(x), y(y) {}
};

void displayPoint(const Point& p)
{
    cout << "(" << p.x << ","
         << p.y << ")" << endl;
}

int main()
{
    displayPoint(1);
    Point p = 1;
}
=================================================================
==42==ERROR: AddressSanitizer: heap-buffer-overflow on address 0x603000000b98 at pc 0x00000032002f bp 0x7fffe29b8350 sp 0x7fffe29b7b18
READ of size 28 at 0x603000000b98 thread T0
    #5 0x7f27c88ba0b2  (/lib/x86_64-linux-gnu/libc.so.6+0x270b2)
0x603000000b98 is located 0 bytes to the right of 24-byte region [0x603000000b80,0x603000000b98)
allocated by thread T0 here:
    #5 0x7f27c88ba0b2  (/lib/x86_64-linux-gnu/libc.so.6+0x270b2)
