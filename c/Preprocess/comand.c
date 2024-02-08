#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command

#define DEFINE_COMMAND(NAME, TYPE) void TYPE ## _ ## NAME ## _command(void)

DEFINE_COMMAND(quit, internal) {
    printf("Internal quit command called\n");
}

DEFINE_COMMAND(exit, external) {
    printf("External exit command called\n");
}

int main(int argc, char **argv, char **envp) {

    internal_quit_command();
    external_exit_command();

    return 0;
}
