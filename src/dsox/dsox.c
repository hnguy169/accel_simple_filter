
#include "dsox.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void dsox_init(dsox_data_t *dsox_data)
{
  dsox_data->fsm_count = 1;
}

void dsox_fsm_update(dsox_data_t *dsox_data, int fsm_index, nst_event_t event, nst_event_t *output_events, int *output_events_count)
{
  int signal = 0;
  if (dsox_data->acc_sample.x > dsox_data->threshold.x) {
    output_events[*output_events_count].values[0] = dsox_data->acc_sample.x;
    signal = 1;
  };
  if (dsox_data->acc_sample.y > dsox_data->threshold.y) {
    output_events[*output_events_count].values[1] = dsox_data->acc_sample.y;
    signal = 1;
  };
  if (dsox_data->acc_sample.z > dsox_data->threshold.z) {
    output_events[*output_events_count].values[2] = dsox_data->acc_sample.z;
    signal = 1;
  };
  if (signal == 1) {
    output_events[*output_events_count].timestamp = event.timestamp;
    output_events[*output_events_count].id = SIMPLE_ACCEL_FILTER;
    output_events[*output_events_count].values_count = 3;
    (*output_events_count)++;
  };
}

void dsox_accelerometer_update(dsox_data_t *dsox_data, nst_event_t event, nst_event_t *output_events, int *output_events_count)
{
  dsox_data->acc_sample = vec3(event.values[0], event.values[1], event.values[2]);
}

void dsox_update(dsox_data_t *dsox_data, const nst_event_t input_event, nst_event_t output_events[MAX_OUTPUT_EVENTS], int *output_events_count)
{
  switch (input_event.id)
  {
  case SENSOR_TYPE_ACCELEROMETER:
    dsox_accelerometer_update(dsox_data, input_event, output_events, output_events_count);
  for (int fsm_index = 0; fsm_index < dsox_data->fsm_count; fsm_index++)
  {
    dsox_fsm_update(dsox_data, fsm_index, input_event, output_events, output_events_count);
  }
  break;
  }
}
