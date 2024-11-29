#include <stdio.h>

int main() {
    int roll_number;
    char name[50];
    float marks[5], total = 0.0, average;

    // Input roll number and name
    printf("Enter roll number: ");
    scanf("%d", &roll_number);
    printf("Enter name: ");
    scanf("%s", name);

    // Input marks for 5 subjects
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate average
    average = total / 5;

    // Display results
    printf("\nRoll Number: %d\n", roll_number);
    printf("Name: %s\n", name);
    for (int i = 0; i < 5; i++) {
        printf("Marks for subject %d: %.2f\n", i + 1, marks[i]);
    }
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
