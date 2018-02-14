#include <stdio.h>
main()
{
    int i,n;
    long long fact=1;
    printf("Enter the number 'n' :\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        fact=fact*i;}
    printf("The Password to open the Nuclear Briefcase is :\t %llu",fact);
}



