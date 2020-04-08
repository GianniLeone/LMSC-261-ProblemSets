# ## Problem 10.1: List
# - Create a file named `ProblemSet10.1.py`.
# - Write a function named `mergeList` that takes in two lists as inputs.
# - In the function, merge the two lists and return the combined list.
# - Call the `mergeList` function and assign the returned value from the function to a variable named `merged`.
# - Print out the content of `merged` variable.
# - For example, if we input lists with `[a, b, c]` and `[1, 2, 3]`, the output for the function should be `[a, 1, b, 2, c, 3]`.

def mergeList(x, y):
  merged = [(x[i], y[i]) for i in range(len(x))]
  return merged

x = ["hello", "name", "Gianni"]
y = ["my", "is", "Leone"]
print (mergeList(x, y))

