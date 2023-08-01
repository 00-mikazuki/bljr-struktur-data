package com.program;

public class cBubbleSort {
  public static void main(String[] args) {
    int nilai[] = {99, 76, 87, 69, 89};
    bubbleSortASCInt(nilai);

    double[] ipk = {1.4, 4.0, 2.4, 3.4};
    bubbleSortASCDouble(ipk);

    String[] nama = {"budi", "mamat", "wawan", "siti"};
    bubbleSortASCString(nama);
    
    char[] karakter = {'a', 'A', '1', 'z', 'f'};
    bubbleSortASCChar(karakter);
  }

  // this procedure for integer
  public static void bubbleSortASCInt( int bilangan[] ) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for( int bil : bilangan ) {
      System.out.print(bil + ", ");
    }

    // algoritma
    for(int i = 0; i < bilangan.length; i++) {
      for(int j = 0; j < (bilangan.length - i - 1); j++) {
        // jika nilai saat ini lebih besar daripada nilai selanjutnya
        if(bilangan[j] > bilangan[j+1]) {
          // maka ditukar
          int tampungan = bilangan[j];
          bilangan[j] = bilangan[j+1];
          bilangan[j+1] = tampungan;
        }
      }
    }

    // tampilkan sesudah
    System.out.println("\n==SESUDAH==");
    for( int bil : bilangan ) {
      System.out.print(bil + ", ");
    }
  }

  // this procedure for double
  public static void bubbleSortASCDouble( double angka[] ) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for( double a : angka ) {
      System.out.print(a + ", ");
    }

    // algoritma
    for(int i = 0; i < angka.length; i++) {
      for(int j = 0; j < (angka.length - i - 1); j++) {
        // jika nilai saat ini lebih besar daripada nilai selanjutnya
        if(angka[j] > angka[j+1]) {
          // maka ditukar
          double tampungan = angka[j];
          angka[j] = angka[j+1];
          angka[j+1] = tampungan;
        }
      }
    }

    // tampilkan sesudah
    System.out.println("\n==SESUDAH==");
    for( double a : angka ) {
      System.out.print(a + ", ");
    }
  }

  // this procedure for String
  public static void bubbleSortASCString( String kata[] ) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for( String k : kata ) {
      System.out.print(k + ", ");
    }

    // algoritma
    for(int i = 0; i < kata.length; i++) {
      for(int j = 0; j < (kata.length - i - 1); j++) {
        // jika nilai saat ini lebih besar daripada nilai selanjutnya
        if(kata[j].compareTo(kata[j+1]) > 0 ) {
          // maka ditukar
          String tampungan = kata[j];
          kata[j] = kata[j+1];
          kata[j+1] = tampungan;
        }
      }
    }

    // tampilkan sesudah
    System.out.println("\n==SESUDAH==");
    for( String k : kata ) {
      System.out.print(k + ", ");
    }
  }

  // this procedure for char
  public static void bubbleSortASCChar( char huruf[] ) {
    // tampilkan sebelum
    System.out.println("\n\n==SEBELUM==");
    for( char k : huruf ) {
      System.out.print(k + ", ");
    }

    // algoritma
    for(int i = 0; i < huruf.length; i++) {
      for(int j = 0; j < (huruf.length - i - 1); j++) {
        // jika nilai saat ini lebih besar daripada nilai selanjutnya
        if(huruf[j] > huruf[j+1]) {
          // maka ditukar
          char tampungan = huruf[j];
          huruf[j] = huruf[j+1];
          huruf[j+1] = tampungan;
        }
      }
    }

    // tampilkan sesudah
    System.out.println("\n==SESUDAH==");
    for( char k : huruf ) {
      System.out.print(k + ", ");
    }
  }
}
