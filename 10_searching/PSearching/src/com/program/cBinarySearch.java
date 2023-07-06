package com.program;

public class cBinarySearch {
  public static void main(String[] args) {

    int[] nilai = { 66, 77, 80, 84, 88, 99, 100 };
    binarySearchInt(nilai, 1);

    String[] nama = {"Siti", "Rudi", "Lina", "Gilang", "Budi"};
    binarySearchString(nama, "siti");
  }

  // procedure binarySearchInt
  public static void binarySearchInt(int[] angka, int key) {
    int low = 0, high = angka.length-1, med;
    boolean status = false;

    while( low <= high ) {
      med = (low + high) / 2;

      // pengecekan apakah datanya ditemukan atau tidak
      if(key == angka[med]) {
        // jika datanya ditemukan
        System.out.println(key + " ditemukan pada posisi ke-" + (med + 1) + " dan pada index ke-" + med);
        status = true;
        break;
      } else {
        // jika datanya tidak ditemukan
        // pembagian array apakah lebih besar dari key / lebih kecil dari key
        if( key > angka[med] ) {
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
      System.out.println(key + " tidak ditemukan dalam array");
    }
  }

  // procedure binarySearchString
  public static void binarySearchString(String[] kata, String key) {
    int low = 0, high = kata.length-1, med;
    boolean status = false;

    while( low <= high ) {
      med = (low + high) / 2;

      // pengecekan apakah datanya ditemukan atau tidak
      if(key.equalsIgnoreCase(kata[med])) {
        // jika datanya ditemukan
        System.out.println(key + " ditemukan pada posisi ke-" + (med + 1) + " dan pada index ke-" + med);
        status = true;
        break;
      } else {
        // jika datanya tidak ditemukan
        // pembagian array apakah lebih besar dari key / lebih kecil dari key
        if( key.compareToIgnoreCase(kata[med]) < 0 ) {
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
      System.out.println(key + " tidak ditemukan dalam array");
    }
  }
}
