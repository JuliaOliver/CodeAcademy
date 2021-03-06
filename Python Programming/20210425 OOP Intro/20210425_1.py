# Overloading

from multipledispatch import dispatch


@dispatch(str, str)
def summary(first, second):
    result = first + second
    print(result)


@dispatch(int, int, int)
def summary(first, second, third):
    result = first + second + third
    print(result)


@dispatch(float, float, float)
def summary(first, second, third):
    result = first + second + third
    print(result)


summary("Hello ", "World")
summary(2, 3, 2)
summary(2.2, 3.4, 2.3)

# Prints
# Hello World
# 7
# 7.8999999999999995
