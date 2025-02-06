/*#include <stdio.h>
//#include<math.h>
#include<limits.h>
int main(){
    // float  x= cbrt(10);
    // printf("%f\n", x);
    // long y = 2147483648;
    // printf("%lf\n", y);
    long y = __LONG_MAX__;
    printf("%ld\n", y);
    return 0;
}*/






#include <stdio.h>
#include <limits.h>

int main() {
    long y = __LONG_MAX__;
    printf("%ld\n", y);
    return 0;
}
