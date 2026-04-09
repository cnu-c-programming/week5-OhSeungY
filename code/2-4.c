#include <stdio.h>
#include <ctype.h>
 
long my_strtol(char *str, char **endptr){
    long res = 0;

    while(isdigit(*str)){
        res *= 10;
        res += *str - '0';
        str = str + 1;
    }

    *endptr = str;

    return res;
}
int main() {
    char str[] = "2026hello";
    char *end;

    long val = my_strtol(str, &end);

    printf("%ld %s\n", val, end);

    return 0;
}
