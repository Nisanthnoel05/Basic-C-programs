#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int students,teams;
    cin>>students>>teams;
    int perteam=students/teams;
    int leftout=students%teams;
    cout<<perteam<<endl;
    cout<<leftout<<endl;
    return 0;
}
