#include <iostream>

using namespace std;

int main()
{
  
  string nama = "dio";
  cout << nama << " berada pada alamat : " << &nama << endl;

  // string *ptrNama1;
  // string * ptrNama1;
  // string* ptrNama1;
  // ptrNama1 = &nama;
  //atau
  string *ptrNama = &nama;

  cout << "ptrNama : " << ptrNama << endl;
  // operator dereference/indirection (*)
  cout << "Nilai pada alamat ptrNama : " << *ptrNama << endl;

  // manipulasi nilai
  *ptrNama = "juan";
  cout << "Nilai pada variabel nama : " << nama << endl;
  cout << "Nilai pada alamat ptrNama : " << *ptrNama << endl;

  cout << "\n";


  int nilai = 5;
  int *ptrNilai = &nilai;
  cout << "Isi dari variabel nilai : " << nilai << endl;
  cout << "Alamat dari variabel nilai : " << ptrNilai << endl;

  // *ptrNilai += 10;
  // *ptrNilai ++; // yg berubah alamatnya
  (*ptrNilai)++;
  cout << "Isi dari variabel nilai : " << nilai << endl;
  cout << "Alamat dari variabel nilai : " << ptrNilai << endl;

  int m =10;
  int *n = &m;
  cout << "Isi dari variabel n : " << *n << endl;
  cout << "Alamat dari variabel n : " << n << endl;

  return 0;
}
