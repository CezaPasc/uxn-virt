#include <stdio.h>

#define P printf
#define PX(x) printf("%s\n", #x); x

int main() {
    P("#include <stdio.h>\n");
    P("int main() {\n");
    PX(printf("Hello world"););
    P("return 1;\n");
    P("}");
    return 1;
}