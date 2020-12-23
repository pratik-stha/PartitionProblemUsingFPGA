# Introduction
In number theory and computer science, the partition problem, or number partitioning, is the task of deciding whether a given multiset ‘S’ of positive integers can be partitioned into two subsets S1 and S2 such that the sum of the numbers in S1 equals the sum of the numbers in S2. For example, we have set S = {1,2,4,5}. Can it be divided into two subsets so that the sum of their elements are equal? Here, the answer is YES as it can be partitioned as S1 = {1,5} and S2={4,2} as in both the sets the sum is equal to 6. Can we do same with the set S={1,2,100,3}? No, we cannot as this set. 

This is one of the very time consuming problem in the realm of computer science. As the set gets larger the execution time gets extremely longer. I tried to write my code to solve this problem in Python and it took me 15 minutes to solve the array set of size 25. So, how can we make it faster? Well, there are couple of ways to make it faster. We can certainly optimize the algorithm, use multicore CPUs, use GPUs or implement this in FPGA. Thus, in this tutorial our main focus is to implement this solution in FPGA.

# High Recommendation
I highly recommend to try out tutorials from following videos before starting over with this project. 
* <a href = "https://www.youtube.com/watch?v=Dupyek4NUoI"> video 1 </a>
* <a href = "https://www.youtube.com/watch?v=4WnFQFHrtkg&t=466s"> video 2 </a>


# What is included?
* Tutorial_full : <b>"Tutorial_full.docx"</b> consists of detail steps to do this project from the scratch. It includes creating own IP core, creating own overlay design and then implementing in Python using Jupyter Notebook in PYNQ.
* Tutorial_short: <b>"Tutorial_short.docx"</b>consists of short quick guide to use the overlay and implement it in the Jupyter Notebook in PYNQ.
* Vivado HLS code:<b>"PartitionHLS.cpp"</b>consists of the HLS code that is required to create own HLS for this project. The program consists of several pragmas that is used to optimize the performance. The HLS is then used to generate IP core which is then used to create overlay.
* Jupyter Notebook File: <b>"PartitionProblem.ipynb"</b> consists of implementation of created overlay using Python. 
* Overlay:<b>"CheckPartition.bit"</b> and <b>"CheckPartition.hwh"</b> are the two overlay files that needs to be imported using Python to implement this project. 
* Native Python code: <b>"PartitionPython.ipynb"</b> is the jupyter notebook file which contains the code for parition problem without using overlay. It takes longer to execute.
* C code: <b>"PartitonProblemC.C"</b> file consists of c code to partition the given set. 

# What is needed?
* PYNQ board from Xilinx inc.(with USB and ethernet cable)
* Vivado Design Suite
* Vivado HLS
