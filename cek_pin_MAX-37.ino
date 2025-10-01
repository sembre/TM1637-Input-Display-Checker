/*
  ------------------------------------------------------------------------
  Project   : TM1637 Input Display Checker
  Date      : 2024-08-09
  Author    : AGUS FITRIYANTO
  GitHub    : https://github.com/sembre
  License   : Creative Commons Attribution 4.0 International (CC BY 4.0)
  License URL: https://creativecommons.org/licenses/by/4.0/

  ------------------------------------------------------------------------
  🇮🇩 Bahasa Indonesia:
  Deskripsi :
  Kode ini membaca status dari sejumlah pin digital pada Arduino dan 
  menampilkan nomor pin yang aktif (terhubung ke GND) pada display 
  7-segmen TM1637. Selain itu, nomor tersebut juga akan ditampilkan 
  pada Serial Monitor.

  Hak Cipta & Lisensi:
  - Anda bebas menggunakan, membagikan, memodifikasi, dan mendistribusikan
    ulang kode ini untuk keperluan apa pun, termasuk komersial.
  - Syaratnya: Anda **wajib memberikan atribusi yang sesuai** kepada penulis
    asli (AGUS FITRIYANTO) dan menyertakan pernyataan lisensi ini.
  - Detail lisensi dapat dibaca di URL di atas.
  - Untuk update atau versi terbaru, kunjungi GitHub: https://github.com/sembre

  ------------------------------------------------------------------------
  🇬🇧 English Version:
  Description:
  This code reads the status of multiple digital pins on the Arduino and 
  displays the active pin number (connected to GND) on a TM1637 7-segment 
  display. The pin number is also printed on the Serial Monitor.

  Copyright & License:
  - You are free to use, share, modify, and redistribute this code for any 
    purpose, including commercial use.
  - Condition: You **must give appropriate credit** to the original author 
    (AGUS FITRIYANTO) and include this license statement.
  - For more details, please visit the license URL above.
  - For updates or the latest version, visit GitHub: https://github.com/sembre
  ------------------------------------------------------------------------
*/

// 2024-08-09 add serial monitor 

#include <TM1637Display.h>

// Konfigurasi pin CLK dan DIO pada modul TM1637
#define CLK_PIN A0
#define DIO_PIN A1

// Inisialisasi objek TM1637 dengan pin CLK dan DIO
TM1637Display tm1637(CLK_PIN, DIO_PIN);

// Deklarasi pin secara individu
const int pins[] = {
  22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
  32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
  42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
  52, 53,
  2,  3,  4,  5,  6
};

void setup() {
  // Inisialisasi TM1637
  tm1637.setBrightness(7); // Set brightness level (0 - 7)
  
  // Inisialisasi Serial Monitor
  Serial.begin(9600);

  // Deklarasi pin sebagai INPUT_PULLUP agar pin terbaca HIGH saat tidak tersambung ke GND
  for (int i = 0; i < sizeof(pins) / sizeof(pins[0]); i++) {
    pinMode(pins[i], INPUT_PULLUP);
  }
}

void loop() {
  // Cek setiap pin
  for (int i = 0; i < sizeof(pins) / sizeof(pins[0]); i++) {
    if (digitalRead(pins[i]) == LOW) {
      // Jika pin terhubung ke GND, tampilkan angka pada TM1637 display
      int valueToShow = i + 1; // Start numbering from 1
      tm1637.showNumberDecEx(valueToShow);

      // Tampilkan angka juga di Serial Monitor
      Serial.print("Pin ");
      Serial.print(pins[i]);
      Serial.print(" connected, displaying number: ");
      Serial.println(valueToShow);

      delay(1000); // Display for 1 second
      tm1637.clear(); // Clear the display after showing
      break; // Exit loop after detecting the first active pin
    }
  }
}
