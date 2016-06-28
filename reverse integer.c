 #include <stdio.h>
 #include<conio.h>
 #include<string.h>
void main()
{
    int a[20];
    clrscr();
    printf("Enter the integer number: ");
    scanf("%s", a);
    strrev(a);
    printf("Reversed Number = %s",a);
    getch();
}
