#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, c, d, e, f;
    clrscr();

    printf("Enter six numbers: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                    if (a > f) {
                        printf("a is max");
                    } else {
                        printf("f is max");
                    }
                } else {
                    if (e > f) {
                        printf("e is max");
                    } else {
                        printf("f is max");
                    }
                }
            } else {
                if (d > e) {
                    if (d > f) {
                        printf("d is max");
                    } else {
                        printf("f is max");
                    }
                } else {
                    if (e > f) {
                        printf("e is max");
                    } else {
                        printf("f is max");
                    }
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    if (c > f) {
                        printf("c is max");
                    } else {
                        printf("f is max");
                    }
                } else {
                    if (e > f) {
                        printf("e is max");
                    } else {
                        printf("f is max");
                    }
                }
            } else {
                if (d > e) {
                    if (d > f) {
                        printf("d is max");
                    } else {
                        printf("f is max");
                    }
                } else {
                    if (e > f) {
                        printf("e is max");
                    } else {
                        printf("f is max");
                    }
                }
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                    if (b > f) {
                        printf("b is max");
                    } else {
                        printf("f is max");
                    }
                } else {
                    if (e > f) {
                        printf("e is max");
                    } else {
                        printf("f is max");
                    }
                }
            } else {
                if (d > e) {
                    if (d > f) {
                        printf("d is max");
                    } else {
                        printf("f is max");
                    }
                } else {
                    if (e > f) {
                        printf("e is max");
                    } else {
                        printf("f is max");
                    }
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    if (c > f) {
                        printf("c is max");
                    } else {
                        printf("f is maxn");
                    }
                } else {
                    if (e > f) {
                        printf("e is max");
                    } else {
                        printf("f is max");
                    }
                }
            } else {
                if (d > e) {
                    if (d > f) {
                        printf("d is max");
                    } else {
                        printf("f is max");
                    }
                } else {
                    if (e > f) {
                        printf("e is maxn");
                    } else {
                        printf("f is max");
                    }
                }
            }
        }
    }

    getch();
}
