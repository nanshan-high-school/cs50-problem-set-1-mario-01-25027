# cs50-problem-set-1-mario-01-25027
cs50-problem-set-1-mario-01-25027 created by GitHub Classroom

#include <iostream>
using namespace std;

int main(){
  int height;
    cout <<"輸入高度";
    cin >> height;
 for (int x = 0; x < height; x++) {
        for (int y = height; y > x; y--) {
            cout << " ";
        }
        for (int y = 0; y <= x; y++) {
            cout << "#";
        }
        cout << "\n";
    }
}
