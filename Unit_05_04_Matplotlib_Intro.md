# 5.4 Introduction to Matplotlib

Matplotlib is a Python library for plotting graphs and visualizing data. It is widely used in engineering, data analysis, and scientific research.

## Installing Matplotlib

```python
# pip install matplotlib
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

## Basic Plot Points

```python
import matplotlib.pyplot as plt

months = ["Jan", "Feb", "Mar", "Apr"]
temperature = [18, 22, 25, 23]

plt.plot(months, temperature)
plt.ylabel("Temperature (°C)")
plt.show()
```

## Why Use Matplotlib?

Matplotlib helps present data clearly. Graphs are useful for comparing trends, analyzing sensor readings, and reporting results in projects.

## Key Points

* Matplotlib is used for plotting graphs.
* `plt.plot()` draws a line chart.
* Titles and labels make the chart easier to understand.
* Graphs are useful for reporting scientific and engineering data.
