# 5.4 Introduction to Matplotlib

Matplotlib is a Python library for plotting graphs and visualizing data. It is widely used in engineering, data analysis, and scientific research.

## Installing Matplotlib

Run this command in a terminal or command prompt, not in the Python interpreter:

```text
python -m pip install matplotlib
```

To check that Matplotlib is installed and display its version, run:

```text
python -c "import matplotlib; print(matplotlib.__version__)"
```

## Simple Line Graph

```python
import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [2, 4, 6, 8, 10]

plt.plot(x, y)
plt.title("Simple Line Graph")
plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.show()
```

This creates a simple graph showing the relationship between `x` and `y`.
The graph is a rising straight line through the points `(1, 2)`, `(2, 4)`,
`(3, 6)`, `(4, 8)`, and `(5, 10)`.

## Basic Plot Points

```python
import matplotlib.pyplot as plt

months = ["Jan", "Feb", "Mar", "Apr"]
temperature = [18, 22, 25, 23]

plt.plot(months, temperature)
plt.ylabel("Temperature (°C)")
plt.show()
```

The plot shows the monthly temperatures rising from January through March,
then falling slightly in April.

## Why Use Matplotlib?

Matplotlib helps present data clearly. Graphs are useful for comparing trends, analyzing sensor readings, and reporting results in projects.

## Key Points

* Matplotlib is used for plotting graphs.
* `plt.plot()` draws a line chart.
* Titles and labels make the chart easier to understand.
* Graphs are useful for reporting scientific and engineering data.

## Practice Tutorials

1. Use Matplotlib to plot a simple line graph of four readings with labels on both axes.

2. Plot two lines on the same graph to compare temperature changes for two days.

---

[Next topic: IoT sensor simulation](Unit_05_05_IoT_Sensor_Simulation.md)

## Related topics
- [Python data structures](Unit_05_01_Python_Data_Structures.md)
- [Python file handling](Unit_05_02_Python_File_Handling.md)
- [NumPy introduction](Unit_05_03_NumPy_Intro.md)
- [Matplotlib introduction](Unit_05_04_Matplotlib_Intro.md)
- [IoT sensor simulation](Unit_05_05_IoT_Sensor_Simulation.md)

---


[Back to syllabus](../README.md)
