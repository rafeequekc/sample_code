
#include <stdio.h>

#ifdef PARAMETER_NAME
const char * name = "Rafeeque";
#else
const char * name = "Unknown";
#endif

int main(){
    printf(" My name is %s\n", name);
    printf(" I amde change here %s\n", name);
    printf(" I amde 2nd change here %s\n", name);
    printf(" I amde 3rd change here %s\n", name);
    printf(" I amde 4th change here %s\n", name);
    printf(" I amde 5th change here %s\n", name);
    printf(" I amde 6th change here %s\n", name);
    printf(" I amde 7th change here %s\n", name);
    printf(" I amde 8th change here %s\n", name);
    return 0;
}


