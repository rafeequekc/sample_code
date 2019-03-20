
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
    return 0;
}


