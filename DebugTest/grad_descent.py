import numpy as np
import matplotlib.pyplot as plt

def g_des(x, y):
    m_curr = b_curr = 0
    iteration = 1000
    n = len(x)
    learning_rate = 0.001

    # For live plotting
    plt.ion()
    fig, ax = plt.subplots()
    sc = ax.scatter(x, y, color='red')
    line, = ax.plot(x, m_curr * x + b_curr, color='blue')

    for i in range(iteration):
        y_pred = m_curr * x + b_curr  # y = mx + c
        cost = (1/n) * sum([val**2 for val in (y - y_pred)])
        md = -(2/n) * sum(x * (y - y_pred))
        bd = -(2/n) * sum(y - y_pred)

        m_curr = m_curr - learning_rate * md
        b_curr = b_curr - learning_rate * bd

        # Update the plot for live visualization
        line.set_ydata(m_curr * x + b_curr)
        ax.set_title(f'Iteration: {i}, Cost: {cost:.4f}, m_curr: {m_curr:.4f}, b_curr: {b_curr:.4f}')
        plt.pause(0.01)

    # Keep the plot window open until manually closed
    plt.ioff()
    plt.show()

    return m_curr, b_curr

x = np.array([1, 2, 3, 4, 5])
y = np.array([5, 7, 9, 11, 13])

final_m, final_b = g_des(x, y)