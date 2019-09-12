#include "nst_main.h"
#include "dsox/dsox.h"
#include <math.h>
#include <stdio.h>

void algorithm_init()
{
  dsox_init(&nst_data.dsox_data);
}

void algorithm_update(const nst_event_t input_event, nst_event_t output_events[MAX_OUTPUT_EVENTS], int *output_events_count)
{
  dsox_update(&nst_data.dsox_data, input_event, output_events, output_events_count);
}
