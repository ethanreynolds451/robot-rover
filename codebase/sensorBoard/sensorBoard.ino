#include "programs/streamSensorData/streamSensorData.h"

void setup() {
    streamSensorData::initialize();
}

void loop() {
    streamSensorData::run();
}