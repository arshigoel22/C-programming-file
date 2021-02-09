#include <stdio.h>

void main()

{
    
union item
    
{
        
int x;
        
char ch;
        
float m;
    
};
    
union item I1;
    
I1.x=10;
    
printf("%d",I1.x);
    
I1.ch='A';
    
printf("%c",I1.ch);
    
I1.m=15.25;
    
printf("%f",I1.m);

    
return 0;

}