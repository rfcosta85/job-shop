#include <stdio.h>
#include <math.h>
#include <time.h>
#include <omp.h>
#include <stdbool.h>
#define MAX_NUM 25

#ifdef _OPENMP
#include <omp.h>
#define getClock() omp_get_wtime()
#else
#define getClock() ((double)clock() / CLOCKS_PER_SEC)
#endif

typedef struct operation {
    int job;
    int time;
    int machine;
} Operation;

typedef struct  job {
    int n;
    Operation  operations[MAX_NUM];
} Job;

typedef struct  machine {
    int n;
    bool isFree;
    int endTime;
} Machine;

FILE *inputFile;
FILE *outputFile;
Job jobs[MAX_NUM];
int maxEndTime = 0;

int main(void) {
    printf("Hello, World! with GitHub\n");
    return 0;
}
