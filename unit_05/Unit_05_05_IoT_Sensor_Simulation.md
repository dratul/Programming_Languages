# 5.5 Mini Demo: IoT Sensor Simulation

This tutorial shows a simple IoT sensor simulation in Python. We generate sensor values, store them in a list, and print the average temperature.

## Example

```python
import random

sensor_readings = []

for _ in range(5):
    reading = round(random.uniform(20, 35), 2)
    sensor_readings.append(reading)

print("Sensor readings:", sensor_readings)
print("Average temperature:", round(sum(sensor_readings) / len(sensor_readings), 2))
```

**Sample Output:**

```text
Sensor readings: [24.18, 29.35, 21.86, 30.94, 27.12]
Average temperature: 26.69
```

## Explanation

* `random.uniform(20, 35)` generates a random temperature between 20 and 35.
* Each value is appended to the list.
* The program computes the average using `sum()` and `len()`.

## Real-World Meaning

This is similar to how IoT systems collect temperature values from sensors, store them, and analyze them for monitoring or alerting.

## Key Points

* Python can simulate real-world sensor behavior.
* Lists are used to store readings.
* Basic statistics such as average can be computed easily.

## Practice Tutorials

1. Simulate five temperature readings and print the average value.

2. Generate a list of humidity values and display the maximum and minimum values.

---

[Back to syllabus](../README.md)
