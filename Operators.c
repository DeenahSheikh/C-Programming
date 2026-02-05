 #include <stdio.h>
 int main()
 {
    int a;
    int b;
    int c;
    a=5;
    b=6;
    a+=6;
    b*=6;
    c=(b++)+(++b);
    printf("%d\n",c);
    printf("%d\n",a);
    printf("%d\n",b);

 }