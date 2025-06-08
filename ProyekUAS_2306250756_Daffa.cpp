#include <stdio.h>
#include <math.h>

// Definisi parameter fisika
#define m 68.1    // massa (kg)
#define g 9.8     // gravitasi (m/s^2)
#define c 12.5    // koefisien hambat (kg/s)

// Definisi parameter numerik
#define t_max 20.0   // waktu maksimum simulasi (s)
#define dt 0.1       // step size (s)

// Fungsi dv/dt = g - (c/m) * v
double f(double v) {
    return g - (c / m) * v;
}

int main() {
    double t = 0.0;     // waktu awal
    double v = 0.0;     // kecepatan awal (v(0) = 0)

    // Cetak header tabel hasil
    printf("+----------------------------+\n");
    printf("| t (s)    | v (m/s)        |\n");
    printf("+----------------------------+\n");

    // Iterasi Runge-Kutta 4
    while (t <= t_max + 1e-9) {   // +1e-9 untuk menghindari error floating point
        // Cetak hasil saat ini
        printf("| %-8.2f | %-14.6f |\n", t, v);

        // Hitung 4 koefisien RK4
        double k1 = f(v);
        double k2 = f(v + 0.5 * dt * k1);
        double k3 = f(v + 0.5 * dt * k2);
        double k4 = f(v + dt * k3);

        // Update nilai v (kecepatan) untuk langkah berikutnya
        v = v + (dt / 6.0) * (k1 + 2*k2 + 2*k3 + k4);

        // Update waktu
        t = t + dt;
    }

    printf("+----------------------------+\n");

    // Hitung dan tampilkan kecepatan terminal teoritis
    double v_terminal_theory = sqrt((m * g) / c);
    printf("\nKecepatan terminal teoritis: %.6f m/s\n", v_terminal_theory);

    return 0;
}
