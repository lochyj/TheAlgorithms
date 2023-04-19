
# Where the name of the function is the name of the algorithm
def example(list: list[int]):
    list.sort()
    return list

# The test should be called test()
def test():
    out = example([10, 31, 1, 41, 55, 6, 1, 4, 3, 643, 123, 5, 2])
    print(out)

test()