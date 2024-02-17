#include "processes.h"

u32     uniquepids[MAX_PROCESSES] = {0};
Process processes [MAX_PROCESSES];
u32     processcount = 0;

static u32 nextpid()
{
    int isunique;
    u32 nextpid;

    while (!isunique){
        isunique = 1;
        nextpid = rand();
    
        for (int i = 0; i < MAX_PROCESSES; ++i)
            if (uniquepids[i] == nextpid)
                isunique = 0;
    }

    return nextpid;
}

u32 createnewprocess(char *name)
{
    if (processcount >= 5)
        return 0;

    u32 _nextpid = nextpid();

    strcpy(processes[processcount].name, name);
    processes[processcount].pid = _nextpid;

    processcount++;

    return _nextpid;
};

int stopprocess(u32 pid)
{
    int stopidx = 0;
    int lastidx = 0;

    for (int i = 0; i < MAX_PROCESSES; ++i){
        if (processes[i].pid == pid)
            stopidx = i;
        if (!processes[i].pid)
            lastidx = i;
    }

    if (!stopidx){
        return stopidx;
    }

    processes[stopidx] = processes[lastidx];
    processes[lastidx] = (Process){.name = "", .pid = 0};

    return 1;
};