#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct mahasiswa {
string nim;
string nama;
string alamat;
float ipk;
};

mahasiswa sikc [30];

int pos = -1;

void dMenu()
{
    system("cls");
    cout << "Aplikasi KelasQ" << "\n";
    cout << "1. Masukkan data" << "\n";
    cout << "2. Tampilkan data" << "\n";
    cout << "3. Perbaikan data" << "\n";
    cout << "4. Menghapus data" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukan angka :";
}
    
    switch (pl)
    {
    case '1':
      {
        pos++;
        system("cls");
        fflush(stdin);
        cout << "masukan nim: ";
        getline (cin, sikc[pos].nim);
        cout << "masukan nama: ";
        getline (cin, sikc[pos].nama);
        cout << "masukan alamat: ";
        getline (cin, sikc[pos].alamat);
        cout << "masukan ipk: ";
        cin >> sikc[pos].ipk;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
      }

    case '2':
        void tampilkanData(int p){
        cout << sikc[p].nim<<" , "<< sikc[p].nama<<" , "<< sikc[p].alamat<<" , "<<
        sikc[p].ipk<<endl;
          break;
      }   

    
    case '3':
        break;
} while (pl != '5');
  return 0;
}
}

void masukkanData()
{
  system("cls");
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << (i + 1) << ": ";
        cin >> arrdata[i];
    }
    cout << "Data berhasil dimasukkan.\n";
    getch();
}

void tampilkanData()
{
    system("cls");
    cout << "Data yang dimasukkan:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arrdata[i] << " ";
    }
    cout << "\n";
    getch();
}
void tukar(int *a,int *b){
int t=*a;
*a=*b;
*b=t;
}

void sortingAsc()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arrdata[j] > arrdata[j + 1])
            {
                tukar(&arrdata[j], &arrdata[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan secara ascending.\n";
    getch();
}

void sortingDsc()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arrdata[j] < arrdata[j + 1])
            {
                tukar(&arrdata[j], &arrdata[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan secara descending.\n";
    getch();
}

