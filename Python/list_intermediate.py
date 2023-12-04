#intermediate python
import sys
groceries = []
count = {}

def getlist():
    for i in range(0,len(sys.argv)) #should start from 1 because sys.argv[0] is the python file name, and missing colon for the loop
        groceries.append(sys.argv[i]) #optimise by using strip() and title() to avoid logical errors
    return groceries

def count_item(groceries):
    #for item in groceries: #must use this to assign
        #count[item] = 0
    for item in groceries:
        count[item] += 1
    return count

def main():
    grocery_list = count_item(getlist())
    print("The condensed list is: ")
    for item in grocery_list:
        print(f"{item}\t{grocery_list[item]}")

if __name__ = "__main__": #equality relational operator
    main()