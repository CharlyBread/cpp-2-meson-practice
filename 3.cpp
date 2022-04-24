#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));

    cout << "num?\n";
    int num;
    cin >> num;

    cout << "min?\n";
    int mini;
    cin >> mini;

    cout << "max?\n";
    int maxi;
    cin >> maxi;

    cout << "n?\n";
    int n;
    cin >> n;

    cout << "m?\n";
    int m;
    cin >> m;

    fstream F;
    F.open("F.txt", ios::out);
    for (int i = 0; i < num; i++) {
        F << rand() % (maxi + 1 - mini) + mini << " ";
        cout << " ";
    }
    F.close();

    F.open("F.txt", ios::in);
    ofstream G;
    G.open("G.txt", ios::out);
    for (int i = 0; i < num; i++) {
        int temp;
        F >> temp;
        if ((temp % m) + (temp % n) == 0){
            G << temp << " ";
        }
    }
    G.close();
    F.close();
    return 0;
}
