#include <stdio.h>
#include <conio.h>


int main()
 {
    int a, b, c,d,e;
    clrscr();

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

     if (a <b) {
        if (a <c) {
            if (a<d) {
                if (a< e) {
                    printf("a is minimum");
                } else {
                    printf("e is minimum");
                }
            }
        }
    } else {
        if (b <c) {
            if (b<d) {
                if (b<e) {
                    printf("b is minimum");
                } else {
                    printf("e is minimum");
                }
            }
        } else {
            if (c<d) {
                if (c < e) {
                    printf("c is minimum");
                } else {
                    printf("e is minimum");
                }
            } else {
                if (d< e) {
                    printf("d is minimum");
                } else {
                    printf("e is minimum");
                }
            }
        }
    }
    getch();
   
}