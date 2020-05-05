/**
 * General structure of the teaching assistant.
 *
 */

#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include "ta.h"

void *ta_loop(void *param){	
	int sleep_time;
	printf("I am the TA\n");
	while(1){
		if (waiting != 0){
			printf("number waiting students: %d\n",waiting);
			sem_wait(&student_sem);
			waiting--;
			srandom((unsigned)time(NULL));
			sleep_time = (int)((random()%MAX_SLEEP_TIME) +1);
			help_student(sleep_time);
			sem_post(&ta_sem);
		}
	}
}
