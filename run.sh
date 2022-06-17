#!/bin/bash
make clean
clear
make LF=0 > /dev/null && ./a.out 10>.fd_R1 11>.fd_T1 12>.fd_R2 13>.fd_T2 14>.fd_R3 15>.fd_T3 16>.fd_T4 17>.fd_T5 
