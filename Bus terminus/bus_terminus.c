#include <stddef.h>

int bus_terminus (size_t nb_stops, const short bus_stops[][2])
{
    int get_of = 0;
    int get_on = 0;
    int total = 0;
    int i = 0;
    while (i < nb_stops)
    {
        get_on = bus_stops[i][0];
        get_of = bus_stops[i][1];
        get_of = -get_of;
        i++;
        total += get_on + get_of;
    }
    return total;
}