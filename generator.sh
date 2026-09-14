#!/bin/bash

n=$1
file="numeri.txt"

for ((i=0; i<n; i++)); do
    od -An -N4 -t d4 /dev/urandom | tr -d ' '
done > "$file"