#include <stdio.h>
#define PI 3.14

void one(void);
void two(void);
void three(void);
void four(void);
int problem;

int main() {

    while (problem != EOF){
        printf_s("%s","\n***********************************************\n");
        printf_s( "\n (1) Area of parallelogram"
                  "\n (2) Area of a Perpendicular triangle "
                  "\n (3) Area of a trapezoid "
                  "\n (4) Area of a circle"
                  "\n (5) QUIT \n");
        printf_s("%s","Enter your choice > ");
        scanf_s("%d", &problem);
        switch (problem) {
            case 1:
                one();
                break;
            case 2:
                two();
                break;
            case 3:
                three();
                break;
            case 4:
                four();
                break;
            case 5:
                problem = EOF;
                break;
            default:
                printf_s("%s","\n The value entered is incorrect");
                break;
        }
    }
    return 0;
}
void one(void){
    double x, y;
    printf_s("%s","Enter X & Y > ");
    scanf_s("%lf %lf",&x,&y);
    printf_s("\n parallelogram area > %.0f",(x+y)*2);
   }
void two(void){
    double x;
    printf_s("%s","Enter X > ");
    scanf_s("%lf",&x);
    printf_s("\n Perpendicular triangle area > %.0f",x*3);
}
void three(void){
    double A, B, C, D;
    printf_s("%s","Enter A, B, C, D, > ");
    scanf_s("%lf %lf %lf %lf",&A, &B, &C, &D);
    printf_s("\n trapezoid area > %.0f",A+B+C+D);
}
void four(void){
    double r;
    printf_s("%s","Enter r > ");
    scanf_s("%lf",&r);
    printf_s("\n circle area > %.0f",r*PI*2);
}
