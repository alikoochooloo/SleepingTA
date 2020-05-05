/**
 * Header file for sleeping TA
 */

#include <pthread.h>
#include <semaphore.h>

// the maximum time (in seconds) to sleep
#define MAX_SLEEP_TIME	5

// number of maximum waiting students
#define MAX_WAITING_STUDENTS	3

// number of potential students
#define NUM_OF_STUDENTS		5

// number of available seats
#define NUM_OF_SEATS	3

// current number of students waiting
//#define WAITING  0

// the numeric id of each student
int student_id[NUM_OF_STUDENTS];

// student function prototype
void *student_loop(void *param);

// ta function prototype
void *ta_loop(void *param);

// simulate programming
void programming(int sleeptime);

// simulate helping a student
void help_student(int sleeptime);

int waiting;

pthread_mutex_t mutex;
//pthread_mutex_init(&mutex,NULL)

sem_t student_sem;
sem_t ta_sem;

//sem_init(&student_sem,1,1);
//sem_init(&ta_sem,1,1);
