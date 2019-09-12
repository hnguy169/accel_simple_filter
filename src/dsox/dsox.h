#ifndef DSOX_H
#define DSOX_H
#include "../nst_main.h"

void dsox_init(dsox_data_t *dsox_data);

void dsox_fsm_update(dsox_data_t *dsox_data, int fsm_index, nst_event_t event, nst_event_t *output_events, int *output_events_count);

void dsox_update(dsox_data_t *dsox_data, nst_event_t input_event, nst_event_t output_events[MAX_OUTPUT_EVENTS], int *output_events_count);

#endif