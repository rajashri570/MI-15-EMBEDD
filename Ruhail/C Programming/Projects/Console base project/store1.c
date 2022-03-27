#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// ************* STORE MANAGEMENT SYSTEM *************
struct store
{
    int id;
    char product_name[20];
    int quantity;
    char date[12];

} s;
char ano;       // this character variable take for user choice
// now i am creating function for each operation...

void insert() // This function is used for insert the Product information
{

    FILE *ptr;              //file pointer for store our data into file
    char myDate[12];        // character array for date formate 

    do                      
    {
        time_t t = time(NULL);                  
        struct tm tm = *localtime(&t);      //return system current date 

        sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon+1, tm. tm_year + 1900);     //print current date when we add product
        strcpy(s.date, myDate);

        ptr = fopen("Record.txt", "ab");            //open file in append binary mode 
        if (ptr == NULL)
        {
            printf("\t\t\t\t\t\tError : File is Not found!");
            exit(1);
        }

        printf("\n\t\t\t\t\t\tEnter Product Id                : ");
        scanf("%d", &s.id);

        printf("\t\t\t\t\t\tEnter the Product Name          : ");
        scanf("%s", s.product_name);

        printf("\t\t\t\t\t\tEnter Product Quantity          : ");
        scanf("%d", &s.quantity);

        fwrite(&s, sizeof(s), 1, ptr); // basically fwrite() function is used for write  binary data

        printf("\n\t\t\t\t\t\tProduct Inserted Successfully");
        fclose(ptr);                    //Close current file

        printf("\n\t\t\t\t\t\tDo you want to add another Product?Press (y/n) : ");
        scanf("%s", &ano);                  // here we entring product id for insert another product
    } while (ano == 'y' || ano == 'Y');         //use for repeat current operation
}

void display() // this function is used for display All Product records....
{
    FILE *ptr;

    ptr = fopen("Record.txt", "rb");        //File open in reading binary mode
    if (ptr == NULL)
    {
        printf("\t\t\t\t\t\tError : File Not Found!");
    }
    printf("\n\t\t\t\t\t\t <------------> PRODUCT INFORMATION <------------> \n");      //Display all Products
    printf("\n\t\t\t\t\t\t------------------------------------------------------------------------------------------\n\t\t\t\t\t\t Product Id     |      Product Name      |      Product Quantity      |      Date\n\t\t\t\t\t\t------------------------------------------------------------------------------------------\n\n");

    while (fread(&s, sizeof(s), 1, ptr)) // fread() function is used for read binary data

        printf("\t\t\t\t\t\t %d \t                   %s                      %d                   %s\n", s.id, s.product_name, s.quantity, s.date);
    printf("\n\t\t\t\t\t\t--------------------------------------------------------------\n");
    fclose(ptr);
}

void search() // Search Product record for using this function
{
    do
    {
        FILE *ptr;

        int r, avl_id, found = 0;           // r ---> current id,  avl_id -----> available id, found -------> finding record

        ptr = fopen("Record.txt", "rb");
        if (ptr == NULL)
        {
            printf("\t\t\t\t\t\tError : This file is not found!");
            exit(1);
        }

        printf("\n\t\t\t\t\t\tEnter the Product Id to search Product Record : ");
        scanf("%d", &r);            // here we entring product id for searching product

        while (fread(&s, sizeof(s), 1, ptr))    //while for use reading all binary data data, fread for read binary data
        {

            avl_id = s.id; 
            if (avl_id == r)        //compare available id to current Enter id.....
            {
                found = 1;
                printf("\t\t\t\t\t\tRecord is : ");
                printf("\n\t\t\t\t\t\t---------------------------------------------");
                printf("\n\t\t\t\t\t\tProduct Id is          :      %d", s.id);
                printf("\n\t\t\t\t\t\tProduct Name is        :      %s", s.product_name);
                printf("\n\t\t\t\t\t\tProduct Quantity       :      %d\n", s.quantity);
                printf("\t\t\t\t\t\t---------------------------------------------\n");
                break;
            }
        }
        if (found == 0)
        {
            printf("\n\t\t\t\t\t\tNo Record Found!");
        }

        fclose(ptr);

        printf("\n\t\t\t\t\t\tDo you want to Search another Product?Press (y/n) : ");
        scanf("%s", &ano);
    } while (ano == 'y' || ano == 'Y');     //use for repeat current operation
}

void delete () // delete each product record one by one....
{
    do
    {
        FILE *ptr1, *ptr2;          //*ptr1 ----> file pointer in this file have original data, *ptr2 ----->  it is this temporary file 

        int r, avl_id, found = 0;           //r ---> current input id, avl_id ----> available id, found ----> find product record

        ptr1 = fopen("Record.txt", "rb");   // file open in read binary mode

        if (ptr1 == NULL)
        {
            printf("\n\t\t\t\t\t\tSorry..There is No file\n");
            exit(1);
        }

        printf("\n\t\t\t\t\t\tEnter Product Id which you want to delete : ");
        scanf("%d", &r);                // here we entring product id for deleting product

        ptr2 = fopen("copy.txt", "ab+");    //open copy.txt file in reading and append binary mode, 

        while (fread(&s, sizeof(s), 1, ptr1))   //read all binary data using while loop
        {
            avl_id = s.id;
            if (avl_id == r)    //compare available id or user input id....
            {
                found = 1;      
            }
            else
            {
                fwrite(&s, sizeof(s), 1, ptr2); //write in binary file using fwrite function
            }
        }

        fclose(ptr1);       //closing current both file ptr1 and ptr2
        fclose(ptr2);

        if (found)  //if record found
        {
            remove("Record.txt");                   //remove current file
            rename("copy.txt", "Record.txt");       //rename copy.txt file into Record.txt 
            printf("\n\t\t\t\t\t\tRecord deleted Successfully\n");
        }
        if (!found) //if record not found 
        {
            printf("\n\t\t\t\t\t\tRecord Not Found!!");
        }
        printf("\n\t\t\t\t\t\tDo you want to Search another Product?Press (y/n) : ");
        scanf("%s", &ano);
    } while (ano == 'y' || ano == 'Y');     //use for repeat current operation
}

void update() // Update each Product record one by one....
{
    do
    {
    FILE *ptr;
    int avl_id, r, found = 0;       

    ptr = fopen("Record.txt", "rb+");       //file open in read and write binary mode
    if (ptr == NULL)
    {
        printf("\t\t\t\t\t\tError : File is not Found!!");
        exit(1);
    }

    printf("\t\t\t\t\t\tIf You want to update Product record so please Enter Product : ");
    scanf("%d", &r);            // here we entring product id for updating product

    while (fread(&s, sizeof(s), 1, ptr))
    {
        avl_id = s.id;
        if (avl_id != r)
        {
            found = 1;
        }
        else
        {

            printf("\t\t\t\t\t\tUpdate Product Record\n");

            printf("\n\t\t\t\t\t\tEnter Product Id          : ");
            scanf("%d", &s.id);

            printf("\t\t\t\t\t\tEnter Product Name          : ");
            scanf("%s", s.product_name);

            printf("\t\t\t\t\t\tEnter Product Quantity      : ");
            scanf("%d", &s.quantity);

            fseek(ptr, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, ptr);
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
    printf("\n\t\t\t\t\t\tDo you want to Search another Product?Press (y/n) : ");
        scanf("%s", &ano);
    } while (ano == 'y' || ano == 'Y');
}

void buy()
{   
    do
    {
    int id, f = 0;
    FILE *fp;

    printf("\n\t\t\t\t\t\t <== Buy  Product ==>\n\n");
    printf("\n\t\t\t\t\t\t Enter Product Id     : ");
    scanf("%d", &id);                   

    fp = fopen("Record.txt", "rb+");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (id == s.id)
        {
            f = 1;
            s.quantity = s.quantity - 1;
            fseek(fp, -sizeof(s), 1);
            fwrite(&s, sizeof(s), 1, fp);

            fclose(fp);
            if (s.quantity == 0)
            {
                delete (s.id);
            }
            break;
        }
    }
    if (f == 1)
    {
        printf("\n\n\t\t\t\t\t\tProduct Bought Successfully...\n");
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\tProduct Not Found!!");
    }

    printf("\n\t\t\t\t\t\tDo you want to Buy another Product?Press (y/n) : ");
        scanf("%s", &ano);                  // here we entring product id for buying another product
    } while (ano == 'y' || ano == 'Y');
}
void main()
{
    int choice;
    do
    {
        printf("\n\t\t\t\t\t\t <------------> PRODUCT INFORMATION <------------>\n");
        printf("\n\t\t\t\t\t\tSelect Your Choise");
        printf("\n\t\t\t\t\t\t1. INSERT\n\t\t\t\t\t\t2. DISPLAY\n\t\t\t\t\t\t3. SEARCH\n\t\t\t\t\t\t4. DELETE\n\t\t\t\t\t\t5. UPDATE\n\t\t\t\t\t\t6. Buy\n\t\t\t\t\t\t7. Exit\n");
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
            buy();
            break;
        case 7:
            exit(1);
        default:
            printf("\t\t\t\t\t\tYou Entered Wrong Choise!");
            break;
        }
    } while (choice != 7);
}