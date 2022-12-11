#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "var.h"
#include "function.h"

void cmd(int argc, char *argv[])
{
    (void)argc;

    char ver[] = "--version";
    char hel[] = "--help";

    char namever[] = "cmath 0.3\n";
    char builver[] = "This program was built for x86_64-pc-linux-gnu\n";
    char copyver[] = "Copyright (C) 2022-2022 Aarch-64 | xdanep.\n";
    char licever[] = "GPLv3+ License: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\n\n";
    char typever[] = "This is free software: anyone is free to redistribute and modify it.\n";
    char garaver[] = "There is no WARRANTY, up to the limits permitted by applicable laws.\n";
    
    if (argc==2)
    {
        if (!strcmp(argv[1], hel)) // display help
        {
            printf("--version\t\t\tProgram version\n");
            printf("music.mp3\t\t\tPlay the music\n");
            exit(EXIT_SUCCESS);
        }
        else if (!strcmp(argv[1], ver)) // display program version
        {
            printf("%s%s%s%s%s%s",namever,builver,copyver,licever,typever,garaver);
            exit(EXIT_SUCCESS);
        }
    }
}
