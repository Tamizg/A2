#include <stdio.h>

main()
{
    int n,rn=0,rem,num;
    printf("Enter any Number :\n");
    scanf("%d",&n);
    num=n;
    while(n>0){
    rem=n%10;
    rn=rn*10+rem;
    n=n/10;}
    printf("The Reverse of the Given Number is %d\n",rn);
    if(rn==num)
    printf("YES, %d is a Palindrome.",num);
    else
    printf("NO, %d is not a Palindrome.",num);
}
