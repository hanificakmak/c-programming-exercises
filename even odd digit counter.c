#include<stdio.h>
int main(){

int n;
int tek=0;
int cift=0;

scanf("%d",&n);

for(;n>0;n/=10)
{
    if(n%2==0)
        cift++;
    else
        tek++;

}
printf("%d %d",cift,tek);

return 0;
}
