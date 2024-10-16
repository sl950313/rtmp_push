#include "librtmp/rtmp.h"
#include <stdio.h>
#include <map>
#include <iostream>

using namespace std;

int main() {
    RTMP *rtmp = RTMP_Alloc();
    RTMP_Init(rtmp);
    return 0;
    
}

void func() {
    std::map<int, int> test_map;
    test_map.insert(make_pair(1, 1));
}
