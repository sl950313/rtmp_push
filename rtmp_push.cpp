#include "librtmp/rtmp.h"
#include <stdio.h>

int main() {
    RTMP *rtmp = RTMP_Alloc();
    RTMP_Init(rtmp);
    return 0;
}
