# cpsc351-fork-processes
# CPSC 351 – fork() Process Creation

## Description
This program demonstrates Unix process creation using the fork() system call. The program calls fork() twice and prints each process’s PID and PPID.

## Compile and Run
g++ fork_example.cpp -o fork_example
./fork_example

## Results
| Run # | Output Lines | Notes |
|------|--------------|-------|
| 1 | 4 | Output order varied; some PPIDs became 1 |
| 2 | 4 | Different PIDs and output order |
| 3 | 4 | Same behavior with new PIDs |

## Observations
- Two fork() calls create 4 total processes.
- PIDs change on every run.
- Output order is nondeterministic due to OS scheduling.
- PPID may be 1 if the parent process exits before the child prints.
