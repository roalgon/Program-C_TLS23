#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n, o, p;
    bool aksi;

    cout << "\nKalkulator Dot Product Matrix\n\n";

    do {
    cout << "Masukan jumlah baris matrik ke-1\t= ";
    cin >> m;
    cout << "Masukan jumlah kolom ke-1\t\t= ";
    cin >> n;
    cout << "Masukan jumlah baris matrik ke-2\t= ";
    cin >> o;
    cout << "Masukan jumlah kolom ke-2\t\t= ";
    cin >> p;

    if (n != o) {
        cout << "Kolom matrix ke-1 dan baris matrix ke-2 tidak boleh berbeda\n";
        aksi = true; 
    } else {
        aksi = false;
    }
    } while (aksi);
    
    double matrix1[m][n], matrix2[o][p], matrix[m][p];

    cout << "Masukan nilai matrix ke-1 :" << endl;
    for (int j1 = 0; j1 < m; j1++) {
        for (int k1 = 0; k1 < n; k1++) {
            cin >> matrix1[j1][k1];
        }
    }

    cout << "Masukan nilai matrix ke-2 :" << endl;
    for (int j2 = 0; j2 < o; j2++) {
        for (int k2 = 0; k2 < p; k2++) {
            cin >> matrix2[j2][k2];
        }
    }

    cout << "Dot product matrixnya adalah : \n";

    for (int j3 = 0; j3 < m; j3++) {
        for (int k3 = 0; k3 < p; k3++) {
            int jumlah = 0;
            for (int p3 = 0; p3 < n; p3++) {
                matrix[j3][k3] = matrix1[j3][p3] * matrix2[p3][k3];
                jumlah += matrix[j3][k3];
            }
            cout << jumlah << "\t";
        }
        cout << endl;
    }

    cout << "Program Selesai";
    
    return 0;
}