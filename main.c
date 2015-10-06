//
//  main.c
//  Time
//
//  Created by brandon kehl on 7/24/15.
//  Copyright (c) 2015 brandonkehl. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    long secondsSince1970 = time(NULL) + 4000000;
    printf("It has bemm %ld seconds 1970\n", secondsSince1970);
    
    
    struct tm now;
    localtime_r(&secondsSince1970,&now);
    printf("After 4 Million seconds the time and date would be %d-%d-%d %d:%d:%d \n", now.tm_mon,now.tm_mday,now.tm_year + 1900,now.tm_hour,now.tm_min,now.tm_sec);


}
