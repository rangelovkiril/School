#include <stdio.h>
#include <stdio.h>
#include <string.h>

#include "processes.h"

int main(int argc, char **argv)
{

    char buff[64];
    char command[24];
    char name[32];
    int  pid;

    puts("This is program for simple process handling - creating, terminating and monitoring.");
    puts("Create new process: create <process name>");
    puts("Terminate a process: stop <pid>");
    puts("Print all processes: printall");
    puts("Exit the program: exit");
    putchar('\n');

    for (;;)
    {

        if (fgets(buff, sizeof(buff), stdin) == NULL){
            puts("Unexpected error occured. Exiting...");
            break;
        }

        if (sscanf(buff, "%s", command) == 1)
        {
            if (strcmp(command, "exit") == 0){
                puts("Exiting program.");
                return 0;
            }

            else if (strcmp(command, "printall") == 0)
                for (int i = 0; i < MAX_PROCESSES; ++i){
                    if (!processes[i].pid)
                        break;

                    printf("Process %s: %d\n", processes[i].name, processes[i].pid);
                }

            else if (strcmp(command, "create") == 0){
                if (sscanf(buff, "%*s %s", name) == 1)
                    createnewprocess(name);

                else
                    puts("No name givven. Please enter name");
            }

            else if (strcmp(command, "stop") == 0){
                if (sscanf(buff, "%*s %d", &pid) == 1){
                    int success = stopprocess(pid);
                    
                    if(!success)
                        puts("This process id doesn't exist");
                }
                else
                    puts("Invalid input for stop command. Usage: stop <pid>");
            }
            else
                puts("Invalid command. Please try again.");
        }
    }

    return 0;
}