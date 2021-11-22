#include <stdio.h> 
#include <stdlib.h>

#ifndef _DISCOVERY_
#define _DISCOVERY_

typedef struct PluginInstance{
    char *name;
    double (*op)(const double, const double);
}PluginInstance;

#endif
