#include <iostream>

using namespace std;

// nested scr terpisah

struct Kampus
{

  string namakampus, alamatKampus;
  int tahunBerdiri;
};

struct Mahasiswa
{
  
  string npm, nama, jurusan;
  int umur;
  Kampus kps;
  struct AlamatMhs
  {
    string jalan;
  } alamat;
  string hobi[3];
};


// structure pada parameter fungsi
void cetakDataMhs(Mahasiswa data)
{
  cout << "NPM Mahasiswa 1 : " << data.npm << endl;
  cout << "Nama Mahasiswa 1 : " << data.nama << endl;
  cout << "Jurusan Mahasiswa 1 : " << data.jurusan << endl;
  cout << "Umur Mahasiswa 1 : " << data.umur << endl;
  cout << "Nama Universitas Mahasiswa 1 : " << data.kps.namakampus << endl;
  cout << "Alamat Universitas Mahasiswa 1 : " << data.kps.alamatKampus << endl;
  cout << "TB Universitas Mahasiswa 1 : " << data.kps.tahunBerdiri << endl;
  cout << "Hobi1 Mahasiswa 1 : " << data.hobi[0] << endl;
  cout << "Hobi2 Mahasiswa 1 : " << data.hobi[1] << endl;
  cout << "Hobi3 Mahasiswa 1 : " << data.hobi[2] << endl;
  cout << "Alamat Mahasiswa 1 : " << data.alamat.jalan << endl;
}


int main()
{

  Mahasiswa mahasis;
  mahasis.alamat;

  Kampus kampusUtama = {"UTM", "Madura", 2001};


  Mahasiswa mhs[2];

  mhs[0].npm = "220411100066";
  mhs[0].nama = "Juan";
  mhs[0].jurusan = "Teknik Informatika";
  mhs[0].umur = 19;
  mhs[0].hobi[0] = "Sepak Bola";
  mhs[0].hobi[1] = "Membaca";
  mhs[0].hobi[2] = "Voli";
  mhs[0].kps.namakampus = "UTM";
  mhs[0].kps.alamatKampus = "Madura";
  mhs[0].kps.tahunBerdiri = 2001;
  mhs[0].alamat.jalan = "Jl. Telang";

  cetakDataMhs(mhs[0]);
  
  cout << "\n" << endl;

  mhs[1].npm = "221411100077";
  mhs[1].nama = "Juan";
  mhs[1].jurusan = "Teknik Informatika";
  mhs[1].umur = 19;
  mhs[1].hobi[1] = "Sepak Bola";
  mhs[1].hobi[1] = "Membaca";
  mhs[1].hobi[2] = "Voli";
  mhs[1].kps = kampusUtama;
  mhs[1].alamat.jalan = "Jl. Telang";

  cout << "NPM Mahasiswa 1 : " << mhs[1].npm << endl;
  cout << "Nama Mahasiswa 1 : " << mhs[1].nama << endl;
  cout << "Jurusan Mahasiswa 1 : " << mhs[1].jurusan << endl;
  cout << "Umur Mahasiswa 1 : " << mhs[1].umur << endl;
  cout << "Nama Universitas Mahasiswa 1 : " << mhs[1].kps.namakampus << endl;
  cout << "Alamat Universitas Mahasiswa 1 : " << mhs[1].kps.alamatKampus << endl;
  cout << "TB Universitas Mahasiswa 1 : " << mhs[1].kps.tahunBerdiri << endl;
  cout << "Hobi1 Mahasiswa 1 : " << mhs[1].hobi[1] << endl;
  cout << "Hobi2 Mahasiswa 1 : " << mhs[1].hobi[1] << endl;
  cout << "Hobi3 Mahasiswa 1 : " << mhs[1].hobi[2] << endl;
  cout << "Alamat Mahasiswa 1 : " << mhs[1].alamat.jalan << endl;

  // mhs[1] = {"220411100077", "Dio", "Teknik Elektro", 21, .kps = {"UTM", "Madura", 2001}, .alamat = {"Jl. Telang"} , {"Memancing", "Ngoding", "Nonton"}};

  // cout << "NPM Mahasiswa 2 : " << mhs[1].npm << endl;
  // cout << "Nama Mahasiswa 2 : " << mhs[1].nama << endl;
  // cout << "Jurusan Mahasiswa 2 : " << mhs[1].jurusan << endl;
  // cout << "Umur Mahasiswa 2 : " << mhs[1].umur << endl;
  // cout << "Hobi1 Mahasiswa 2 : " << mhs[1].hobi[0] << endl;
  // cout << "Hobi2 Mahasiswa 2 : " << mhs[1].hobi[1] << endl;
  // cout << "Hobi3 Mahasiswa 2 : " << mhs[1].hobi[2] << endl;

  // cout << "\n" << endl;

  // mhs[2] = {"220411100088", "Axl", "Teknik Mesin", 25, .kps = {"UTM", "Madura", 2001}, .alamat = {"Jl. Telang"}, {"Menulis", "Lari", "Game"}};

  // cout << "NPM Mahasiswa 3 : " << mhs[2].npm << endl;
  // cout << "Nama Mahasiswa 3 : " << mhs[2].nama << endl;
  // cout << "Jurusan Mahasiswa 3 : " << mhs[2].jurusan << endl;
  // cout << "Umur Mahasiswa 3 : " << mhs[2].umur << endl;
  // cout << "Hobi1 Mahasiswa 3 : " << mhs[2].hobi[0] << endl;
  // cout << "Hobi2 Mahasiswa 3 : " << mhs[2].hobi[1] << endl;
  // cout << "Hobi3 Mahasiswa 3 : " << mhs[2].hobi[2] << endl;




  return 0;
}
