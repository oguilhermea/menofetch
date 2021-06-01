#include <cstdlib>
#include <cstdio>

int main(int argc, char** argv) {
    int n = 1;
    printf("%s\n", "Architecture:");
    if(*(char *)& n == 1) {
        printf("\t%s\n", "endiannes: LE");
    } else {
        printf("\t%s\n", "endiannes: BE");
    }
    printf("\tbit system: %d\n", sizeof(void *) * 8); 
    // Need to fix formatation
    // system("cat /proc/cpuinfo | grep \"address size\" | head -1");
    // system("cat /proc/cpuinfo | grep \"model name\" | head -1");
    
    printf("%s\n", "Data Type Size(Bytes):");
    printf("\tchar: %d\n", sizeof(char));
    printf("\tuchar: %d\n", sizeof(unsigned char));
    printf("\tshort: %d\n", sizeof(short));
    printf("\tushort: %d\n", sizeof(unsigned short));
    printf("\tint: %d\n", sizeof(int));
    printf("\tuint: %d\n", sizeof(unsigned int));
    printf("\tlong: %d\n", sizeof(long));
    printf("\tulong: %d\n", sizeof(unsigned long));
    printf("\tfloat: %d\n", sizeof(float));
    printf("\tdouble: %d\n", sizeof(double));
    printf("\tlong double: %d\n", sizeof(long double));
}
