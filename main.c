
#include <stdio.h>

#ifdef PARAMETER_NAME
const char * name = "Rafeeque";
#else
const char * name = "Unknown";
#endif

int main(){
    printf(" My name is %s\n", name);
    return 0;
}


