#include <iostream>

using namespace std;

// struct seperti fungsi pengembalian nilai atau fungsi yg tdk mengembalikan nilai, dibuatnya diluar fungsi utama
struct Mahasiswa
{
  // Komponen / member
  string npm, nama, jurusan;
  int umur;
  string hobi[3];
} mhs1, mhs2; //deklarasi variabel struct scr global


int main()
{

  // mengakses member structure menggunakan operator akses member dgn period (.)
  // inisialisasi member structure cara 1
  mhs1.npm = "220411100066";
  mhs1.nama = "Juan";
  mhs1.jurusan = "Teknik Informatika";
  mhs1.umur = 19;
  mhs1.hobi[0] = "Sepak Bola";
  mhs1.hobi[1] = "Membaca";
  mhs1.hobi[2] = "Voli";

  cout << "NPM Mahasiswa 1 : " << mhs1.npm << endl;
  cout << "Nama Mahasiswa 1 : " << mhs1.nama << endl;
  cout << "Jurusan Mahasiswa 1 : " << mhs1.jurusan << endl;
  cout << "Umur Mahasiswa 1 : " << mhs1.umur << endl;
  cout << "Hobi1 Mahasiswa 1 : " << mhs1.hobi[0] << endl;
  cout << "Hobi2 Mahasiswa 1 : " << mhs1.hobi[1] << endl;
  cout << "Hobi3 Mahasiswa 1 : " << mhs1.hobi[2] << endl;

  cout << "\n" << endl;


  // cara 2 harus urut sesuai urutan member
  mhs2 = {"220411100077", "Dio", "Teknik Elektro", 21, {"Memancing", "Ngoding", "Nonton"}};

  cout << "NPM Mahasiswa 2 : " << mhs2.npm << endl;
  cout << "Nama Mahasiswa 2 : " << mhs2.nama << endl;
  cout << "Jurusan Mahasiswa 2 : " << mhs2.jurusan << endl;
  cout << "Umur Mahasiswa 2 : " << mhs2.umur << endl;
  cout << "Hobi1 Mahasiswa 2 : " << mhs2.hobi[0] << endl;
  cout << "Hobi2 Mahasiswa 2 : " << mhs2.hobi[1] << endl;
  cout << "Hobi3 Mahasiswa 2 : " << mhs2.hobi[2] << endl;

  cout << "\n" << endl;

  // cara 3
  //deklarasi variabel struct scr lokal
  Mahasiswa mhs3 = {"220411100088", "Axl", "Teknik Mesin", 25, {"Menulis", "Lari", "Game"}};

  cout << "NPM Mahasiswa 3 : " << mhs3.npm << endl;
  cout << "Nama Mahasiswa 3 : " << mhs3.nama << endl;
  cout << "Jurusan Mahasiswa 3 : " << mhs3.jurusan << endl;
  cout << "Umur Mahasiswa 3 : " << mhs3.umur << endl;
  cout << "Hobi1 Mahasiswa 3 : " << mhs3.hobi[0] << endl;
  cout << "Hobi2 Mahasiswa 3 : " << mhs3.hobi[1] << endl;
  cout << "Hobi3 Mahasiswa 3 : " << mhs3.hobi[2] << endl;

  cout << "\n" << endl;
  cout << "\n" << endl;



  // Array dari structure
  Mahasiswa mhs[3];

  mhs[0].npm = "220411100066";
  mhs[0].nama = "Juan";
  mhs[0].jurusan = "Teknik Informatika";
  mhs[0].umur = 19;
  mhs[0].hobi[0] = "Sepak Bola";
  mhs[0].hobi[1] = "Membaca";
  mhs[0].hobi[2] = "Voli";

  cout << "NPM Mahasiswa 1 : " << mhs[0].npm << endl;
  cout << "Nama Mahasiswa 1 : " << mhs[0].nama << endl;
  cout << "Jurusan Mahasiswa 1 : " << mhs[0].jurusan << endl;
  cout << "Umur Mahasiswa 1 : " << mhs[0].umur << endl;
  cout << "Hobi1 Mahasiswa 1 : " << mhs[0].hobi[0] << endl;
  cout << "Hobi2 Mahasiswa 1 : " << mhs[0].hobi[1] << endl;
  cout << "Hobi3 Mahasiswa 1 : " << mhs[0].hobi[2] << endl;

  cout << "\n" << endl;

  mhs[1] = {"220411100077", "Dio", "Teknik Elektro", 21, {"Memancing", "Ngoding", "Nonton"}};

  cout << "NPM Mahasiswa 2 : " << mhs[1].npm << endl;
  cout << "Nama Mahasiswa 2 : " << mhs[1].nama << endl;
  cout << "Jurusan Mahasiswa 2 : " << mhs[1].jurusan << endl;
  cout << "Umur Mahasiswa 2 : " << mhs[1].umur << endl;
  cout << "Hobi1 Mahasiswa 2 : " << mhs[1].hobi[0] << endl;
  cout << "Hobi2 Mahasiswa 2 : " << mhs[1].hobi[1] << endl;
  cout << "Hobi3 Mahasiswa 2 : " << mhs[1].hobi[2] << endl;

  cout << "\n" << endl;




  return 0;
}
