#include <stdio.h>
#include <string.h>
int main()
{ // char  *subjects[5] [50] =
    {
        //                           "Maths",
        //                         "English",
        //                       "Kiswahili",
        //                     "Science",
        //                   "Religious_Education"
        //
    };
    int maths, english, kiswahili, science, religious_education;
    int registration_number, tel, marks;
    char name;
    int i;
    int total;
    for (int i = 1; i = 5; ++i)
    {
        printf("****************REGISTRATION*****************\n");
        printf("Please enter students name:\n");
        scanf("%s", &name);
        printf("Please enter Registration Number:\n");
        scanf("%i", &registration_number);
        printf("Please enter student's Telephone number:\n");
        scanf("%i", &tel);
        printf("Registration successful\n");
        printf("**************Enter student Marks**************\n");
        printf("Please enter student's Maths marks\n");
        scanf("%i", &maths);
        printf("Please enter student's English marks\n");
        scanf("%i", &english);
        printf("Please enter student's Kiswahili marks\n");
        scanf("%i", &kiswahili);
        printf("Please enter student's Science marks\n");
        scanf("%i", &science);
        printf("Please enter student's Religious_Education marks\n");
        scanf("%i", &religious_education);
        total = maths + english + kiswahili + science + religious_education;
        printf("Your total marks is: %i\n", &total);
        if (total >= 40)
            printf("You have passed");
        else
        {
            printf("You have failed");
        }
        printf("|*********Here is your result slip *******|:\n Maths:%i\n English:%i\n Kiswahili:%i\n Science:%i\n Religious Education:%i\n", &maths, &english, &kiswahili, &science, &religious_education);
    }
}