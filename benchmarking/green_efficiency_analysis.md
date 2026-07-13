Measurement Methodology :

The first program, baseline\_loop.c, perofmed a fixed number of operations. Including a loop with 100,000,000 iterations. Compiled and run three times, the recorded results showed execution times and the small differences between runs.The operating system schedules CPU work slightly differently each time. This program servers as a baseline to understand normal timing variability.

The second program, cimparison\_algorithms.c, compares two ways of counting even numbers in an array of 50,000 integers. The naive algorithm uses nested loops, while the single-pass algorithm scans array once. This program was also run three times and recorded. The difference measurements were used to compute average times and compare the efficiency of both approaches. The naive algorithm took 2.653544 seconds, 2.656682 seconds and 2.655049 seconds.

The last program, instrumentation\_lab.c, was copied and updated in last to measure how long each phase of the program takes. Building the dataset, processing and reducing it into a checksum, Using clock\() allowed to capure the time spent in each phase to understand how the workload is distributed. The output successful gave TOTAL seconds, BUILD\_DATA seconds, PROCESS seconds and REDUCE seconds when executed.

Observed Performance Differences :

The most dignificant performance difference appears in comparison\_algorithms.c. The native algorithms time is around 2.655092 seconds, while the single-pass algorithm averages around 0.000103 seconds. This means the naive version is more thsn 25,000 times slower than the single-pass version. Both algorithms operate on the same data and produce consistent results. The difference is entirely to the algorithmic complexity. 

For badline\_loop.c, the three times runs showed only small timing differences. This confirmed that when the workload is fixed and simple, runtime variability is very minimal.
In instrumentation\_lab.c, the processing phase takes the most time, while the dataset building and checksum reduction takes less time. This shows where most of the computation happens and identifies which part of the program is most expensive. 

For results instrumentation\_lab TOTAL seconds: 0.000731
BUILD\_DATA seconds: 0.000287
PROCESS seconds: 0.000308
REDUCE seconds: 0.000131
Relation Between Runtime and Energy Consumption :

Runtime is a reasonable indicator of energy usage when hardware and conditions remain the same. Longer runtime in general means more CPU cycles, which in turn means more energy consumed. In comparison\_algorithms.c, the naive algorithms long runtime compare to the single-pass algrithm suggests much higher energy usage. 
In intrumentation\_lab.c, processing phase dominates total runtime. The CPU is actively perofrming arthmetic operations during this phase, main contributor to energy consumption.

Limitation of the Experiment :

The limitation is that all measurements reply on clock and CPU time, not the actual energy readings. Means that energy usage if inferred rather than directly measured. 

Practical Engineering Takeaway :

The measurements showed that algorithmic efficency has a big impact on performance and implied energy consumption.The naive counting algorithm is more than 25,000 times slower than the single-pass version, even though both solve the same problem. This difference would translate into significantly higher energy costs in real systems.

The phase timings in instrumentation\_lab.c highlight where most time is spent, showing where optimization efforts should focus. Combined with the stable baseline loop results, reducing unnecessary work is the most effective way to build fast, energy-efficient software.
