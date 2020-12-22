# Introduction
In number theory and computer science, the partition problem, or number partitioning, is the task of deciding whether a given multiset ‘S’ of positive integers can be partitioned into two subsets S1 and S2 such that the sum of the numbers in S1 equals the sum of the numbers in S2. In this project, the same task is done using the HLS. An IP overlay is created using Vivado HLS and is implemented in Xilinx PYNQ. An array size is 25 for this project which means it can partition the set of 25 numbers. The execution time for this project has been obtained as around 8.05 seconds which in contrast it is 1000 seconds if implemented only using Python. Thus, this way the execution time of the problem is accelerated.

# What is included?
* Tutorial_full : <b>"Tutorial_full.txt"</b> consists of detail steps to do this project from the scratch. It includes creating own IP core, creating own overlay design and then implementing in Python using Jupyter Notebook in PYNQ.
* Tutorial_short: <b>"Tutorial_short.txt"</b>consists of short quick guide to use the overlay and implement it in the Jupyter Notebook in PYNQ.
* Vivado HLS code:<b>"PartitionHLS.cpp"</b>consists of the HLS code that is required to create own HLS for this project. The program consists of several pragmas that is used to optimize the performance. The HLS is then used to generate IP core which is then used to create overlay.
* Jupyter Notebook File: <b>"PartitionProblem.ipynb"</b> consists of implementation of created overlay using Python. 
* Overlay:<b>"CheckPartition.bit"</b> and <b>"CheckPartition.hwh"</b> are the two overlay files that needs to be imported using Python to implement this project. 

# What is needed?
* PYNQ board from Xilinx inc.(with USB and ethernet cable)
* Vivado Design Suite
* Vivado HLS
