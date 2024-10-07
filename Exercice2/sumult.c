 #include <stdio.h>
 #include <math.h>


void sumult(int a, int b, int *prod, int *som){
    *prod = a+b;
    *som = a*b;
}

 int main()
 {
    int prod, som, a, b;
    printf("Entre la valeur de a: ");
    scanf("%d",&a);
    printf("\nEntre la valeur de b: ");
    scanf("%d",&b);

    sumult(a, b, &prod, &som);

    printf("\n%d + %d = %d",a,b,prod);
    printf("\n%d x %d = %d\n",a,b,som);

    return 0;
 }