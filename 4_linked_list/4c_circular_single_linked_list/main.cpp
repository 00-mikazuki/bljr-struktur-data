#include <iostream>
using namespace std;

// Deklarasi struktur Circular Single Linked List
struct Mahasiswa {
  string npm, nama, jurusan;

  Mahasiswa *next;
};

Mahasiswa *head, *tail, *newNode, *cur, *del;

// Create Circular Single Linked List
void createCircularSingleLinkedList( string dataBaru[3] ) {

  head = new Mahasiswa();
  head->npm = dataBaru[0];
  head->nama = dataBaru[1];
  head->jurusan = dataBaru[2];
  tail = head;
  tail->next = head;
  // head->next = tail;
}

// Add First
void addFirst ( string data[3] ) {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    newNode = new Mahasiswa();
    newNode->npm = data[0];
    newNode->nama = data[1];
    newNode->jurusan = data[2];
    newNode->next = head;
    tail->next = newNode;
    head = newNode;
  }
}

// Add Last
void addLast ( string data[3] ) {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    newNode = new Mahasiswa();
    newNode->npm = data[0];
    newNode->nama = data[1];
    newNode->jurusan = data[2];
    newNode->next = head;
    tail->next = newNode;
    tail = newNode;
  }
}

// Add Middle
void addMiddle( string data[3], int posisi ) {
  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    if ( posisi == 1 ){
      cout << "Posisi 1 bukan posisi tengah" << endl;
    } else {
      newNode = new Mahasiswa();
      newNode->npm = data[0];
      newNode->nama = data[1];
      newNode->jurusan = data[2];

      // tranversing
      int nomor = 1;
      cur = head;
      while ( nomor < posisi-1 ) {
        cur = cur->next;
        nomor++;
      }
      newNode->next = cur->next;
      cur->next = newNode;
    }
  }
}

// Remove First
void removeFirst() {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    del = head;
    head = head->next;
    tail->next = head;
    delete del;
  }
}

// Remove Last
void removeLast() {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    del = tail;
    cur = head;

    while( cur->next != tail ) {
      cur = cur->next;
    }
    tail = cur;
    tail->next = head;
    delete del;
  }
}

// Remove Middle
void removeMiddle( int posisi ) {
  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    if ( posisi == 1 ){
      cout << "Posisi 1 bukan posisi tengah" << endl;
    } else {
      int nomor = 1;
      cur = head;
      while ( nomor < posisi-1 ) {
        cur = cur->next;
        nomor++;
      }
      // if ( cur->next == head ) {
      //   del = head;
      //   cur->next = head->next;
      //   delete del;
      // } else if ( cur->next == tail ) {
      //   del = tail;
      //   cur->next = tail->next;
      //   delete del;
      // } else {
      del = cur->next;
      cur->next = del->next;
      delete del;
      
    }
  }
}


void printCircular() {

  if ( head == NULL ) {
    cout << "Buat Linked List dahulu" << endl;
  } else {
    cout << "Data Mahasiswa " << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "| NPM\t\t| Nama\t\t| Jurusan\t\t|" << endl;
    cout << "---------------------------------------------------------" << endl;
    cur = head;
    while ( cur->next != head ) {
      // print
      cout << "| " << cur->npm << "\t| " << cur->nama << "\t| " << cur->jurusan << "\t\t|" << endl;
      cur = cur->next;
    }
    cout << "| " << cur->npm << "\t| " << cur->nama << "\t| " << cur->jurusan << "\t\t|" << endl;
    cout << "---------------------------------------------------------\n" << endl;
  }
}

int main()
{
  string dataBaru[3] = {"220411100066", "Juan Axl", "Informatika"};
  createCircularSingleLinkedList(dataBaru);
  printCircular();

  string data[3] = {"220411100077", "Juan Dio", "Informatika"};
  addFirst(data);
  printCircular();

  string data2[3] = {"220411100088", "Zaka Putra", "Sistem Informasi"};
  addLast(data2);
  printCircular();

  // removeFirst();
  // printCircular();

  // removeLast();
  // printCircular();

  string data3[3] = {"220411100099", "Axl Dio", "Teknik Elektro"};
  addMiddle(data3, 5);
  printCircular();

  removeMiddle(5);
  printCircular();




  return 0;
}
