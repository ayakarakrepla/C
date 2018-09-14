#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mysql.h>
#include <conio.h>

// Bağlantı Parametreleri
static char *host           = "localhost";
static char *user           = "root";
static char *pass           = "";
static char *dbname         = "test";
unsigned int port           = 3306;
static char *unix_socket    = NULL;
unsigned int flag           = 0;

int main(){
    int connect;
    MYSQL *conn;
    conn = mysql_init(NULL);

    // Veritabanı bağlantısı yapma
    connect = mysql_real_connect(conn, host, user, pass, dbname, port, unix_socket, flag);
    if (!connect){
        fprintf(stderr, "Hata: %s [%d]\n", mysql_error(conn), mysql_errno(conn));
        getch();
        exit(1);
    }
    printf("Baglanti basariyla saglandi!\n");

    // Bağlantıyı sonlandırma
    mysql_close(conn);

    getch();
    return 0;
}
