# ## Problem 10.2: CSV File
# - Create a file named `ProblemSet10.2.py`.
# - Write a Python program that reads the CSV file named `numbers.csv` included in the problem set.
# - Use the `csv` module to read the content of the csv file row by row.
# - Reverse the order of each item in each row and save it to another csv file named `reverse.csv`.
# - If you have a row in the `numbers.csv` file with the following sequence:

#         107,89,16,44,31,94,113,47,113,79,51,86,74,93,96,11,106,93,75,7,39,49,90,26,97,99,6,11,97,7

# - This should become the following sequence in the `reverse.csv` file: 

#         7,97,11,6,99,97,26,90,49,39,7,75,93,106,11,96,93,74,86,51,79,113,47,113,94,31,44,16,89,107
        
# - In the same program, also compute the average value of each row and print them out.
# - The first few lines of the print out may look like this:

#         The Average value of row 1 is 64.87
#         The Average value of row 2 is 61.37
#         The Average value of row 3 is 66.40

import csv
file = open("numbers.csv")
reversedLines = [line[::-1] for line in file]
file.close()
reader = csv.reader(reversedLines)
for backwardRow in reader:
    lastField = backwardRow[0][::-1]
    secondField = backwardRow[1][::-1]
