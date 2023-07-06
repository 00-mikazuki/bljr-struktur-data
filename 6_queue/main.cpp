#include <iostream>
using namespace std;


// ARRAY

// array Antrian
int maksimalAntrianArray = 5, front = 0, back = 0;
// ruang antrian array
string antrianAtm[5];

// isFull / cek data penuh atau tidak
bool isFullArray() {

  if( back == maksimalAntrianArray ) {
    return true;
  } else {
    return false;
  }
}

// isEmpty
bool isEmptyArray() {

  if( back == 0 ) {
    return true;
  } else {
    return false;
  }
}

// enqueue / penambahan data antrian
void enqueueArray( string data ) {

  if( isFullArray() ) {
    cout << "Antrian penuh" << endl;
  } else {
    // cek apakah data kosong
    if( isEmptyArray() ) {
      // jika antrian kosong
      antrianAtm[0] = data;
      front++;
      back++;
    } else {
      // jika tidak kosong
      antrianAtm[back] = data;
      back++;
    }
  }
}

// dequeue / penghapusan data depan
void dequeueArray() {

  if( isEmptyArray() ) {
    cout << "Antrian kosong" << endl;
  } else {
    for( int i = 0; i < back; i++ ) {
      if( back == 1 ) {
        antrianAtm[back-1] = "";
      } else {
        antrianAtm[i] = antrianAtm[i+1];
      }
    }
    back--;
  }
}

// countArray / menghitung banyak data yg ngantri
int countArray() {

  if( isEmptyArray() ) {
    return 0;
  } else if( isFullArray() ) {
    return maksimalAntrianArray;
  } else {
    return back;
  }
}

// destroy / clear
void destroyArray() {

  if( isEmptyArray() ) {
    cout << "Antrian kosong" << endl;
  } else {
    for( int i = 0; i < maksimalAntrianArray; i++ ) {
      if( back > 1 ) {
        antrianAtm[back-1] = "";
        back--;
      } else if( back == 1 ) {
        antrianAtm[back-1] = "";
        back = 0;
        front = 0;
      }
    }
  }
}

// Display / view
void viewArray() {

  cout << "Jumlah data antrian : " << countArray() << " data." << endl;
  cout << "Data Antrian ATM :" << endl;
  if( isEmptyArray() ) {
    cout << "Antrian kosong" << endl;
  } else {
    for( int i = 0; i < maksimalAntrianArray; i++ ) {
      // cek pakah ruang kosong
      if( antrianAtm[i] != "" ) {
        // jika ruang tidak kosong
        cout << i+1 << ". " << antrianAtm[i] << endl;
      } else {
        // jika kosong
        cout << i+1 << ". (kosong)" << endl;
      }
    }
  }
  cout << "\n" << endl;
}



// LINKED LIST

// siapkan ruang antrian
struct antrianAtmLL {
  // data / member
  string nama;
  int umur;

  // pointer next
  antrianAtmLL *next;
};

int maksimalAntrianLinkedList = 5;
antrianAtmLL *head, *tail, *cur, *del, *newNode;

// Count Linked List
int countLinkedList()
{
  if( head == NULL ) {
    return 0;
  } else {

    int banyak = 0;
    cur = head;
    while( cur != NULL ) {
      cur = cur->next;
      banyak++;
    }
    return banyak;
  }
}

// isFull Linked List
bool isFullLinkedList() 
{
  if( countLinkedList() == maksimalAntrianLinkedList ) {
    return true;
  } else {
    return false;
  }
}

// isEmpty Linked List
bool isEmptyLinkedList()
{
  if( countLinkedList() == 0 ) {
    return true;
  } else {
    return false;
  }
}

// enqueue Linked List
void enqueueLinkedlist( string nama, int umur )
{
  if( isFullLinkedList() ) {
    cout << "Antrian penuh" << endl;
  } else {
    if( isEmptyLinkedList() ) {
      head = new antrianAtmLL();
      head->nama = nama;
      head->umur = umur;
      head-> next = NULL;
      tail = head;
    } else {
      newNode = new antrianAtmLL();
      newNode->nama = nama;
      newNode->umur = umur;
      newNode-> next = NULL;
      tail->next = newNode;
      tail = newNode;
    }
  }
}

// dequeue Linked List
void dequeueLinkedList()
{
  if( isEmptyLinkedList() ) {
    cout << "Data antrian kosong" << endl;
  } else {
    del = head;
    head = head->next;
    del->next = NULL;
    delete del;
  }
}

// destroy / clear Linked List
void destroyLinkedList()
{
  if( isEmptyLinkedList() ) {
    cout << "Data antrian kosong" << endl;
  } else {
    cur = head;
    while( cur != NULL ) {
      del = cur;
      cur = cur->next;
      head = del->next;
      // del->next = NULL;
      delete del;
    }
    // head = NULL;
    // tail = NULL;
  }
}

// DIsplay / View Linked List
void displayLinkedList()
{
  cout << "Data Antrian : " << endl;
  if( isEmptyLinkedList() ) {
    cout << "Data antrian kosong" << endl;
  } else {
    cout << "Banyak data antrian : " << countLinkedList() << endl;
    cur = head;
    int nomor = 1;
    while( nomor <= maksimalAntrianLinkedList ) {
      if( cur != NULL ) {
        cout << nomor << ". " << cur->nama << " - " << cur->umur << " tahun." << endl;
        cur = cur->next;
      } else {
        cout << nomor << ". " << "(kosong)" << endl;
      }
      nomor++;
    }
  }
  cout << "\n" << endl;
}






int main()
{
  
  // tambahData
  // enqueueArray("Mamat");
  // viewArray();

  // enqueueArray("Udin");
  // viewArray();

  // enqueueArray("Wati");
  // enqueueArray("Bujank");
  // enqueueArray("Santi");
  // viewArray();

  // enqueueArray("Contoh");
  // viewArray();

  // dequeueArray();
  // viewArray();

  // dequeueArray();
  // viewArray();
  
  // destroyArray();
  // viewArray();

  enqueueLinkedlist("Joni", 19);
  displayLinkedList();

  enqueueLinkedlist("Mamat", 20);
  enqueueLinkedlist("Siti", 18);
  enqueueLinkedlist("Bambang", 20);
  enqueueLinkedlist("Rudi", 23);
  displayLinkedList();

  enqueueLinkedlist("examp", 23);
  displayLinkedList();

  dequeueLinkedList();
  displayLinkedList();

  destroyLinkedList();
  displayLinkedList();

  cout << countLinkedList();




  return 0;
}
