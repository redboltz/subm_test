#include <boost/predef.h>
#include <stdio.h>

int main() {
    printf("%d\n", BOOST_ENDIAN_BIG_BYTE);
    printf("%d\n", BOOST_ENDIAN_BIG_WORD);
    printf("%d\n", BOOST_ENDIAN_LITTLE_BYTE);
    printf("%d\n", BOOST_ENDIAN_LITTLE_WORD);
}
