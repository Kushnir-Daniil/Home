#include <iostream>
using namespace std;

int main() {
    int a, b, N;
    cout << "Введіть межі цілими числами: " << endl;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        N++;
    }
    cout<<N <<endl;
    return 0;
}
