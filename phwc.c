#include <stdio.h>

#include "config.h"

#define CODE \
"#include <stdio.h>\n" \
"\n" \
"int main(void) {\n" \
TAB "printf(\"Hello, world!\\n\");\n" \
TAB "return 0;\n" \
"}\n"

int main() {
    printf(CODE);
    return 0;
}
