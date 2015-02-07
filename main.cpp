#include <iostream>
#include "include/myAllocator.h"
#include <vector>

using namespace std;

int main() {
    int ia[5] = {0,1,2,3,4};
    unsigned int i;

    vector<int, Abbey::allocator<int> > iv(ia, ia+5);
    for (int i = 0; i < iv.size(); ++i) {
        cout << iv[i] << ' ';
    }
    cout << endl;
}