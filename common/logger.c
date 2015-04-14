#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logger.h"

void log_error(char *message) {
    printf(ANSI_COLOR_RED);
    fprintf(stderr, "[GCErr] - %s\n", message);
    printf(ANSI_COLOR_RESET);
    exit(1);
}

void logWarning(char *message) {
    printf(ANSI_COLOR_YELLOW);
    printf("[GCWarning]- %s\n", message);
    printf(ANSI_COLOR_RESET);
}

void logInfo(char *message, int log) {
    printf(ANSI_COLOR_CYAN);
    printf("[GCLog] - %s\n", message);
    printf(ANSI_COLOR_RESET);
}

void debug(char *message, int log) {
    if (log) {
        printf(ANSI_COLOR_BLUE);
        printf("[GCDbg] - %s\n", message);
        printf(ANSI_COLOR_RESET);
    }
}
