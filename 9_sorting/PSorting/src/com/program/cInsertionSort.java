package com.program;

public class cInsertionSort {
  public static void main(String[] args) {
    int nilai[] = {90, 54, 67, 98, 76};
    insertionSortInt(nilai);

    double ipk[] = {3.5, 3.4, 2.7, 4.0, 3.3};
    insertionSortDouble(ipk);

    String nama[] = {"yunus", "abi", "budi", "siti", "angga"};
    insertionSortString(nama);

    char karakter[] ={'1', 'A', 'a', 'b', 'Z'};
    insertionSortChar(karakter);
  }

  // this procedure for integer
  public static void insertionSortInt(int[] bilangan) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (int b : bilangan) {
      System.out.print(b + ", ");
    }

    // algoritma
    for(int i = 1; i < bilangan.length; i++) {
      for(int j = i; j > 0; j--) {
        if(bilangan[j] < bilangan[j-1]) {
          // swap
          int tampungan = bilangan[j];
          bilangan[j] = bilangan[j-1];
          bilangan[j-1] = tampungan;
        }
      }
    }

    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (int b : bilangan) {
      System.out.print(b + ", ");
    }
  }

  // this procedure for double
  public static void insertionSortDouble(double[] angka) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (double a : angka) {
      System.out.print(a + ", ");
    }

    // algoritma
    for(int i = 1; i < angka.length; i++) {
      for(int j = i; j > 0; j--) {
        if(angka[j] < angka[j-1]) {
          // swap
          double tampungan = angka[j];
          angka[j] = angka[j-1];
          angka[j-1] = tampungan;
        }
      }
    }

    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (double a : angka) {
      System.out.print(a + ", ");
    }
  }

  // this procedure for string
  public static void insertionSortString(String[] kata) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (String k : kata) {
      System.out.print(k + ", ");
    }

    // algoritma
    for(int i = 1; i < kata.length; i++) {
      for(int j = i; j > 0; j--) {
        if(kata[j].compareTo(kata[j-1]) < 0 ) {
          // swap
          String tampungan = kata[j];
          kata[j] = kata[j-1];
          kata[j-1] = tampungan;
        }
      }
    }

    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (String k : kata) {
      System.out.print(k + ", ");
    }
  }

  // this procedure for char
  public static void insertionSortChar(char[] karakter) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for (char k : karakter) {
      System.out.print(k + ", ");
    }

    // algoritma
    for(int i = 1; i < karakter.length; i++) {
      for(int j = i; j > 0; j--) {
        if(karakter[j] < karakter[j-1]) {
          // swap
          char tampungan = karakter[j];
          karakter[j] = karakter[j-1];
          karakter[j-1] = tampungan;
        }
      }
    }

    // tampilkan sesudah
    System.out.println("\n\n==SESUDAH==");
    for (char k : karakter) {
      System.out.print(k + ", ");
    }
  }
}
