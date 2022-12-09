#include <stdio.h>

int main()
{
    // Deklarasi variabel
    float suhu_awal, suhu_akhir, suhu_awal_celcius;
    int pilihan_awal, pilihan_akhir;

    // Meminta pengguna memasukkan suhu awal
    printf("Masukkan suhu awal: ");
    scanf("%f", &suhu_awal);

    // Meminta pengguna memilih skala suhu awal
    printf("Pilih skala suhu awal:\n");
    printf("1. Celcius\n");
    printf("2. Fahrenheit\n");
    printf("3. Reamur\n");
    printf("4. Kelvin\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan_awal);

    // Meminta pengguna memilih skala suhu akhir
    printf("Pilih skala suhu akhir:\n");
    printf("1. Celcius\n");
    printf("2. Fahrenheit\n");
    printf("3. Reamur\n");
    printf("4. Kelvin\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan_akhir);

    // Mengkonversi suhu awal ke suhu dalam skala celcius
    if (pilihan_awal == 1)
    {
        // Jika suhu awal sudah dalam skala celcius, tidak perlu dikonversi
        suhu_awal_celcius = suhu_awal;
    }
    else if (pilihan_awal == 2)
    {
        // Konversi dari Fahrenheit ke Celcius
        suhu_awal_celcius = (5.0 / 9.0) * (suhu_awal - 32);
    }
    else if (pilihan_awal == 3)
    {
        // Konversi dari Reamur ke Celcius
        suhu_awal_celcius = (5.0 / 4.0) * suhu_awal;
    }
        else if (pilihan_awal == 4)
    {
        // Konversi dari Kelvin ke Celcius
        suhu_awal_celcius = suhu_awal - 273.15;
    }

    // Mengkonversi suhu dalam skala celcius ke suhu akhir
    if (pilihan_akhir == 1)
    {
        // Jika suhu akhir dalam skala celcius, tidak perlu dikonversi
        suhu_akhir = suhu_awal_celcius;
    }
    else if (pilihan_akhir == 2)
    {
        // Konversi dari Celcius ke Fahrenheit
        suhu_akhir = (9.0 / 5.0) * suhu_awal_celcius + 32;
    }
    else if (pilihan_akhir == 3)
    {
        // Konversi dari Celcius ke Reamur
        suhu_akhir = (4.0 / 5.0) * suhu_awal_celcius;
    }
    else if (pilihan_akhir == 4)
    {
        // Konversi dari Celcius ke Kelvin
        suhu_akhir = suhu_awal_celcius + 273.15;
    }

    // Menampilkan suhu akhir yang telah dikonversi
    printf("Suhu akhir: %.2f\n", suhu_akhir);

    return 0;
}
