# Proyek UAS Komputasi Numerik

## Application of Runge-Kutta Method to Determine Terminal Velocity in Free Fall with Air Resistance

**Nama:**  
- Daffa Bagus Dhiananto (2306250756)

## Deskripsi

Program ini mengimplementasikan **metode Runge-Kutta Orde 4 (RK4)** dalam bahasa C untuk menyelesaikan **persamaan diferensial** yang merepresentasikan perubahan kecepatan benda yang jatuh bebas dengan pengaruh **hambatan udara**.  

Persamaan yang diselesaikan adalah:  
𝑑𝑣/𝑑𝑡 = 𝑔 − 𝑐/𝑚 𝑣

Tujuan program adalah untuk menghitung **kecepatan benda sebagai fungsi waktu** hingga mendekati **kecepatan terminal** \( v_t \), yaitu saat gaya gravitasi dan gaya hambatan udara berada dalam keadaan seimbang.  

Program menerima parameter fisika nyata dan menghasilkan output tabel kecepatan terhadap waktu, serta membandingkan hasil numerik dengan **kecepatan terminal teoritis**.

## Fitur

- Implementasi metode **Runge-Kutta Orde 4** untuk menyelesaikan ODE
- Studi kasus: **gerak jatuh bebas dengan hambatan udara**
- Menampilkan **tabel kecepatan vs waktu** secara real-time
- **Perbandingan hasil numerik dengan kecepatan terminal teoritis**
- Parameter fisika dapat dimodifikasi langsung di dalam kode sumber

## Cara Menjalankan

1. **Kompilasi Program**   
Gunakan compiler C seperti gcc:
```bash
gcc -o proyek_uas ProyekUAS_2306250756_Daffa.cpp -lm
```

2. **Jalankan Program**
```bash
./proyek_uas
```

3. **Output**   
Program akan menampilkan:
- Tabel waktu (t) dan kecepatan (v)
- Kecepatan terminal teoritis sebagai pembanding

## Struktur File
- ProyekUAS_2306250756_Daffa.cpp — File utama program berisi implementasi metode Runge-Kutta Orde 4 dan fungsi ODE yang dianalisis
- README.md — Dokumentasi dan petunjuk penggunaan
- ProyekUAS_2306250756_Daffa.pdf — Laporan lengkap proyek UAS

## Referensi
- [1] S. C. Chapra dan R. P. Canale, Numerical Methods for Engineers, Edisi ke-7, McGraw-Hill, 2015.
- [2] R. Nave, “Fluid Friction,” Gsu.edu, 2019. http://hyperphysics.phy-astr.gsu.edu/hbase/airfri2.html
- [3] R. L. Burden dan J. D. Faires, Numerical Analysis, 9th Edition, Brooks/Cole, Cengage Learning, 2011.
- [4] E. Hairer, S. P. Nørsett, and G. Wanner, Solving Ordinary Differential Equations I: Nonstiff Problems, 2nd Edition, Springer-Verlag, 2009.
