from operator import index

a = []


def insertion_at_begning():
    value = input("Enter value to insert : ")
    global a
    a = list[value] + a[:]

    if value in a:
        print("inserted")
    else:
        print("not inserted")


def insertion_at_any_point():
    value = input("Enter value to insert : ")
    position = int(input("Enter position : "))
    global a
    a = a[:position] + list[value] + a[position:]

    if value in a:
        print("inserted")
    else:
        print("not inserted")


def insertion_at_end():
    value = input("Enter value to insert : ")
    a.append(value)
    if value in a:
        print("inserted")
    else:
        print("not inserted")


def search():
    key = input("TO Search : ")

    for i in range(len(a)):
        if a[i] == key:
            print(key, "is at", i+1, "place")
            return

    print(key, "is not present.")


def traverse():
    length = len(a)

    for i in range(length):
        print(a[i], end=" ")
    print("")


def reverse_traverse():
    length = len(a)

    for i in range(length):
        print(a[length-i-1], end=" ")
    print("")


def create_array():
    number = int(input("enter the number of elements to insert : "))

    for i in range(number):
        insertion_at_end()


def choice():
    case = int(input('enter the operation : '))

    if case == 0:
        return
    elif case == 1:
        create_array()
    elif case == 2:
        traverse()
    elif case == 3:
        reverse_traverse()
    elif case == 4:
        insertion_at_begning()
    elif case == 5:
        insertion_at_end()
    elif case == 6:
        insertion_at_any_point()
    elif case == 7:
        a = a[1:]
    elif case == 8:
        a = a[:-1]
    elif case == 9:
        print("array :",a)
        index = int(input("enter index : "))
        del a[index]
        print("item deleted")
        print("new aray :",a)
    elif case == 10:
        search()
    elif case == 11:
        a.sort()
        print("array is sorted :", a)
    else:
        print("invalid input")
        choice()

    choice()


print("""
    enter number to perform task in list 
    0.exit
    1.create array
    2.traverse the list
    3.reverse traverse the list
    4.insertion at begning
    5.insertion at end
    6.insertion at any position
    7.deletion at begning
    8.deletion at end
    9.deletion at any position
    10.search at any number
    11.shorting of list
""")

choice()
