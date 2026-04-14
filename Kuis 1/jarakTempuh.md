## 1a. Total Jarak Tempuh
Time limit	`500 ms`

Memory limit	`26214 KB`

Description
-
Tom dan Jerry sedang berkendara untuk melakukan perjalanan wisata. Namun tiba-tiba odometer (alat yang digunakan di dalam mobil sebagai penunjuk jarak tempuh kendaraan) rusak, sehingga mereka tidak mengetahui sudah berapa kilometer jarak tempuhnya. Untungnya Jerry memiliki stopwatch sehingga mereka bisa mencatat kecepatan kendaraan dan total waktu mereka berkendara.

Sebagai contoh, catatan Jerry sebagai berikut:


| Kecepatan (km/jam) | Total Waktu Tempuh (jam) |
| :------: | :------: |
| 20 | 2 | 
| 30 | 6 |
| 10 | 7 |


Data ini menunjukkan bahwa mereka telah berkendara 2 jam dengan kecepatan 20 km/jam, kemudian 6-2=4 jam dengan kecepatan 30 km/jam, dan 7-6=1 jam dengan kecepatan 10 km/jam. Oleh karena itu, total jarak tempuh mereka adalah (2)(20) + (4)(30) + (1)(10) = 40 + 120 + 10 = 170 km.

Buatlah program untuk membantu mereka menghitung total jarak tempuh mereka berkendara.

Input
-
Baris pertama adalah sebuah bilangan bulat n, `1 ≤ n ≤ 100`, yang menyatakan banyaknya data kecepatan. Sebanyak n baris berikutnya adalah pasangan nilai kecepatan dan total waktu tempuh. Nilai kecepatan dan jarak tempuh dapat diimplementasikan dengan tipe data `int`. 

Output
-
Output program berupa sebuah bilangan bulat yang menyatakan total jarak tempuh, dan diakhiri dengan newline.

Sample Input
-
```
3
20 2
30 6
10 7
```

Sample Output
-
    170
