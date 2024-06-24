[11:38 AM, 6/24/2024] OCD😂: You went on a tour to Ooty with your friends. As a part of the tour, you went boating with them. For the boat to remain stable, the number of people on one boat is restricted based on the weight of the people. You find that the boatman who is sailing your boat is so much greedy of money. For earning more, he takes too many people to travel in the boat at a time. So you want to check how many people can travel in the boat at a time so that the boat will not drown. Calculate the weight by considering the number of adults and number of children. Assume that an adult weighs 75 kg and children weigh 30 kg each. If the weight is normal, display Boat is stable, else display Boat will drown.

Input Format

Input consists of 3 integers. First input corresponds to the…
[11:40 AM, 6/24/2024] OCD😂: cinema day
[11:40 AM, 6/24/2024] OCD😂: There is a practice of showing a cinema in the auditorium of a college on a cinema day. A cinema day is a day where the sum of Day(D), Month(M), Year(Y)should be divisible by product of 3 and 4. On that particular day the total number of students in the hostel should be greater than 50 but less than 100. Write a program to find whether the given day is cinema day or not.

Input Format

Read day,month,year and number of students

Constraints

1<=n<=10^7

Output Format

Print Cinema Day or Not a Cinema Day

Sample Input 0

3 
3 
1914 
76
Sample Output 0

Cinema Day
source code:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int d,m,y,s;
    scanf("%d\n%d\n%d\n%d",&d,&m,&y,&s);
    int sum=d+y+m;
    int product=3*4;
    if(sum%product==0 && s>50 && s<100)
    {
        printf("Cinema Day");
    }
    else
    {
        printf("Not a Cinema Day");
    }
    return 0;
}
