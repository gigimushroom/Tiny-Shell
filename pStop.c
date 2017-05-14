#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int main(int argc, char **argv) 
{
	    int i, secs;
		    pid_t pid; 

			    if (argc != 2) {
						fprintf(stderr, "Usage: %s <n>\n", argv[0]);
							exit(0);
							    }
				    secs = atoi(argv[1]);

					    for (i=0; i < secs; i++)
							       sleep(1);
							
						    pid = getpid(); 

							    if (kill(-pid, SIGTSTP) < 0)
									       fprintf(stderr, "kill (tstp) error");

								sleep(7);
								exit(0);

}

