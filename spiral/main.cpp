#include <iostream>
//#define n 5
using namespace std;
//int arr[n][n];

int main() {
    const int n = 5;
    int arr[n][n];


    int num = 1;

    for (int delta = 0; delta < int(n/2); delta++){
        for (int i = 0 + delta; i < n - delta; i++){ // идем по 1 строке
            arr[0 + delta][i] = num;
            num++;
        }
        num--;
        for (int i = 0 + delta; i < n - delta; i++) {// идем по посл. столбцу
            arr[i][n-1 - delta] = num;
            num++;
        }
        num--;
        for (int i = n - 1 - delta; i >= 0 + delta; i--) { //идем по посл. строке
            arr[n-1 - delta][i] = num;
            num++;
        }
        num--;
        for (int i = n - 1 - delta ; i >= 1 + delta; i--) { //идем по 1 столбцу
            arr[i][0 + delta] = num;
            num++;
        }
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
