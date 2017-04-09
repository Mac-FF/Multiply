def multiply_without_operator(a, b):
    if a == 0 or b == 0:
        return 0

    result = 0
    counter = 0
    while counter < abs(a):
        result += b
        counter += 1
    if a > 0:
        return result
    else:
        return -result


def main():
    try:
        a = int(input("Enter a first number a = "))
        b = int(input("Enter a second number b = "))
        result = multiply_without_operator(a, b)
        print("{} * {} = ".format(a, b), result)
    except ValueError as e:
        print("--ERROR: a or b is not a integer! Try  again.")
        print(e)

if __name__ == "__main__":
    main()
