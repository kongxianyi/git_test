#include <stdio.h>

/* 计算 1 + 2 + ... + n */
long long sum_to_n(int n) {
    if (n <= 0) {
        return 0;
    }
    long long total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int main(void) {
    int n;

    printf("请输入一个正整数 n: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "输入无效\n");
        return 1;
    }

    printf("1 到 %d 的和是: %lld\n", n, sum_to_n(n));
    return 0;
}
