#include <stdio.h>

int main() {
    float phy, chem, math, avg;
    printf("Enter Physics marks: ");
    scanf("%f", &phy);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);

    printf("Enter Mathematics marks: ");
    scanf("%f", &math);
    avg = (phy + chem + math) / 3;
    printf("\nAverage marks in PCM = %.2f\n", avg);
    (avg >= 50) 
        ? printf("Student is Eligible for Admission.\n")
        : printf("Student is NOT Eligible for Admission.\n");

    return 0;
}
