#include <stdio.h>

// 1. Check divisibility by 3 and 2
int main1() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 2 == 0)
        printf("%d is divisible by both 3 and 2\n", num);
    else
        printf("%d is not divisible by both 3 and 2\n", num);
    return 0;
}

// 2. Check divisibility by 7 or 3
int main2() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 7 == 0 || num % 3 == 0)
        printf("%d is divisible by 7 or 3\n", num);
    else
        printf("%d is not divisible by 7 or 3\n", num);
    return 0;
}

// 3. Check positive, negative, or zero
int main3() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is positive\n", num);
    else if (num < 0)
        printf("%d is negative\n", num);
    else
        printf("Number is zero\n");
    return 0;
}

// 4. Leap year check
int main4() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}

// 5. Find greatest among three numbers
int main5() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("Greatest number is %d\n", max);
    return 0;
}

// 6. Check character type
int main6() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase alphabet\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");
    return 0;
}

// 7. Triangle validity
int main7() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");
    return 0;
}

// 8. Days in a month
int main8() {
    int month;
    printf("Enter month number: ");
    scanf("%d", &month);
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n"); break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n"); break;
        case 2:
            printf("28 or 29 days\n"); break;
        default:
            printf("Invalid month\n");
    }
    return 0;
}

// 9. Nature of roots of quadratic equation
#include <math.h>
int main9() {
    float a, b, c, D;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;
    if(D > 0)
        printf("Roots are real and distinct\n");
    else if(D == 0)
        printf("Roots are real and equal\n");
    else
        printf("Roots are complex\n");
    return 0;
}

// 10. Calculate percentage and grade
int main10() {
    float phy, chem, bio, math, comp, total, perc;
    printf("Enter marks of Physics, Chemistry, Biology, Mathematics, Computer: ");
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &comp);
    total = phy + chem + bio + math + comp;
    perc = total/5;
    printf("Percentage = %.2f\n", perc);
    if(perc >= 90) printf("Grade A\n");
    else if(perc >= 80) printf("Grade B\n");
    else if(perc >= 70) printf("Grade C\n");
    else if(perc >= 60) printf("Grade D\n");
    else if(perc >= 40) printf("Grade E\n");
    else printf("Grade F\n");
    return 0;
}
