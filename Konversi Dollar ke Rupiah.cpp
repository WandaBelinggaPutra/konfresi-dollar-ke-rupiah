#include <stdio.h>
#include <conio.h>
int main()
{

long rupiah=14500,dollar,kurs;
printf("                                                     PROGRAM KONVERSI DOLLAR KE RUPIAH\n");
printf("                                                     BY JOHANES RAMADHAN NIM 311810283\n");
printf("                                                INSTITUT PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
printf("Masukkan nilai Dollar $USD : ");scanf("%d", &dollar);
kurs=rupiah*dollar;
printf("kurs =  %i * %i = Rp %i",dollar,rupiah,kurs);
getch();
} 

