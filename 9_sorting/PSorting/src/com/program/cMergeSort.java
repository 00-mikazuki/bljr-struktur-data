package com.program;

public class cMergeSort {
  public static void main(String[] args) {
    int nilai[] = {66, 43, 90, 76, 87, 21};
    mergeSortInt(nilai);
  }

  // this procedure for integer
  public static void mergeSortInt(int[] bilangan) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (int b : bilangan) {
      System.out.print(b + ", ");
    }
    
    // algoritma
    bilangan = pisahInt(bilangan);
    
    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (int b : bilangan) {
      System.out.print(b + ", ");
    }
  }

  // function pisahInt
  public static int[] pisahInt(int[] bilangan) {
    // jika data sudah menjadi satuan
    if(bilangan.length <= 1) {
      return bilangan;
    }

    int nilaiTengah = bilangan.length/2;
    int[] kiri = new int[nilaiTengah];
    int[] kanan;

    // cek apakah data array berjumlah ganjil / genap
    if(bilangan.length % 2 == 0) {
      // jika genap
      kanan = new int[nilaiTengah];
    } else {
      // jika ganjil
      kanan = new int[nilaiTengah + 1];
    }

    // isi array sisi kiri
    for(int i = 0; i < kiri.length; i ++) {
      kiri[i] = bilangan[i];
    }
    
    // isi array sisi kanan
    for(int i = 0; i < kanan.length; i ++) {
      kanan[i] = bilangan[nilaiTengah + i];
    }

    // lakukan pemanggilan fungsi ini untuk memisah sisi kanan dan kiri lagi
    kiri = pisahInt(kiri);
    kanan = pisahInt(kanan);

    // array untuk menampung pengembalian dari fungsi gabung
    int hasil[] = new int[bilangan.length];

    // isi array hasil dari data yang sudah digabung
    hasil = gabungInt(kiri, kanan);

    // kembalikan array hasil
    return hasil;
  }

  // function gabungInt
  public static int[] gabungInt(int[] kiri, int[] kanan) {
    // array untuk menampung data dari sisi kiri dan kanan yang sudah diurutkan
    int[] hasilGabung = new int[kiri.length + kanan.length];

    // penanda indexKiri, indexKanan, dan indexHasilGabung
    int indexKiri = 0, indexKanan = 0, indexHasilGabung = 0;

    // perulangan untuk mengisi array hasil gabung
    while (indexKiri < kiri.length || indexKanan < kanan.length) {
      // cek apakah sisi kiri dan kanan masih ada / belum dibandingkan
      if(indexKiri < kiri.length && indexKanan < kanan.length) {
        if(kiri[indexKiri] < kanan[indexKanan]) {
          // jika data yg kiri lebih kecil dari data yg kanan
          hasilGabung[indexHasilGabung] = kiri[indexKiri];
          indexHasilGabung++;
          indexKiri++;
        } else {
          hasilGabung[indexHasilGabung] = kanan[indexKanan];
          indexHasilGabung++;
          indexKanan++;
        }
      } else if(indexKiri < kiri.length) {
        // jika hanya sisi kiri saja yang masih tersedia
        hasilGabung[indexHasilGabung] = kiri[indexKiri];
        indexHasilGabung++;
        indexKiri++;
      } else if(indexKanan < kanan.length) {
        // jika hanya sisi kanan saja yang masih tersedia
        hasilGabung[indexHasilGabung] = kanan[indexKanan];
        indexHasilGabung++;
        indexKanan++;
      }
    }

    // kembalikan nilai array gabung
    return hasilGabung;
  }
}
