### Q1: Write a program in C to store the name, mobile number, year of birth, fee deposited, and total marks in class XII of students. Then, print only the name and class XII marks of those students who have deposited less than ₹5000 and were born after the year 2005.

```
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char mobile[15];
    int yearOfBirth;
    float feeDeposited;
    int classXII_Marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Mobile number: ");
        scanf(" %s", students[i].mobile);
        printf("Year of Birth: ");
        scanf("%d", &students[i].yearOfBirth);
        printf("Fee Deposited: ");
        scanf("%f", &students[i].feeDeposited);
        printf("Total Marks in Class XII: ");
        scanf("%d", &students[i].classXII_Marks);
    }

    printf("\nStudents with fee deposited < 5000 and born after 2005:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].feeDeposited < 5000 && students[i].yearOfBirth > 2005) {
            printf("Name: %s, Class XII Marks: %d\n", students[i].name, students[i].classXII_Marks);
        }
    }

    return 0;
}

```

### Q2: Consider a structure Customer to store data of customers in a bank. The data includes account number, name, and balance (in ₹). Assume a maximum of 200 customers in the bank. Write a program in C to find and print the account number, name, and balance of all customers who have a balance of less than ₹100.

```
#include <stdio.h>
#include <string.h>

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    int n;
    printf("Enter number of customers (max 200): ");
    scanf("%d", &n);

    if (n > 200) {
        printf("Number exceeds the maximum limit of 200.\n");
        return 1;
    }

    struct Customer customers[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Name: ");
        scanf(" %[^\n]", customers[i].name);
        printf("Balance (in ₹): ");
        scanf("%f", &customers[i].balance);
    }

    printf("\nCustomers with balance less than ₹100:\n");
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d\n", customers[i].accountNumber);
            printf("Name: %s\n", customers[i].name);
            printf("Balance: ₹%.2f\n\n", customers[i].balance);
        }
    }

    return 0;
}

```

### Q3: Create a structure variable in C to keep the records of employees in an organization. The record should include employee code, name, designation, salary, department, and city of posting. Write a C program to enter records of 100 employees and display the names of those who earn more than ₹2000.

```
#include <stdio.h>
#include <string.h>

struct Employee {
    int code;
    char name[50];
    char designation[50];
    float salary;
    char department[50];
    char city[50];
};

int main() {
    struct Employee employees[100];

    printf("Enter details for 100 employees:\n");

    for (int i = 0; i < 100; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Code: ");
        scanf("%d", &employees[i].code);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Designation: ");
        scanf(" %[^\n]", employees[i].designation);
        printf("Salary (in ₹): ");
        scanf("%f", &employees[i].salary);
        printf("Department: ");
        scanf(" %[^\n]", employees[i].department);
        printf("City of Posting: ");
        scanf(" %[^\n]", employees[i].city);
    }

    printf("\nEmployees earning more than ₹2000:\n");
    for (int i = 0; i < 100; i++) {
        if (employees[i].salary > 2000) {
            printf("Name: %s\n", employees[i].name);
        }
    }

    return 0;
}

```

### Q4: Write a C program to compare two given dates. Use a structure named `Date` that contains three members: day, month, and year. If the dates are equal, display a message saying "Dates are equal"; otherwise, display "Dates are unequal".

```
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d1, d2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are unequal.\n");
    }

    return 0;
}

```


### Q5: Write a C program to store records of 100 students using a structure. Each record should include the student's name, marks, and roll number. Print the details of the student whose name is entered by the user.

```
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[100];
    char searchName[50];
    int found = 0;

    // Input records of 100 students
    for (int i = 0; i < 100; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Input name to search
    printf("\nEnter the name of the student to search: ");
    scanf(" %[^\n]", searchName);

    // Search and display student details
    for (int i = 0; i < 100; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("\nStudent Found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].rollNo);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }

    return 0;
}

```


### Q6: Write a C program using structures to enter and print the records of 10 books available in a library. The record should include the following fields:
- **Book Title**
- **Book Price**
- **Number of Pages** 

```
#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    float price;
    int pages;
};

int main() {
    struct Book books[10];

    // Input book records
    for (int i = 0; i < 10; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Book Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Book Price: ");
        scanf("%f", &books[i].price);
        printf("Number of Pages: ");
        scanf("%d", &books[i].pages);
    }

    // Print book records
    printf("\nLibrary Book Records:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Price: ₹%.2f\n", books[i].price);
        printf("Pages: %d\n", books[i].pages);
    }

    return 0;
}

```

