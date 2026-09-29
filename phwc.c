#include <stdio.h>

#define TAB "    "

#define CODE \
"#include <stdio.h>\n" \
"\n" \
"int main() {\n" \
TAB "printf(\"Hello, world!\\n\");\n" \
TAB "return 0;\n" \
"}\n"

int main() {
    printf(CODE);
    return 0;
}
