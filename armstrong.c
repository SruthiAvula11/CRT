Write a program to check whether the given number is an Armstrong number or not. Armstrong Number:abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + .... where n represents the number of digits

Input Format

Read a no

Constraints

1<=n<=10^7

Output Format

Print "Yes" if armstrong no else print "No"

Sample Input 0

153
Sample Output 0

Yes
Sample Input 1

120
Sample Output 1

No
Sample Input 2

1253
Sample Output 2

No
Sample Input 3

1634
Sample Output 3

Yes

\\source code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,r,sum,d,p,temp;
    scanf("%d",&n);
    sum=0;
    d=(int)log10(n)+1;
    temp=n;
    while(n!=0){
        r=n%10;
        p=(int)(pow(r,d)+0.5);
        sum=sum+p;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
