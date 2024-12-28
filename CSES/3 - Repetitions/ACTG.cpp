#pragma GCC optimize("-O3","unroll-loops")
#pragma GCC optimize("-Ofast")

#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>

char str[1000005];

unsigned int temp_num = 1;
unsigned int max_num;
unsigned int i = 0;

int main() {

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (i != 0 && str[i - 1] == str[i]){
            temp_num++;
        }
        else {
            temp_num = 1;
        }
        if (temp_num > max_num) {
            max_num = temp_num; 
        }
        i++;
    }

    printf("%d", max_num);
}