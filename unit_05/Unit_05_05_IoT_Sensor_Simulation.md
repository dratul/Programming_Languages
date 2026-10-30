# 5.5 Mini Demo: IoT Sensor Simulation

This tutorial shows a simple IoT sensor simulation in Python. We generate sample solar-panel voltage readings for a community centre, store them in a list, and print their average.

## Example

```python
import random

solar_voltage_readings = []

for _ in range(5):
    reading = round(random.uniform(15, 20), 2)
    solar_voltage_readings.append(reading)

print("Solar-panel readings (V):", solar_voltage_readings)
print("Average voltage (V):", round(sum(solar_voltage_readings) / len(solar_voltage_readings), 2))
```

**Sample Output:**

```text
Solar-panel readings (V): [17.18, 19.35, 16.86, 18.94, 17.12]
Average voltage (V): 17.89
```

## Explanation

* `random.uniform(15, 20)` generates a sample voltage between 15 and 20 volts.
* Each value is appended to the list.
* The program computes the average voltage using `sum()` and `len()`.

## Real-World Meaning

This is similar to how an IoT system could collect solar-panel values, store them, and analyze them for monitoring.

## Key Points

* Python can simulate electronics sensor readings for a local project.
* Lists are used to store readings.
* Basic statistics such as average can be computed easily.

## Practice Tutorials

1. Simulate five solar-panel voltage readings and print the average value.

2. Generate a list of phone battery readings and display the maximum and minimum values.

---

## Related topics
- [Python data structures](Unit_05_01_Python_Data_Structures.md)
- [Python file handling](Unit_05_02_Python_File_Handling.md)
- [NumPy introduction](Unit_05_03_NumPy_Intro.md)
- [Matplotlib introduction](Unit_05_04_Matplotlib_Intro.md)
- [IoT sensor simulation](Unit_05_05_IoT_Sensor_Simulation.md)

---


[Back to syllabus](../README.md)
