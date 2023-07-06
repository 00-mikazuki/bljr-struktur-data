#include <iostream>

using namespace std;

void binarySearchInt(int angka[], int key)
{
  int low = 0, high = sizeof(angka) - 1, med;
  bool status = false;

  while (low <= high)
  {
    med = (low + high) / 2;

    // pengecekan apakah datanya ditemukan atau tidak
    if (key == angka[med])
    {
      // jika datanya ditemukan
      cout << key << " ditemukan pada posisi ke-" << (med + 1) << " dan pada index ke-" << med;
      status = true;
      break;
    }
    else
    {
      // jika datanya tidak ditemukan
      // pembagian array apakah lebih besar dari key / lebih kecil dari key
      if (key > angka[med])
      {
        // cari datanya yg lebih dari median
        low = med + 1;
      }
      else
      {
        // jika median lebih besar dari key
        high = med - 1;
      }
    }
  } // end while

  // pengecekan apakah datanya ditemukan atau tidak
  if (status == false)
  {
    // data tidak ditemukan
    cout << key << " tidak ditemukan dalam array";
  }
}

void binarySearchString(string kata[], string key) {
    int low = 0, high = sizeof(kata)-1, med;
    bool status = false;

    while( low <= high ) {
      med = (low + high) / 2;

      // pengecekan apakah datanya ditemukan atau tidak
      if(key == kata[med]) {
        // jika datanya ditemukan
        cout << key << " ditemukan pada posisi ke-" << (med + 1) << " dan pada index ke-" << med;
        status = true;
        break;
      } else {
        // jika datanya tidak ditemukan
        // pembagian array apakah lebih besar dari key / lebih kecil dari key
        if( key.compare(kata[med]) < 0 ) {
          // cari datanya yg lebih dari median
          low = med + 1;
        } else {
          // jika median lebih besar dari key
          high = med - 1;
        }
      }
    } // end while

    // pengecekan apakah datanya ditemukan atau tidak
    if ( status == false ) {
      // data tidak ditemukan
      cout << key + " tidak ditemukan dalam array";
    }
  }

int main()
{
  int nilai[] = { 66, 77, 80, 84, 88, 99, 100 };
  binarySearchInt(nilai, 88);

  cout << endl;

  string nama[] = {"Siti", "Rudi", "Lina", "Gilang", "Budi"};
  binarySearchString(nama, "Gilang");


  return 0;
}
