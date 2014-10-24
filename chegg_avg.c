#include<stdio.h> //including the headers for standard input and output
int remf(int a,int b) //defining the function remf with arguements a and b
{
    return a%b; // returning a modulus b, the modulus operator(%) returns the remainder when the 1st arguement is divided by the 2nd arguement
}
int main() //defining of main function
{
    int a,b;
    printf("Enter the no:"); //prompting the user to enter the no.
    scanf("%d",&a); //taking the input
    b=remf(a,2); // b is given the value returned by remf, i.e., the remainder of a/2
    if(b==1) // if remainder is 1
    printf("%d is Odd",a); // a is odd
    else
    printf("%d is Even",a); // else a is even
    return 0; // returning zero to the main function
}
