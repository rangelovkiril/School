#include <stdio.h>
#include <limits.h>

int main() {
    printf("%-16s%-18s%-24s%-24s%-24s\n", "Type", "Specifiers", "Unsigned max", "Minimum", "Maximum");
    
    printf("------------------------------------------------------------------------------------------------------\n");

    printf("%-16s%-18s%-24u%-24d%-24d\n", "int", "%d %i %u", UINT_MAX, INT_MIN, INT_MAX);
    printf("%-16s%-18s%-24lu%-24ld%-24ld\n", "long", "%ld %li %lu", ULONG_MAX, LONG_MIN, LONG_MAX);
    printf("%-16s%-18s%-24llu%-24lld%-24lld\n", "long long", "%lld %lli %llu", ULLONG_MAX, LLONG_MIN, LLONG_MAX);
    printf("%-16s%-18s%-24u%-24u%-24u\n", "short", "%h %hu", USHRT_MAX, SHRT_MIN, SHRT_MAX);
    printf("%-16s%-18s%-24u%-24d%-24u\n", "char", "%c", UCHAR_MAX, CHAR_MIN, CHAR_MAX);
    printf("%-16s%-18s%-24s%-24e%-24e\n", "float", "%f %e", "Has no unsigned type", __FLT_MIN__, __FLT_NORM_MAX__);
    printf("%-16s%-18s%-24s%-24E%-24E\n", "double", "%lf %E", "Has no unsigned type", __DBL_MIN__ ,__DBL_NORM_MAX__);
    printf("%-16s%-18s%-24s%-24LE%-24LE\n", "long double", "%Lf %LE", "Has no unsigned type", __LDBL_MIN__ ,__LDBL_NORM_MAX__);

    return 0;
}
