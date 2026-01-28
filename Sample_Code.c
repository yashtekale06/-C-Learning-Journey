#include <stdio.h>

int main()
{
    int a,b,c;
    a=printf("enter your number:");
    scanf("%d",&a);
    b=printf("enter your second number:");
    scanf("%d",&b);
    c=a+b;
    printf("addition of two number: %d",c);

    int num1,num2,sum;
    printf("enter 2 number");
    scanf("%d ,%d",&num1,&num2);
    sum=num1+num2;
    printf("addition is %d",sum);
    //**********************************/
    //  name : Yash Tekale
    // exmaple: different data types

    // *********************************
    char name;
    int pincode;
    float height;
    double latitude,longitiude;
    name=printf("enter your name: ");
    scanf("%c",&name);
    pincode=printf("enter your pincode ");
    scanf("%d",&pincode);
    height=printf("enter your height ");
    scanf("%f",&height);
    printf("enter your latitude & longitude: ");
    scanf("%lf %lf",&latitude,&longitiude);
    printf("name is %c\n",name);
    printf("pincode is %d\n",pincode);
    printf("height is %f\n",height);
    printf("location is :%lf,%lf",latitude,longitiude);
    //**********************************/
    //  name : Yash Tekale
    // exmaple: avrage of 3 float numeber 

    // *********************************
    float d,e,f,avg;
    printf( "enter 3 float value: ");
    scanf("%f %f %f",&d,&e,&f);
    avg=(d+e+f)/3;
    printf("Avrage of 3 float value: %.2f",avg);
    /**********************************/
    //  name : Yash Tekale
    // exmaple:  temperature from Fahrenheit to Celsius

    // *********************************
    float g, Celsius;
    printf("enter your value : ");
    scanf("%f",&g);
    Celsius=(g - 32)*5/9;
    printf("valu of %f °C",c);
    return 0;
}

