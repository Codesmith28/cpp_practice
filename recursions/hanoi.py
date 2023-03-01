def hanoi(n, source, destination, helper):
    if n == 0:
        return

    hanoi(n-1, source, helper, destination)
    print("Move from", source, "to", destination)
    hanoi(n-1, source, destination, helper)


n = int(input("Enter the number of disks: "))
hanoi(n, "A", "B", "C")
