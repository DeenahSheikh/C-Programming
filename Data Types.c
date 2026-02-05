 #include <stdio.h>
 int main()
    {
        int p1;
        char val;
        val='b'; //Starts from 97(small alphabets)(for capital letters starts from 65)
        printf("%d\n", val);
        val=97;
        printf("%c\n",val);

 #include <stdbool.h>
        bool a;
        a=true;
        printf("%d\n",a);
        
        
        float p2;
        double p3;
        long int p4;
        long double p6;

        p1=22/7;
        p2=(float)22/7; //type casting
        p3=(double)22/7;
        p4=22/7;
        p6=22/7;

        printf("%d\n",p1);
        printf("%f\n",p2);
        printf("%lf\n",p3); //Double stores more acurate decimal values than float.
        printf("%ld\n",p4);
        printf("%Lf\n",p6);


        //printf("%d\n",c);
        //d=(b++)+(++b);
        //printf("%d\n",d);
        
        return 0;
    }