#include <iostream>

using namespace std;

// struktur linked list
struct DataBarang
{
  string namaBarang;
  int jumlahBarang, hargaBarang;

  // pointer
  DataBarang *prev;
  DataBarang* next;
};

DataBarang *head, *tail, *cur, *del, *newNode, *afterNode;

// membuat circular double linked list
void createDataBarang( string namaBarang, int jmlBarang, int hargaBarang ) {

  head = new DataBarang();
  head->namaBarang = namaBarang;
  head->jumlahBarang = jmlBarang;
  head->hargaBarang = hargaBarang;
  head->prev = head;
  head->next = head;
  tail = head;
}

// Add First
void addFirst( string namaBarang, int jmlBarang, int hargaBarang ) {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    newNode = new DataBarang();
    newNode->namaBarang = namaBarang;
    newNode->jumlahBarang = jmlBarang;
    newNode->hargaBarang = hargaBarang;
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
    tail->next = newNode;
    head = newNode;
  }
}

// Add Last
void addLast( string namaBarang, int jmlBarang, int hargaBarang ) {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    newNode = new DataBarang();
    newNode->namaBarang = namaBarang;
    newNode->jumlahBarang = jmlBarang;
    newNode->hargaBarang = hargaBarang;
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
    tail->next = newNode;
    tail = newNode;
  }
}

// Add Middle
void addMiddle ( string namaBarang, int jmlBarang, int hargaBarang, int posisi ) {
  if( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    if( posisi == 1 ) {
      cout << "Posisi 1 bukan posisi tengah" << endl;
    } else if( posisi < 1 ) {
      cout << "Posisi diluar jangkauan" << endl;
    } else {
      newNode = new DataBarang();
      newNode->namaBarang = namaBarang;
      newNode->jumlahBarang = jmlBarang;
      newNode->hargaBarang = hargaBarang;

      // tranversing
      cur = head;
      int nomor = 1;
      while( nomor < posisi - 1 ) {
        cur = cur->next;
        nomor++;
      }
      afterNode = cur->next;
      cur->next = newNode;
      afterNode->prev = newNode;
      newNode->prev = cur;
      newNode->next = afterNode;
    }
  }
}

// Delete First
void removeFirst() {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    del = head;
    head = head->next;
    tail->next = head;
    head->prev = tail;
    delete del;
  }
}

// Delete Last
void removeLast() {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    del = tail;
    tail = tail->prev;
    head->prev = tail;
    tail->next = head;
    delete del;
  }
}

// Delete Middle
void removeMiddle( int posisi ) {

  if( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    if( posisi == 1 ) {
      cout << "Posisi 1 bukan posisi tengah" << endl;
    } else if( posisi < 1 ) {
      cout << "Posisi diluar jangkauan" << endl;
    } else {
      // tranversing
      cur = head;
      int nomor = 1;
      while( nomor < posisi - 1 ) {
        cur = cur->next;
        nomor++;
      }
      del = cur->next;
      afterNode = del->next;
      cur->next = afterNode;
      afterNode->prev = cur;
      delete del;
    }
  }
}

// fungsi print 
void printDataBarang() {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    cout << "Data Barang : " << endl;
    cur = head;
    while( cur->next != head ) {
      //print
      cout << "Nama Barang : " << cur->namaBarang << endl;
      cout << "Jumlah Barang : " << cur->jumlahBarang << " barang" << endl;
      cout << "Harga Barang : Rp." << cur->hargaBarang << "\n" << endl;

      cur = cur->next;
    }
    // print last node
    cout << "Nama Barang : " << cur->namaBarang << endl;
    cout << "Jumlah Barang : " << cur->jumlahBarang << " barang" << endl;
    cout << "Harga Barang : Rp." << cur->hargaBarang << "\n\n" << endl;
  }
}


int main()
{
  
  createDataBarang( "Shampoo", 15, 5000 );
  printDataBarang();

  addFirst( "Sikat Gigi", 23, 7000 );
  printDataBarang();

  addLast( "Sabun Mandi", 11, 12000 );
  printDataBarang();

  // removeFirst();
  // printDataBarang();

  // removeLast();
  // printDataBarang();

  addMiddle( "Pomade", 11, 20000, 6 );
  printDataBarang();

  removeMiddle( 6 );
  printDataBarang();



  return 0;
}
