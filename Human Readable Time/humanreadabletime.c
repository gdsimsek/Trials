#include <stdio.h>

char *human_readable_time (unsigned seconds, char *time_string)
{
	unsigned hours = seconds / 3600;
    unsigned minutes = (seconds % 3600) / 60;
    unsigned secs = seconds % 60;

    snprintf(time_string, 9,"%02u:%02u:%02u", hours, minutes, secs);
    return time_string;
}