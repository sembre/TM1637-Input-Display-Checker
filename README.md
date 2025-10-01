# TM1637 Input Display Checker

## 📌 Deskripsi (Bahasa Indonesia)

Proyek ini berfungsi untuk membaca status dari sejumlah pin digital pada board **Arduino** dan menampilkan nomor pin yang **aktif (terhubung ke GND)** ke **7-segmen display TM1637**.  
Selain itu, nomor pin yang aktif juga akan ditampilkan pada **Serial Monitor**.

🔌 **Fungsi utama:**
- Memeriksa banyak pin input digital secara otomatis.
- Menampilkan nomor pin yang aktif pada **TM1637 7-segmen**.
- Mengirim informasi pin aktif ke **Serial Monitor**.
- Menggunakan **INPUT_PULLUP** sehingga tidak memerlukan resistor eksternal.

---

## 📘 Description (English)

This project reads the status of multiple digital input pins on an **Arduino** board and displays the number of the pin that is **active (connected to GND)** on a **TM1637 7-segment display**.  
Additionally, the active pin number is also printed to the **Serial Monitor**.

🔌 **Main features:**
- Automatically scans multiple digital input pins.
- Displays the active pin number on a **TM1637 display**.
- Sends active pin info to the **Serial Monitor**.
- Uses **INPUT_PULLUP** to eliminate the need for external resistors.

---

## 🛠️ Hardware Requirements

- Arduino Mega / Uno  
- TM1637 7-segment display module  
- Jumper cables  
- GND switch or test pins  

---

## 🔌 Wiring (TM1637)

| TM1637 Pin | Arduino Pin |
|------------|--------------|
| CLK        | A0           |
| DIO        | A1           |
| VCC        | 5V           |
| GND        | GND          |

> ⚠️ Setiap pin input menggunakan `INPUT_PULLUP`, jadi cukup hubungkan ke **GND** untuk membacanya sebagai aktif.

---

## 📁 File

- `cek_pin_MAX-37.ino` – File utama Arduino yang menjalankan logika pembacaan pin dan tampilan TM1637.

---

## ▶️ Cara Menggunakan (Usage)

1. Sambungkan TM1637 ke Arduino sesuai tabel wiring di atas.  
2. Upload kode `cek_pin_MAX-37.ino` ke Arduino menggunakan Arduino IDE.  
3. Buka **Serial Monitor** dengan baud rate `9600`.  
4. Hubungkan salah satu pin input ke **GND**.  
5. Nomor pin aktif akan muncul di **display TM1637** dan **Serial Monitor**.

---

## 📜 Lisensi (License)

**Creative Commons Attribution 4.0 International (CC BY 4.0)**  
🔗 [https://creativecommons.org/licenses/by/4.0/](https://creativecommons.org/licenses/by/4.0/)

📌 Anda **bebas** menggunakan, membagikan, memodifikasi, dan mendistribusikan kode ini — termasuk untuk tujuan komersial — **selama mencantumkan atribusi** kepada penulis asli.

📎 **Atribusi wajib:**  
Penulis: [AGUS FITRIYANTO](https://github.com/sembre)  
GitHub: [https://github.com/sembre](https://github.com/sembre)

---

## 🤝 Kontribusi (Contributing)

Pull request dan kontribusi sangat diterima!  
Jika Anda menemukan bug atau ingin menambahkan fitur baru, silakan buat *issue* atau kirim *PR* di repository ini.

---

## 📧 Kontak (Contact)

📍 Author: **AGUS FITRIYANTO**  
🔗 GitHub: [https://github.com/sembre](https://github.com/sembre)  

---

✨ **Happy coding and hacking!**

