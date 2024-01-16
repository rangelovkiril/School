#include <stdio.h>
#include <string.h>

#include "controls.h"

int main(int argc, char **argv)
{

    char house = 0;

    char input[24];
    char command[24];
    int  roomnumber;

    puts("This is programm, that visualise lights in smart house.\n");
    puts("Switch light in some room: switch <room number>\n");
    puts("Get current information abouth light in rooms: getlight\n");
    puts("Exit the programm: exit\n");
    putchar('\n');

    for(;;)
    {
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            puts("Unexpected error occured. Exiting...");
            break;
        }

        int formated = sscanf(input, "%s %d", command, &roomnumber);

        if (!formated)
        {
            puts("Invalid input format. Please enter a valid command.");
            putchar('\n');
            continue;
        }

        if (strcmp(command, "exit") == 0)
        {
            puts("Exiting the program...");
            break;
        }

        if (strcmp(command, "switch") == 0 && formated == 2)
            switchlight(roomnumber, &house);

        else if (strcmp(command, "switch") == 0 && formated == 1)
            puts("No room number givven. Please enter a room number.\n");
            putchar('\n');

        if (strcmp(command, "printstate") == 0)

            printstate(house);
    }
    
    return 0;
}
