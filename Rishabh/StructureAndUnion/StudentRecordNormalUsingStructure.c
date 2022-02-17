// C Program to Store Information
// of Students Using Structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create the student structure
struct Student {
	char* name;
	int roll_number;
	int age;
	double percentage;
};

// Driver code
int main()
{
	int i = 0, n = 5;

	// Create the student's structure variable
	// with n Student's records
	struct Student student[n];

	// Get the students data
	student[0].roll_number = 1;
	student[0].name = "Rishabh";
	student[0].age = 12;
	student[0].percentage = 78.50;

	student[1].roll_number = 2;
	student[1].name = "Ram";
	student[1].age = 10;
	student[1].percentage = 56.84;

	student[2].roll_number = 3;
	student[2].name = "Hari Ram";
	student[2].age = 11;
	student[2].percentage = 87.94;

	student[3].roll_number = 4;
	student[3].name = "Krishna";
	student[3].age = 12;
	student[3].percentage = 89.78;

	student[4].roll_number = 5;
	student[4].name = "Rahul Gupta";
	student[4].age = 13;
	student[4].percentage = 78.55;

	
	printf("Student Records:\n\n");
	for (i = 0; i < n; i++)
     {
		printf("\tName = %s, \tRoll Number = %d, \tAge = %d, \tTotal Marks = %0.2f \n\n", student[i].name, student[i].roll_number, student[i].age, student[i].percentage);

     }
	return 0;
}
