#include <iostream>
using namespace std;
int main(){
    int x = 9;
    int* p = &x;
    cout << p << endl;
    cout << *p << endl;
    *p = 12;
    cout << x << endl;
    return 0; 
}
