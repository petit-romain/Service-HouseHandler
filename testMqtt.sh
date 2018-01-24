#!/bin/bash
mosquitto_pub -h $1 -t "sensor/temp/out" -m "19.53"
mosquitto_pub -h $1 -t "sensor/temp/in" -m "20.07"

mosquitto_pub -h $1 -t "sensor/press/out" -m "20.53"
mosquitto_pub -h $1 -t "sensor/press/in" -m "21.07"

mosquitto_pub -h $1 -t "sensor/humi/out" -m "21.53"
mosquitto_pub -h $1 -t "sensor/humi/in" -m "22.07"

