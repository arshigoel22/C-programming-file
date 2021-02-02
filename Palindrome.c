#include<stdio.h>


int CheckPalindrome(int n)
{
   
int newNum=0,n1;
    
n1=n;
    
while(n1!=0)
{
        
newNum=newNum*10+n1%10;
        
n1=n1/10;
    
}
    
if(newNum==n)
{
        
printf("%d is Palindrome",n);
    
}
    
else{
        
printf("%d is not Palindrome",n);
    
}
    
return 0;

}
 
int main()
 
{
     
int num;
     
printf("Entet Number:");
     
scanf("%d",&num);
     
CheckPalindrome(num);
     

    
return 0;

}
