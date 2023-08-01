package com.program;

public class cSelectionSort {
  public static void main(String[] args) {
    int nilai[] = { 69, 89, 31, 56, 99 };
    selectionSortInt(nilai);

    double ipk[] = { 4.0, 1.1, 3.2, 3.9, 2.4 };
    selectionSortDouble(ipk);

    String nama[] = {"santi", "sinta", "budi", "reni", "siti"};
    selectionSortString(nama);

    char nilaiMutu[] = {'c', 'a', 'e', 'b', 'd'};
    selectionSortChar(nilaiMutu);
  }

  // this procedure for integer
  public static void selectionSortInt(int[] bilangan) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (int b : bilangan) {
      System.out.print(b + ", ");
    }

    // algoritma
    for (int i = 0; i < bilangan.length; i++) {
      int indexArray = i;
      for (int j = i; j < bilangan.length; j++) {
        if (bilangan[indexArray] < bilangan[j]) {
          indexArray = j;
        }
      }
      // swap / tukar nilai
      int tampungan = bilangan[i];
      bilangan[i] = bilangan[indexArray];
      bilangan[indexArray] = tampungan;
    }

    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (int b : bilangan) {
      System.out.print(b + ", ");
    }
  }

  // this procedure for double
  public static void selectionSortDouble(double[] angka) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (double a : angka) {
      System.out.print(a + ", ");
    }

    // algoritma
    for (int i = 0; i < angka.length; i++) {
      int indexArray = i;
      for (int j = i; j < angka.length; j++) {
        if (angka[indexArray] < angka[j]) {
          indexArray = j;
        }
      }
      // swap / tukar nilai
      double tampungan = angka[i];
      angka[i] = angka[indexArray];
      angka[indexArray] = tampungan;
    }

    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (double a : angka) {
      System.out.print(a + ", ");
    }
  }

  // this procedure for String
  public static void selectionSortString(String[] kata) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (String k : kata) {
      System.out.print(k + ", ");
    }

    // algoritma
    for (int i = 0; i < kata.length; i++) {
      int indexArray = i;
      for (int j = i; j < kata.length; j++) {
        if (kata[indexArray].compareTo(kata[j]) < 0) {
          indexArray = j;
        }
      }
      // swap / tukar nilai
      String tampungan = kata[i];
      kata[i] = kata[indexArray];
      kata[indexArray] = tampungan;
    }

    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (String k : kata) {
      System.out.print(k + ", ");
    }
  }

  // this procedure for char
  public static void selectionSortChar(char[] karakter) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (char k : karakter) {
      System.out.print(k + ", ");
    }

    // algoritma
    for (int i = 0; i < karakter.length; i++) {
      int indexArray = i;
      for (int j = i; j < karakter.length; j++) {
        if (karakter[indexArray] < karakter[j]) {
          indexArray = j;
        }
      }
      // swap / tukar nilai
      char tampungan = karakter[i];
      karakter[i] = karakter[indexArray];
      karakter[indexArray] = tampungan;
    }

    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (char k : karakter) {
      System.out.print(k + ", ");
    }
  }
}
