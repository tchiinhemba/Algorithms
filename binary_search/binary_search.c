#include <stdio.h>


/**
 * 
 * Binary Search Algorithm
 * 
 * @param list -  List of elements
 * @param length - Length of the list
 * @param item - Item that you need to find
 * @returns - The index of the element you are looking for.
 */

int binarySearch(int list[], int length, int item);

int main() {

    int list[100];
    for (int i = 0; i < 100; ++i) {
        list[i] = i + 1;
    }

    // To run the algo, we need a list.
    // Below I created a list of 100 numeric elements
    int indexOfElement = binarySearch(list, 100, 42);
    printf("%d\n", indexOfElement);

    return 0;
}

// The Algorithm
int binarySearch(int list[], int length, int item) {
    int lowest = 0;
    int highest = length - 1;
    int middle;
    int response;


    while (lowest <= highest) {
        middle = (lowest + highest) / 2;
        response = list[middle];


        if (response == item) {
            return middle;
        }

        if (response > item) {
            highest = middle - 1;
        } else {
            lowest = middle + 1;
        }
    }
    return - 1;
}