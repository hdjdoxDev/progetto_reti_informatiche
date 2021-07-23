#include "util.h"

int valid_port(int port)
{
    return (port > 0 && port <= 65536);
}

int is_between(int x, int a, int b)
{
    return (a > b) ? (x > a || x < b) : (x > a && x < b);
}

int valid_date_s(char *date)
{
    int d, m, y;
    if (sscanf(date, DATE_FORMAT, &y, &m, &d) != 3)
        return 0;
    return valid_date_i(d, m, y);
}

int valid_date_i(int d, int m, int y)
{
    if (y < MIN_YEAR || m < 1 || m > 12 || d < 1 || d > 31)
    {
        printf("Errore: data %d-%d-%d non valida\n", y, m, d);
        return 0;
    }
    return 1;
}

int in_time_interval(int d, int m, int y, char *from, char *to)
{
    int fd, fm, fy, td, tm, ty;
    sscanf(from, DATE_FORMAT, &fy, &fm, &fd);
    sscanf(to, DATE_FORMAT, &ty, &tm, &td);
    return (sooner(d, m, y, td, tm, ty) && sooner_or_eq(fd, fm, fy, d, m, y));
}

int sooner_or_eq(int d1, int m1, int y1, int d2, int m2, int y2)
{
    return (y1 < y2 || (y1 == y2 && (m1 < m2 || (m1 == m2 && (d1 <= d2)))));
}

int sooner(int d1, int m1, int y1, int d2, int m2, int y2)
{
    return (y1 < y2 || (y1 == y2 && (m1 < m2 || (m1 == m2 && (d1 < d2)))));
}

int file_exists(char *file)
{
    struct stat buff;
    return (stat(file, &buff) == 0);
}

int file_exists_i(int port, char type, char *dir, int d, int m, int y){
    char file[MAX_PATH_LEN + MAX_FILENAME_LEN + 1];
    file_name(file, port, type, dir, d, m, y);
    return file_exists(file);
}

int file_name(char *file, int port, char type, char *dir, int d, int m, int y)
{
    return sprintf(file, FILE_FORMAT, REGISTERS, port, type, dir, y, m, d);
}

int create_path(char *path)
{
    char command[MAX_PATH_LEN + 10];
    sprintf(command, "mkdir -p %s", path);
    return system(command);
}
