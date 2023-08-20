#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int main()
{
    int seconds = 4;
    cout << "Ready?" << endl;
    while (seconds-- > 1)
    {
        cout << seconds << endl;
        usleep(1000000);
    }
}