package com.program;

public class cSequentialSearch {
  public static void main(String[] args) {

    String[] nama = { "mamat", "budi", "siti", "wawan" };
    sequentialSearchStr(nama, "dio");

  }

  public static void sequentialSearchStr(String[] data, String keyword) {
    // untuk mengecek apakah data ditemukan
    boolean status = false;
    for (int i = 0; i < data.length; i++) {
      // cek apakah data ditemukan
      // equalsIgnoreCase(keyword) : membandingkan String dan tidak memperdulikan huruf kecil/besar
      // equals(keyword) : membandingkan String dan memperhatikan huruf kecil/besar
      if (keyword.equalsIgnoreCase(data[i])) {
        System.out.println(keyword + " ditemukan pada posisi ke-" + (i + 1) + " dan pada index ke-" + i);
        status = true;
        break;
      }
    }
    // ketika data tidak ditemukan
    if (status == false) {
      System.out.println(keyword + " tidak ditemukan");
    }
  }
}
