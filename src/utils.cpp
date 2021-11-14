#include "utils.h"

// copied from https://www.usna.edu/Users/cs/roche/courses/f20ic210/notes/06/files.php?f=minmax.c out of lazyness
void minmax(float* minptr, float* maxptr, float* array, int size) {
	// start with both equaling the first array element
	*minptr = array[0];
	*maxptr = array[0];

	// go through the rest of the array and update as necessary
	for (int i = 1; i < size; ++i) {
		if (array[i] < *minptr) {
			*minptr = array[i];
		} else if (array[i] > *maxptr) {
			*maxptr = array[i];
		}
	}
}