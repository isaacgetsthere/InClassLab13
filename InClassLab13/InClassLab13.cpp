#include <iostream>
#include <vector>
#include<string>
void demoPrintingAListOfGrades()
{
    std::vector<int> listOfGrades{ 90,100,110,25 };

    for (int locationInArray = 0; locationInArray < listOfGrades.size(); locationInArray++)
    {
        std::cout << listOfGrades[locationInArray] << ", " << std::endl;;
    }

    std::cout << std::endl;
}


std::vector<std::string> makeToDoList()
{
    std::vector < std::string> toDoList;

    std::string continueOrNot = "yes";

    while (continueOrNot != "no")
    {
        std::cout << "Enter a thing on your to do list:" << std::endl;
        std::string newItem;
        std::getline(std::cin, newItem);
        toDoList.push_back(newItem);

        std::cout << "do you wanna continue adding items" << std::endl;
        std::getline(std::cin, continueOrNot);
    }
    return toDoList;
}

void printTheToDoList(std::vector<std::string> theList)
{
    for (int i = 0; i < theList.size(); i++)
    {
        std::cout << "Item number " << i + 1 << " is " << theList[i] << std::endl;
    }
}

int main()
{
    auto toDoList = makeToDoList();
    printTheToDoList(toDoList);
}