#include <discovery.h>
#include <stdio.h>
#include <stdlib.h>

double add(const double a, const double b)
{

    printf("%lf %lf\n", a, b);
    return a + b;
}

double mult(const double a, const double b)
{
    return a*b;
}

//typedef double (*func_op)(const double, const double);

int main(int argc, char *argv[]){

    PluginInstance *instance = (PluginInstance*)malloc(sizeof(PluginInstance));


    instance->op = &mult;

    printf("%lf\n", (*instance->op)(4.0, 6.0));

    return 0;
}
