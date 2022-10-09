/*WHAT IS RECURSION
   ->A function calling it self is said to be recursion

   WHY WE USE IT OVER FOR LOOP?
   ->Cause we can do both ascending as well as descending operation with it

   NO OF CALL by the function :-n+1
   TIME COMPLEXITY :- O(n)
   Space Complexity :-O(n)*/


#include<stdio.h>
#include<conio.h>
fun2(int n)
{

    if(n>0)
    {
        printf("\n %d \n",n);
        fun2(n-1);
    }
}
fun3(int n)
{
    if(n>0)
    {
        fun3(n-1);
        printf("\n %d \n",n);
    }
}
int main()
{
    int x;
    printf(" Enter value of X ");
    scanf("%d",&x);
    printf("\n Value to be printed in Descending order \n");
    fun2(x);
    printf("\n Value to be printed in Ascending order \n");
    fun3(x);

    return 0;

}
