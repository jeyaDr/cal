#include<stdio.h>
#include<stdlib.h>

int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
float divide(float a, float b);
int square(int a);

int main(void)
{
    int n, a, b, z ;
    float f1, f2,r;

    printf("1 --> for addition\n");
    printf("2 --> for subtraction\n");
    printf("3 --> for multiplication\n");
    printf("4 --> for division\n");
    printf("5 --> for square\n");
    printf("6 --> for exit\n\n");

    printf("Enter your choice\n");

    scanf("%d",&n);

    if(n==1)
    {
        printf("Enter two number to add\n");
        scanf("%d %d",&a,&b);
        z = add(a,b);
        printf("The result is %d",z);

    }
    else if(n==2)
    {
        printf("Enter two number to subtract\n");
        scanf("%d %d",&a,&b);
        z = sub(a,b);
        printf("The result is %d",z);
        
    }
    else if(n==3)
    {
        printf("Enter two number to multiply\n");
        scanf("%d %d",&a,&b);
        z = multi(a,b);
        printf("The result is %d",z);
        
    }
    else if(n==4)
    {
        printf("Enter two number to divide\n");
        scanf("%f %f",&f1,&f2);
        r = divide(f1,f2);
        printf("The result is %.2f",r);
        
    }
    else if(n==5)
    {
        printf("Enter a number to square\n");
        scanf("%d %d",&a,&b);
        z = square(a);
        printf("The result is %d",z);
        
    }
    else if(n==6)
    {
        exit (1);
        
    }

}

int add(int a, int b)
{
    int c = (a+b);
    return c;
}
int sub(int a, int b)
{
    int c = (a - b);
    return c; 
}
int multi(int a, int b)
{
    int c =(a * b);
    return c;
}
float divide(float a, float b)
{
    float c = (a/b);
    return c;
}
int square(int a)
{
    int c = (a * a);
    return c;
}
