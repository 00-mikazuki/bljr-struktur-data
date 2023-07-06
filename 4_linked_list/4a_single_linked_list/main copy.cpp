#include <iostream>

using namespace std;


// deklarasi single linked list
struct Buku
{
  // komponen / member
  string judul, pengarang;
  int tahunTerbit;

  Buku *next;

};

Buku *head, *tail, *cur;

void createSingleLinkedList (string judul, string pengarang, int tB) {
  head = new Buku();
  head->judul = judul;
  head->pengarang = pengarang;
  head->tahunTerbit = tB;
  head->next = NULL;
  tail = head;

}

void printSingleLinkedList () {
  cur = head;
  while (cur != NULL)
  {
    cout << "Judul Buku : " << cur->judul << endl;
    cout << "Pengarang Buku : " << cur->pengarang << endl;
    cout << "Tahun Terbit Buku : " << cur->tahunTerbit << endl;

    cur = cur->next;

  }
}

int main()
{
  
  // inisialisasi single linked list
  Buku *node1, *node2, *node3;

  // node1 = (Buku*) malloc(sizeof(Buku));
  // node1 = new Buku(); // metode OOP
  node1 = new Buku();
  node2 = new Buku();
  node3 = new Buku();

  // Pengisian node 1
  node1->judul = "Matematika";
  node1->pengarang = "Ahli Matematika";
  node1->tahunTerbit = 1995;
  node1->next = node2;

  // Pengisian node 2
  node2->judul = "Bahasa Indo";
  node2->pengarang = "Ahli B. Indo";
  node2->tahunTerbit = 1945;
  node2->next = node3;

  // Pengisian node 3
  node3->judul = "Manga";
  node3->pengarang = "Masashi";
  node3->tahunTerbit = 1999;
  node3->next = NULL;

  // print single linked list

  Buku *cur;
  cur = node1;
  while (cur != NULL)
  {
    cout << "Judul Buku : " << cur->judul << endl;
    cout << "Pengarang Buku : " << cur->pengarang << endl;
    cout << "Tahun Terbit Buku : " << cur->tahunTerbit << endl;

    cur = cur->next;

  }
  





  return 0;
}

