#include <stdio.h>
#include <stdlib.h>

struct studentstructure
{
    /* Create Student structure
And perform Insert/Delete/Display/Update/Search operations on following programs

1. Write and display same structure in file with multiple records */

    int roll_no;
    char name[20];
    float marks;

} student;

// now i am creating function for each operation...

void insert() // This function used for insert the student data...
{

    FILE *ptr;
    char ano;
    do
    {

    ptr = fopen("Record.txt", "ab");
    if (ptr == NULL)
    {
        printf("\t\t\t\t\t\tError : File is Not found!");
        exit(1);
    }
    
    printf("\n\t\t\t\t\t\tEnter Student Roll Number    : ");
    scanf("%d", &student.roll_no);

    printf("\t\t\t\t\t\tEnter the Student Name       : ");
    scanf("%s", student.name);

    printf("\t\t\t\t\t\tEnter Student Marks          : ");
    scanf("%f", &student.marks);

    fwrite(&student, sizeof(student), 1, ptr); // basically fwrite() function is used for write binary data

    printf("\n\t\t\t\t\t\tRecord Inserted Successfully");
    fclose(ptr);

    printf("\n\t\t\t\t\t\tDo you want to add another Record of Student?Press (y/n) : ");
    scanf("%s", &ano);
    } while (ano == 'y' || ano == 'Y'); 
}

void display() // this function is used for display All student records....
{
    FILE *ptr;

    ptr = fopen("Record.txt", "rb");
    if (ptr == NULL)
    {
        printf("Error : File Not Found!");
    }
    printf("\n\t\t\t\t\t\t <----------> STUDENT INFORMATION <---------->\n");
    printf("\n\t\t\t\t\t\t---------------------------------------------\n\t\t\t\t\t\t Roll Number\t|    Name\t|  Marks\n\t\t\t\t\t\t---------------------------------------------\n\n");
    
    while (fread(&student, sizeof(student), 1, ptr)) // fread() function is used for read binary data
        
    printf("\t\t\t\t\t\t %d \t\t  %s  \t   %.2f\n", student.roll_no, student.name, student.marks);

    fclose(ptr);
}

void search() // Search Student record one by one
{
    FILE *ptr;

    int r, search_roll, avl_roll, found = 0; // here r --> roll_no && s --> search && avl --> available

    ptr = fopen("Record.txt", "rb");
    if (ptr == NULL)
    {
        printf("\t\t\t\t\t\tError : This file is not found!");
        exit(1);
    }

    printf("\n\t\t\t\t\t\tEnter the Roll Number of Student to search Record : ");
    scanf("%d", &r);

    while (fread(&student, sizeof(student), 1, ptr))
    {

        avl_roll = student.roll_no; // assign student.roll_no to avl....
        if (avl_roll == r)
        {
            found = 1;
            printf("\t\t\t\t\t\tRecord is : ");
            printf("\n\t\t\t\t\t\t---------------------------------------------");
            printf("\n\t\t\t\t\t\tStudent Roll Number is : %d", student.roll_no);
            printf("\n\t\t\t\t\t\tStudent Name is        : %s", student.name);
            printf("\n\t\t\t\t\t\tStudent Marks is       : %.2f\n", student.marks);
            printf("\t\t\t\t\t\t---------------------------------------------\n");
            break;
        }
    }
    if (found == 0)
    {
        printf("\n\t\t\t\t\t\tNo Record Found!");
    }

    fclose(ptr);
}

void delete ()  //delete each student record one by one....
{
    FILE *ptr1, *ptr2;

    int r, avl_roll, found = 0;

    ptr1 = fopen("Record.txt", "rb");

    if (ptr1 == NULL)
    {
        printf("\n\t\t\t\t\t\tSorry..There is No file\n");
        exit(1);
    }

    printf("\n\t\t\t\t\t\tEnter Student Roll Number which you want to delete : ");
    scanf("%d", &r);

    ptr2 = fopen("copy.txt", "ab+");

    while (fread(&student, sizeof(student), 1, ptr1))
    {
        avl_roll = student.roll_no;
        if (avl_roll == r)
        {
            found = 1;
        }
        else
        {
            fwrite(&student, sizeof(student), 1, ptr2);
        }
    }

    fclose(ptr1);
    fclose(ptr2);

    if (found)
    {
        remove("Record.txt");
        rename("copy.txt", "Record.txt");
        printf("\n\t\t\t\t\t\tRecord deleted Successfully\n");
    }
    if (!found)
    {
        printf("\n\t\t\t\t\t\tRecord Not Found!!");
    }
}
void update()   //Update each Student record one by one....
{
    FILE *ptr;
    int avlroll, r, found = 0;

    ptr = fopen("Record.txt", "rb+");
    if (ptr == NULL)
    {
        printf("\t\t\t\t\t\tError : File is not Found!!");
        exit(1);
    }

    printf("\t\t\t\t\t\tIf You want to update students records so please Enter Student Roll Number : ");
    scanf("%d", &r);

    while (fread(&student, sizeof(student), 1, ptr))
    {
        avlroll = student.roll_no;
        if (avlroll != r)
        {
            found = 1;
        }
        else
        {

            printf("\t\t\t\t\t\tUpdate Student Record\n");

            printf("\n\t\t\t\t\t\tEnter Student Roll Number  : ");
            scanf("%d", &student.roll_no);

            printf("\t\t\t\t\t\tEnter the Student Name      : ");
            scanf("%s", student.name);

            printf("\t\t\t\t\t\tEnter Student Marks         : ");
            scanf("%f", &student.marks);

            fseek(ptr, -sizeof(student), SEEK_CUR);
            fwrite(&student, sizeof(student), 1, ptr);

        }   
    }
    fclose(ptr);

    if (found)
    {
        printf("\t\t\t\t\t\tRecord Update Successfully");
    }
    if (!found)
    {
        printf("\t\t\t\t\t\tSomething went Wrong!!");
    }
}

void main()
{
    int choice;
    do
    {
        printf("\n\t\t\t\t\t\t <----------> STUDENT INFORMATION <---------->\n");
        printf("\n\t\t\t\t\t\tSelect Your Choise");
        printf("\n\t\t\t\t\t\t1. INSERT\n\t\t\t\t\t\t2. DISPLAY\n\t\t\t\t\t\t3. SEARCH\n\t\t\t\t\t\t4. DELETE\n\t\t\t\t\t\t5. UPDATE\n\t\t\t\t\t\t6. Exit\n");
        printf("\t\t\t\t\t\t_____________________________");
        printf("\n\t\t\t\t\t\tEnter Your Choise : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;

        case 4:
            delete ();
            break;

        case 5:
            update();
            break;
        case 6:
            exit(1);
        default:
            printf("\t\t\t\t\t\tYou Entered Wrong Choise!");
            break;
        }
    } while (choice != 6);
}