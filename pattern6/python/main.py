from abc import ABC, abstractmethod

class CaffeineBeverage(ABC):
    def prepareRecipe(self) -> None:
        self.boilWater()
        self.brew()
        self.pourInCup()
        if self.customerWantsCondiments():
            self.addCondiments()

    def boilWater(self) -> None:
        print("Boiling water")

    def pourInCup(self) -> None:
        print("Pouring into cup")

    @abstractmethod
    def brew(self) -> None:
        pass

    @abstractmethod
    def addCondiments(self) -> None:
        pass

    def customerWantsCondiments(self) -> bool:
        return True



class Coffe(CaffeineBeverage):
    def brew(self) -> None:
        print("Dripping Coffee through filter\n")

    def addCondiments(self) -> None:
        print("Adding Sugar and Milk\n")

    def customerWantsCondiments(self) -> bool:
        print("Would you like mulk and sugar with your coffee (y/n)?\n")
        answer = input()
        if answer.lower().startswith('y'):
            return True
        else:
            return False



class Tea(CaffeineBeverage):
    def brew(self) -> None:
        print("Steeping the tea\n")

    def addCondiments(self) -> None:
        print("Adding Lemon\n")

    def customerWantsCondiments(self) -> bool:
        print("Would you like lemon with you tea (y/n)?\n")
        answer = input()
        if answer.lower().startswith('y'):
            return True
        else:
            return False




if __name__ == "__main__":
    tea = Tea()
    coffe = Coffe()

    print("Maling tea...\n")
    tea.prepareRecipe()

    print("Making coffe...\n")
    coffe.prepareRecipe()


