#ifndef SATELLITE_H
#define SATELLITE_H

// struct with typedef PayloadOperation
typedef struct Telecommand {
  int commandID;
  float parameters[3];
} Telecommand;


// struct with typedef Telemetry
typedef struct Telemetry{
  int statusCode;
  float parameters[3];
} Telemetry;

#endif