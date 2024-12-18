#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Input jumlah baris
    cout << "Masukkan jumlah baris: ";
    cin >> rows;

    // Membuat pola segitiga sama sisi
    for (int i = 1; i <= rows; i++)
    {
        // Print spasi
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        //  Print star

        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}