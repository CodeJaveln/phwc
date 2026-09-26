#include <stdio.h>

#define CODE \
"#include <stdio.h>\n" \
"\n" \
"int main(void) {\n" \
"\tprintf(\"Hello, world!\\n\");\n" \
"\treturn 0;\n" \
"}\n"

int main() {
    printf(CODE);
    return 0;
}
