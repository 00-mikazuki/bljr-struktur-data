#include <iostream>

using namespace std;


// Stack Array

int maksimal = 5;
string arrayBuku[5];
int top = 0;


bool isFull() {

  if( top == maksimal ) {
    return true;
  } else {
    return false;
  }
}

bool isEmpty() {

  if( top == 0 ) {
    return true;
  } else {
    return false;
  }
}

void pushArray( string data ) {

  if( isFull() ) {
    cout << "Data penuh" << endl;
  } else {
    arrayBuku[top] = data;
    top++;
  }
}

void popArray() {

  if( isEmpty() ) {
    cout << "Data kosong" << endl;
  } else { 
    arrayBuku[top-1] = "";
    top--;
  }
}

void displayArray() {

  if( isEmpty() ) {
    cout << "Data kosong" << endl;
  } else {
    cout << "Data stack array : " << endl;
    for( int i = maksimal - 1; i >= 0; i-- ) {
      if( arrayBuku[i] != "" ) {
        cout << "Data : " << arrayBuku[i] << endl;
      }
    }
    cout << "\n" << endl;
  }
}

void peekArray( int posisi ) {
  if( isEmpty() ) {
    cout << "Data kosong" << endl;
  } else {

    int index = top;
    for( int i = 0; i < posisi; i++) {
      index--;
    }
    cout << "Data posisi ke- " << posisi << " : " << arrayBuku[index] << endl;
  }
}

void changeArray( string data, int posisi ) {
  if( isEmpty() ) {
    cout << "Data kosong" << endl;
  } else {

    int index = top;
    for( int i = 0; i < posisi; i++) {
      index--;
    }
    arrayBuku[index] = data;
  }
}

void destroyArray() {
  for( int i = 0; i < top; i++) {
    arrayBuku[i] = "";
  }
  top = 0;
}

int countArray() {
  if( isEmpty() ) {
    cout << "Data kosong" << endl;
    return 0;
  } else {
    return top;
  }
}


// Stack Linked List

struct dataBarang {
  string namaBarang;
  int hargaBarang;

  // pointer
  dataBarang* prev;
  dataBarang* next;
};

dataBarang *head, *tail, *cur, *newNode, *del;
int maksimalBarang = 5;

int countBarang() {

  if( head == NULL ) {
    return 0;
  } else {
    int jumlah = 0;
    cur = head;
    while (cur != NULL) {
      jumlah++;
      cur = cur->next;
    }
    return jumlah;
  }
}

bool isFullBarang() {

  if( countBarang() == maksimalBarang ) {
    return true;
  } else {
    return false;
  }
}

bool isEmptyBarang() {

  if( countBarang() == 0 ) {
    return true;
  } else {
    return false;
  }
}

void pushBarang( string namaBarang, int hargaBarang ) {

  if( isFullBarang() ) {
    cout << "Stack full" << endl;
  } else {
    if( isEmptyBarang() ) {
      // create
      head = new dataBarang();
      head->namaBarang = namaBarang;
      head->hargaBarang = hargaBarang;
      head->prev = NULL;
      head->next = NULL;
      tail = head;
    } else {
      // push
      newNode = new dataBarang();
      newNode->namaBarang = namaBarang;
      newNode->hargaBarang = hargaBarang;
      newNode->prev = tail;
      tail->next = newNode;
      newNode->next = NULL;
      tail = newNode;
    }
  }
}

void displayBarang() {

  cout << "\n" << endl;
  if( isEmptyBarang() ) {
    cout << "Stack kosong" << endl;
  } else {
    cout << "Data Barang : " << endl;
    cur = tail;
    while (cur != NULL) {
      cout << "Barang : " << cur->namaBarang << " - Rp." << cur->hargaBarang << endl;
      cur = cur->prev;
    }
    cout << "\n" << endl;
  }
}

void peekBarang( int posisi ) {

  if( isEmptyBarang() ) {
    cout << "Stack kosong" << endl;
  } else {
    int nomor = 1;
    cur = tail;
    while ( nomor < posisi ) {
      cur = cur->prev;
      nomor++;
    }
    cout << "Barang posisi ke-" << posisi << " : " << cur->namaBarang << " - Rp." << cur->hargaBarang << endl;
  }
}

void changeBarang( string namaBarang, int hargabarang, int posisi ) {

  if( isEmptyBarang() ) {
    cout << "Stack kosong" << endl;
  } else {
    int nomor = 1;
    cur = tail;
    while ( nomor < posisi ) {
      cur = cur->prev;
      nomor++;
    }
    cur->namaBarang = namaBarang;
    cur->hargaBarang = hargabarang;
  }
}

void popBarang() {

  del = tail;
  tail = tail->prev;
  tail->next = NULL;
  delete del;
}

void destroyBarang() {

  cur = head;
  while( cur != NULL ) {
    del = cur;
    cur = cur->next;
    head = head->next; 
    delete del;
  }
}





int main()
{
  
  pushArray("Matematika");
  displayArray();

  pushArray("Web Programming");
  displayArray();

  pushArray("Pemrograman Berbasis Objek");
  displayArray();

  pushArray("Sistem Operasi");
  displayArray();

  pushArray("Struktur Data");
  displayArray();

  pushArray("Basis Data");
  displayArray();

  popArray();
  displayArray();

  cout << "Apakah data full? " << isFull() << endl;
  cout << "Apakah data kosong? " << isEmpty() << endl;

  peekArray(3);

  cout << "Banyak data : " << countArray() << endl;

  changeArray( "Database System", 2 );
  displayArray();

  destroyArray();

  cout << "Apakah data full? " << isFull() << endl;
  cout << "Apakah data kosong? " << isEmpty() << endl;


  // Linked List

  pushBarang("RAM", 500000);

  pushBarang("Motherboard", 1000000);

  pushBarang("Monitor", 1800000);

  pushBarang("Joystick", 250000);

  pushBarang("Keyboard", 650000);
  displayBarang();
  
  pushBarang("Mouse", 1500000);
  displayBarang();

  cout << "Apakah data full? " << isFullBarang() << endl;
  cout << "Apakah data kosong? " << isEmptyBarang() << endl;
  cout << "Jumlah data? " << countBarang() << "\n\n" << endl;

  popBarang();
  displayBarang();

  peekBarang(3);

  changeBarang("Webcam", 750000, 2);
  displayBarang();

  destroyBarang();
  cout << "Apakah data full? " << isFullBarang() << endl;
  cout << "Apakah data kosong? " << isEmptyBarang() << endl;
  cout << "Jumlah data? " << countBarang() << "\n\n" << endl;


  
  return 0;
}