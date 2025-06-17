#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int p, r, y;
    cin >> p >> r >> y;
    float interest = (p * r * y) / 100.0;
    float total = p + interest;
    float discount = 0.02 * interest;
    float final = total - discount;
    cout << fixed << setprecision(2);
    cout << interest << endl;
    cout << total << endl;
    cout << discount << endl;
    cout << final << endl;
    return 0;
}
