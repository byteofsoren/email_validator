#include <stdio.h>
#include "../lib/emailValidator.h"

int main(int argc, char *argv[])
{
    if (argc > 1) {
        return isEmail(argv[1]);
    }
    return 0;
}
