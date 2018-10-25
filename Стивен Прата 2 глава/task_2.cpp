#include <iostream>
#define CONVERT 220

using namespace std;
int main()
{
    int farlong;
    cout << "farlong=";
    cin >> farlong;
    int yard = farlong * CONVERT;
    cout << "yard=" << yard;
    return 0;
}


