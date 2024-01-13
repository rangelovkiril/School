#include <stdio.h>
#include <stdio.h>
#include <string.h>

#include "processes.h"

int main(int argc, char **argv)
{

    char buff[64];
    char command[24];
    char name[32];
    int pid;

    puts("This is program for simple process handling - creating, terminating and monitoring.");
    puts("Create new process: create <process name>");
    puts("Terminate a process: stop <pid>");
    puts("Print all processes: printall");
    puts("Exit the program: exit\n");

    for (;;)
    {

        if (fgets(buff, sizeof(buff), stdin) == NULL)
        {
            printf("Unexpected error occured. Exiting...\n");
            break;
        }

        if (sscanf(buff, "%s", command) == 1)
        {

            if (strcmp(command, "exit") == 0)
            {
                printf("Exiting program.\n");
                return 0;
            }

            if (strcmp(command, "printall") == 0)
                for (int i = 0; i < MAX_PROCESSES; ++i)
                {
                    if (!processes[i].pid)
                        break;

                    printf("Process %s: %d\n", processes[i].name, processes[i].pid);
                }

            if (strcmp(command, "create") == 0)
            {
                if (sscanf(buff, "%*s %s", name) == 1)
                {
                    createnewprocess(name);
                }
                else
                {
                    printf("No name givven. Please enter name\n");
                }
            }

            if (strcmp(command, "stop") == 0)
            {
                if (sscanf(buff, "%*s %d", &pid) == 1)
                {
                    stopprocess(pid);
                }
                else
                {
                    printf("Invalid input for stop command. Usage: stop <pid>\n");
                }
            }
        }
        else
        {
            printf("Invalid command. Please try again.\n");
        }
    }

    return 0;
}