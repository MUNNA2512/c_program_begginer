/**
 * @file premium_utils.c
 * @brief Premium utility functions for C programming collection
 * @author Your Name
 * @version 1.0
 * @date 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <math.h>

/**
 * @brief Color codes for console output
 */
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define WHITE "\x1B[37m"
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"

/**
 * @brief Error codes
 */
#define SUCCESS 0
#define ERROR_INVALID_INPUT -1
#define ERROR_DIVISION_BY_ZERO -2
#define ERROR_MEMORY_ALLOCATION -3
#define ERROR_FILE_OPERATION -4
#define ERROR_ARRAY_BOUNDS -5

/**
 * @brief Debug mode flag
 */
#ifndef DEBUG
#define DEBUG 0
#endif

/**
 * @brief Debug print macro
 */
#define debug_print(fmt, ...)                             \
    do                                                    \
    {                                                     \
        if (DEBUG)                                        \
            fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
                    __LINE__, __func__, __VA_ARGS__);     \
    } while (0)

/**
 * @brief Type for history entry
 */
typedef struct
{
    char operation[100];
    time_t timestamp;
} HistoryEntry;

/**
 * @brief Global history array and count
 */
static HistoryEntry g_history[100];
static int g_historyCount = 0;

/**
 * @brief Validates an integer input
 * @param prompt The prompt to display
 * @param min Minimum valid value
 * @param max Maximum valid value
 * @return The validated integer
 */
int validateInteger(const char *prompt, int min, int max)
{
    int num;
    char term;
    int valid = 0;

    do
    {
        printf("%s", prompt);
        if (scanf("%d%c", &num, &term) != 2 || term != '\n' || num < min || num > max)
        {
            printf(RED "Invalid input. Please enter an integer between %d and %d.\n" RESET, min, max);
            while (getchar() != '\n')
                ; // Clear input buffer
        }
        else
        {
            valid = 1;
        }
    } while (!valid);

    return num;
}

/**
 * @brief Validates a float input
 * @param prompt The prompt to display
 * @param min Minimum valid value
 * @param max Maximum valid value
 * @return The validated float
 */
float validateFloat(const char *prompt, float min, float max)
{
    float num;
    char term;
    int valid = 0;

    do
    {
        printf("%s", prompt);
        if (scanf("%f%c", &num, &term) != 2 || term != '\n' || num < min || num > max)
        {
            printf(RED "Invalid input. Please enter a number between %.2f and %.2f.\n" RESET, min, max);
            while (getchar() != '\n')
                ; // Clear input buffer
        }
        else
        {
            valid = 1;
        }
    } while (!valid);

    return num;
}

/**
 * @brief Safe memory allocation
 * @param size Size in bytes to allocate
 * @return Pointer to allocated memory
 */
void *safeAlloc(size_t size)
{
    void *ptr = malloc(size);
    if (ptr == NULL)
    {
        printf(RED "Memory allocation failed.\n" RESET);
        exit(ERROR_MEMORY_ALLOCATION);
    }
    return ptr;
}

/**
 * @brief Prints an error message
 * @param errorCode The error code
 */
void printError(int errorCode)
{
    printf(RED "ERROR: ");
    switch (errorCode)
    {
    case ERROR_INVALID_INPUT:
        printf("Invalid input provided.");
        break;
    case ERROR_DIVISION_BY_ZERO:
        printf("Division by zero attempted.");
        break;
    case ERROR_MEMORY_ALLOCATION:
        printf("Memory allocation failed.");
        break;
    case ERROR_FILE_OPERATION:
        printf("File operation failed.");
        break;
    case ERROR_ARRAY_BOUNDS:
        printf("Array bounds exceeded.");
        break;
    default:
        printf("Unknown error (code: %d).", errorCode);
    }
    printf(RESET "\n");
}

/**
 * @brief Prints a success message
 * @param message The message to print
 */
void printSuccess(const char *message)
{
    printf(GREEN "%s" RESET "\n", message);
}

/**
 * @brief Prints a warning message
 * @param message The message to print
 */
void printWarning(const char *message)
{
    printf(YELLOW "%s" RESET "\n", message);
}

/**
 * @brief Prints information message
 * @param message The message to print
 */
void printInfo(const char *message)
{
    printf(BLUE "%s" RESET "\n", message);
}

/**
 * @brief Adds an entry to operation history
 * @param operation The operation description
 */
void addToHistory(const char *operation)
{
    if (g_historyCount < 100)
    {
        strncpy(g_history[g_historyCount].operation, operation, 99);
        g_history[g_historyCount].operation[99] = '\0';
        g_history[g_historyCount].timestamp = time(NULL);
        g_historyCount++;
    }
    else
    {
        printWarning("History buffer full. Oldest entry will be overwritten.");

        // Shift all entries one position back
        for (int i = 0; i < 99; i++)
        {
            g_history[i] = g_history[i + 1];
        }

        // Add new entry at the end
        strncpy(g_history[99].operation, operation, 99);
        g_history[99].operation[99] = '\0';
        g_history[99].timestamp = time(NULL);
    }
}

/**
 * @brief Displays the operation history
 */
void displayHistory()
{
    printf(BOLD "\n===== Operation History =====" RESET "\n");

    if (g_historyCount == 0)
    {
        printf("No operations recorded yet.\n");
        return;
    }

    for (int i = 0; i < g_historyCount; i++)
    {
        char timeStr[26];
        ctime_r(&g_history[i].timestamp, timeStr);
        timeStr[24] = '\0'; // Remove newline
        printf("%d. [%s] %s\n", i + 1, timeStr, g_history[i].operation);
    }
}

/**
 * @brief Clears the console screen
 */
void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

/**
 * @brief Shows a progress bar
 * @param current Current progress
 * @param total Total work to be done
 * @param width Width of the progress bar
 */
void showProgress(int current, int total, int width)
{
    float percent = (float)current / total;
    int chars = (int)(width * percent);

    printf("\r[");
    for (int i = 0; i < width; i++)
    {
        if (i < chars)
            printf("#");
        else
            printf(" ");
    }
    printf("] %.1f%%", percent * 100);
    fflush(stdout);
}

/**
 * @brief Measures execution time of a function
 * @param func Function pointer to measure
 * @return Execution time in seconds
 */
double measureExecutionTime(void (*func)(void))
{
    clock_t start, end;

    start = clock();
    func();
    end = clock();

    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

/**
 * @brief Saves result to a file
 * @param filename File to save to
 * @param format Format string
 * @param ... Additional arguments for format
 * @return 0 on success, error code on failure
 */
int saveToFile(const char *filename, const char *format, ...)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printError(ERROR_FILE_OPERATION);
        return ERROR_FILE_OPERATION;
    }

    va_list args;
    va_start(args, format);
    vfprintf(fp, format, args);
    va_end(args);

    fclose(fp);

    char message[100];
    sprintf(message, "Result saved to %s", filename);
    printSuccess(message);

    return SUCCESS;
}

/**
 * @brief Loads data from a file
 * @param filename File to load from
 * @param buffer Buffer to store data
 * @param size Size of buffer
 * @return 0 on success, error code on failure
 */
int loadFromFile(const char *filename, char *buffer, size_t size)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printError(ERROR_FILE_OPERATION);
        return ERROR_FILE_OPERATION;
    }

    size_t read_size = fread(buffer, 1, size - 1, fp);
    buffer[read_size] = '\0';

    fclose(fp);

    char message[100];
    sprintf(message, "Data loaded from %s", filename);
    printSuccess(message);

    return SUCCESS;
}

/**
 * @brief Displays a menu and gets user choice
 * @param title Menu title
 * @param options Array of option strings
 * @param num_options Number of options
 * @return User's choice (1-based index)
 */
int displayMenu(const char *title, const char *options[], int num_options)
{
    printf(BOLD "\n===== %s =====" RESET "\n", title);

    for (int i = 0; i < num_options; i++)
    {
        printf("%d. %s\n", i + 1, options[i]);
    }
    printf("0. Exit\n");

    return validateInteger("Enter your choice: ", 0, num_options);
}

/**
 * @brief Gets current date and time as a string
 * @param buffer Buffer to store the date string
 * @param size Size of buffer
 */
void getCurrentDateTime(char *buffer, size_t size)
{
    time_t now = time(NULL);
    strftime(buffer, size, "%Y-%m-%d %H:%M:%S", localtime(&now));
}

/**
 * @brief Generates a random integer in a range
 * @param min Minimum value (inclusive)
 * @param max Maximum value (inclusive)
 * @return Random integer
 */
int getRandomInt(int min, int max)
{
    static int seeded = 0;

    if (!seeded)
    {
        srand(time(NULL));
        seeded = 1;
    }

    return min + rand() % (max - min + 1);
}

/**
 * @brief Swaps two integers
 * @param a Pointer to first integer
 * @param b Pointer to second integer
 */
void swapInt(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief Finds maximum in an array
 * @param arr Array of integers
 * @param size Size of array
 * @return Maximum value
 */
int findMax(const int arr[], int size)
{
    if (size <= 0)
        return 0;

    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

/**
 * @brief Finds minimum in an array
 * @param arr Array of integers
 * @param size Size of array
 * @return Minimum value
 */
int findMin(const int arr[], int size)
{
    if (size <= 0)
        return 0;

    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

/**
 * @brief Calculates average of an array
 * @param arr Array of integers
 * @param size Size of array
 * @return Average value
 */
float calculateAverage(const int arr[], int size)
{
    if (size <= 0)
        return 0.0f;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

/**
 * @brief Checks if a string is a palindrome
 * @param str String to check
 * @return 1 if palindrome, 0 otherwise
 */
int isPalindrome(const char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (tolower(str[i]) != tolower(str[len - i - 1]))
        {
            return 0;
        }
    }
    return 1;
}

/**
 * @brief Reverses a string in place
 * @param str String to reverse
 */
void reverseString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

/**
 * @brief Visualizes an array as a bar chart
 * @param arr Array to visualize
 * @param size Size of array
 * @param highlight Index to highlight (or -1 for none)
 */
void visualizeArray(const int arr[], int size, int highlight)
{
    int max = findMax(arr, size);
    int scale = (max > 50) ? max / 50 + 1 : 1;

    printf("\n");
    for (int i = 0; i < size; i++)
    {
        if (i == highlight)
            printf(RED);
        printf("%3d |", arr[i]);

        int bars = arr[i] / scale;
        for (int j = 0; j < bars; j++)
        {
            printf("█");
        }

        if (i == highlight)
            printf(RESET);
        printf("\n");
    }
}

/**
 * @brief Displays a help message about a program
 * @param program_name Name of the program
 * @param description Description of the program
 * @param usage Usage instructions
 */
void showHelp(const char *program_name, const char *description, const char *usage)
{
    printf(BOLD "\n===== Help: %s =====" RESET "\n", program_name);
    printf("Description: %s\n", description);
    printf("Usage: %s\n", usage);
}

/**
 * @brief Main function for testing the utilities
 */
int main()
{
    // This is a test function to demonstrate utility usage
    clearScreen();
    printInfo("Welcome to Premium Utilities Test");

    // Test menu display
    const char *options[] = {
        "Test Input Validation",
        "Test Progress Bar",
        "Test Array Visualization",
        "Test History Functions",
        "Test File Operations"};

    int choice = displayMenu("Premium Utilities Test Menu", options, 5);

    switch (choice)
    {
    case 0:
        printInfo("Exiting program...");
        break;
    case 1:
    {
        int num = validateInteger("Enter an integer (0-100): ", 0, 100);
        float fnum = validateFloat("Enter a float (0-10.0): ", 0.0f, 10.0f);

        char buffer[100];
        sprintf(buffer, "Integer: %d, Float: %.2f", num, fnum);
        addToHistory("Tested input validation");
        printSuccess(buffer);
        break;
    }
    case 2:
    {
        printInfo("Testing progress bar...");
        for (int i = 0; i <= 100; i++)
        {
            showProgress(i, 100, 50);
            // Small delay to see the progress
            for (volatile int j = 0; j < 1000000; j++)
                ;
        }
        printf("\n");
        addToHistory("Tested progress bar");
        break;
    }
    case 3:
    {
        int arr[10];
        printInfo("Generating random array...");
        for (int i = 0; i < 10; i++)
        {
            arr[i] = getRandomInt(1, 100);
        }

        visualizeArray(arr, 10, -1);

        printInfo("Finding maximum...");
        int max_idx = 0;
        for (int i = 1; i < 10; i++)
        {
            if (arr[i] > arr[max_idx])
                max_idx = i;
        }

        visualizeArray(arr, 10, max_idx);

        char buffer[100];
        sprintf(buffer, "Maximum value: %d at index %d", arr[max_idx], max_idx);
        printSuccess(buffer);
        addToHistory("Tested array visualization");
        break;
    }
    case 4:
        addToHistory("Tested history function");
        displayHistory();
        break;
    case 5:
    {
        char buffer[100];
        getCurrentDateTime(buffer, sizeof(buffer));

        char filename[100];
        sprintf(filename, "utils_test_%s.txt", buffer);
        // Replace spaces and colons with underscores for filename
        for (int i = 0; buffer[i]; i++)
        {
            if (buffer[i] == ' ' || buffer[i] == ':')
            {
                buffer[i] = '_';
            }
        }

        saveToFile(buffer, "Test data saved at %s\nRandom number: %d\n",
                   buffer, getRandomInt(1, 1000));

        addToHistory("Tested file operations");
        break;
    }
    default:
        printError(ERROR_INVALID_INPUT);
    }

    printInfo("Thank you for testing Premium Utilities!");
    return 0;
}