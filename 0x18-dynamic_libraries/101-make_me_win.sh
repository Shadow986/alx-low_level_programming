#!/bin/bash

# Create a file with the desired numbers
echo "9 8 10 24 75 9" > numbers.txt

# Run the gm program
./gm $(cat numbers.txt)
