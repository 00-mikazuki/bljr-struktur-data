#include <iostream>
using namespace std;

// Hash Table
struct HashTable
{
  // data
  string username, password;
} dataAkun[26];

// function hash
int hashFunction(string key)
{
  return tolower(key[0]) - 97;
}

// cek Daftar
bool cekDaftar(string username, string password)
{
  int index = hashFunction(password);

  // cek index masih kosong / tidak
  if (dataAkun[index].username != "" && dataAkun[index].password != "") {
    // jika sel index hash table tidak kosong
    cout << "User sudah ada" << endl;
    return false;
  } else {
    // jika sel index hash table tidak kosong
    dataAkun[index].username = username;
    dataAkun[index].password = password;
    return true;
  }
}

// cek Login
bool cekLogin( string username, string password )
{
  // hashing
  int index = hashFunction(password);

  // cek username password apakah benar
  if( dataAkun[index].username == username && dataAkun[index].password == password ) {
    // benar
    return true;
  } else {
    return false;
  }

}

// cek Hapus Akun
bool cekHapusAkun( int index )
{
  // cek apakah sel index di hash table tidak kosong
  if( dataAkun[index].username == "" && dataAkun[index].password == "" ) {
    // jika sel kosong
    cout << "\nData akun tidak tersedia" << endl;
    return false;
  } else {
    // jika ada
    dataAkun[index].username = "";
    dataAkun[index].password = "";
    return true;
  }
}

// print DataAkun
void printDataAkun()
{
  cout << "\nData Akun : " << endl;
  cout << "| Index\t - Username - Password |" << endl;
  for (int i = 0; i < 26; i++)
  {
    cout << "| " << i << "\t - ";
    if (dataAkun[i].username == "") {
      cout << "(kosong) - ";
    } else {
      cout << dataAkun[i].username << " - ";
    }
    if (dataAkun[i].password == "") {
      cout << "(kosong) |" << endl;
    } else {
      cout << dataAkun[i].password << " |" << endl;
    }
  }
}

// view Daftar
void viewDaftar()
{
  string username, password;
  cout << "\n\n == MENU DAFTAR ==" << endl;
  cout << "Masukkan username & password" << endl;
  cout << "Isi Username anda : ";
  cin >> username;
  cout << "Isi Password anda : ";
  cin >> password;

  if (cekDaftar(username, password)) {
    cout << "Akun berhasil terdaftar" << endl;
  } else {
    cout << "Akun gagal terdaftar" << endl;
  }
}

// view Tambah Akun
void viewTambahAkun()
{
  string username, password;
  cout << "\n== MENU TAMBAH AKUN ==" << endl;
  cout << "Masukkan username & password" << endl;
  cout << "Isi Username akun : ";
  cin >> username;
  cout << "Isi Password akun : ";
  cin >> password;

  if (cekDaftar(username, password)) {
    cout << "Akun berhasil terdaftar" << endl;
  } else {
    cout << "Akun gagal terdaftar" << endl;
  }
}

// view Hapus Akun
void viewHapusAkun()
{
  int index;
  cout << "\n== MENU HAPUS AKUN ==" << endl;
  cout << "Masukkan username & password" << endl;
  cout << "Isi index akun : ";
  cin >> index;

  if (cekHapusAkun(index)) {
    cout << "Data akun berhasil dihapus" << endl;
  } else {
    cout << "Data akun gagal dihapus" << endl;
  }
}

// view Menu Login
void viewMenuLogin()
{
  while (true) {
    string pilihan;
    cout << "\n== MENU ADMIN ==" << endl;
    cout << "Menu Pilihan" << endl;
    cout << "1. Tambah Akun" << endl;
    cout << "2. Hapus Akun" << endl;
    cout << "3. Lihat Data Akun" << endl;
    cout << "4. Logout" << endl;
    cout << "Pilih menu [1/2/3/4] : ";
    cin >> pilihan;

    if (pilihan == "1") {
      viewTambahAkun();
    } else if (pilihan == "2") {
      viewHapusAkun();
    } else if (pilihan == "3") {
      printDataAkun();
    } else if( pilihan == "4" ) {
      cout << "Anda berhasil logout" << endl;
      break;
    } else {
      cout << "Pilihan tidak tersedia" << endl;
    }
  }
}

// view Login
void viewLogin()
{
  string username, password;
  cout << "\n== VIEW LOGIN ==" << endl;
  cout << "Masukkan username & password" << endl;
  cout << "Isi username anda : ";
  cin >> username;
  cout<< "Isi password anda : ";
  cin >> password;

  if( cekLogin( username, password ) ) {
    cout << "\nLogin berhasil" << endl;
    viewMenuLogin();
  } else {
    cout << "\nLogin gagal" << endl;
  }

}

// tampilan utama
void welcome()
{
  while (true)
  {
    string pilihan;
    cout << "\n\n== PROGRAM LOGIN SEDERHANA DENGAN HASHING ==" << endl;
    cout << "Menu Pilihan" << endl;
    cout << "1. Daftar" << endl;
    cout << "2. Login" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu [1/2/3] : ";
    cin >> pilihan;

    if (pilihan == "1") {
      viewDaftar();
    } else if (pilihan == "2") {
      viewLogin();
    } else if (pilihan == "3") {
      cout << "\nTerimakasih telah menggunakan aplikasi login sederhana" << endl;
      break;
    } else {
      cout << "Pilihan tidak tersedia" << endl;
    }
  }
}

int main()
{

  welcome();
}
