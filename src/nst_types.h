#ifndef NST_TYPES_H
#define NST_TYPES_H
#include <float.h>
#include <math.h>
#include "math3d/math_3d.h"

#define MAX_OUTPUT_EVENTS 16
#define NST_EVENT_MAX_VALUES_COUNT 16

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

typedef struct {
    double timestamp;
    unsigned int id;
    int values_count;
    double values[NST_EVENT_MAX_VALUES_COUNT];
} nst_event_t;

typedef struct {
  vec3_t acc_sample;
  vec3_t gyro_sample;
  vec3_t threshold;
  int fsm_count;
} dsox_data_t;

typedef struct {
    dsox_data_t dsox_data;
} nst_data_t;


enum {
    SENSOR_TYPE_ACCELEROMETER = 1,
    SENSOR_TYPE_GYROSCOPE = 4,
    SIMPLE_ACCEL_FILTER = 2010
};


#endif