#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Turkish");

    // Türkçe karakterler
    printf("çğıiöşü - ÇĞIİÖŞÜ\n");

    getch();
    return 0;
}
