
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    int number;
    long long sum = 0;
    int count = 0;
    double average = 0.0;

    file_ptr = fopen("numbers.txt", "r");
    if (file_ptr == NULL) {
        perror("Error opening numbers.txt");
        return 1;
    }

    // Read integers using fscanf, which skips whitespace (including spaces and newlines)
    while (fscanf(file_ptr, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file_ptr);

    if (count > 0) {
        average = (double)sum / count;
        printf("Sum of integers: %lld\n", sum);
        printf("Average of integers: %.2f\n", average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}