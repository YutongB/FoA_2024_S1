/* Mergesort on an integer array.
*/
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define SIZE 100000

typedef int data_t;

/* This needs to be included rather than compiled, because the use
   of data_t as the array that is being sorted. */
#include "sortscaffold.c"

/* Amongst other things, sortscaffold.c defines these two :
	int cmp(data_t *p1, data_t *p2);
	void swap_data(data_t *p1, data_t *p2);
	void copy_data(data_t *to, data_t *fr);
*/

static void merge(data_t A[], int mid, int n, data_t T[]);
static void recursive_merge_sort(data_t A[], int n, data_t T[]);
void merge_sort(data_t A[], int n);

static void
merge(data_t A[], int mid, int n, data_t T[]) {
	/* merge array sections A[0..mid-1] and A[mid..n-1] */
	int i, s1, s2;
	/* copy first section into temporary array T */
	for (i=0; i<mid; i++) {
		copy_data(T+i, A+i);
	}
	i = 0;
	s1 = 0; s2 = mid;
	/* merge second section at A[mid] with T, putting output 
		back into section starting at A[0] */
	while (s1<mid && s2<n) {
		if (cmp(T+s1,A+s2) < 0) {
			/* element from T goes next */
			copy_data(A+i, T+s1);
			s1 += 1;
		} else {
			/* element from A goes next */
			copy_data(A+i, A+s2);
			s2 += 1;
		}
		i += 1;
	}
	while (s1<mid) {
		/* copy over any remaining elements in T */
		copy_data(A+i, T+s1);
		s1 += 1;
		i += 1;
	}
	/* all elements are now in their final positions */
}

static void
recursive_merge_sort(data_t A[], int n, data_t T[]) {
	int mid;
	if (n<=1) {
		return;
	}
	mid = n/2;
	recursive_merge_sort(A, mid, T);
	recursive_merge_sort(A+mid, n-mid, T);
	merge(A, mid, n, T);
}

void
merge_sort(data_t A[], int n) {
	data_t *T;
	T = malloc((n/2)*sizeof(*T));
	assert(T != NULL);
	recursive_merge_sort(A, n, T);
	free(T);
}

int
main(int argc, char *argv[]) {
	int n=SIZE;
	if (argc>1) {
		n = atoi(argv[1]);
	}
	printf("Testing merge sort\n");
	do_sort_tests(merge_sort, n);
	return 0;
}

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */