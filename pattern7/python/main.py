from __future__ import  annotations
from abc import ABC, abstractmethod
import random

class GumballMachine(ABC):
    _state = None
    count = 0

    def __init__ (self, numberGumballs) -> None:
        self.set_state(NoQuarterState)
        self.count = numberGumballs

    def set_state(self, state: State):
        print(f"Переходим в састояние:{state.toString(self)}\n")
        self._state = state
        #self._state.context = self

    def insertQuarter(self):
        self._state.insertQuarter(self)

    def ejectQuarter(self):
        self._state.ejectQuarter(self)

    def turnCrank(self):
        self._state.turnCrank(self)
        self._state.dispense(self)

    def releaseBall(self):
        print("Шарик катится к выходу\n")
        if self.count != 0:
            self.count = self.count - 1

    def getCount(self) -> int:
        return  self.count

    def refill(self,c):
        self.count = c
        self.set_state(NoQuarterState)

    def toString(self) -> str:
        result = '\n-----------------'
        result = result +'Mighty Gumball, Inc.\n'
        result = result + f'Запас:{self.count} шариков\n'
        result =result + f'Состояние{self._state.toString(self)}\n\n'
        return result

    def releaseBall(self):
        print("A gumball comes rolling out the slot...\n")

class State(ABC):
    _context = None

    @property
    def context(self) -> GumballMachine:
        return self._context

    @context.setter
    def context(self, context: GumballMachine):
        self._context = context

    @abstractmethod
    def insertQuarter(self) -> None:
        pass

    @abstractmethod
    def ejectQuarter(self) ->None:
        pass

    @abstractmethod
    def turnCrank(self) -> None:
        pass

    @abstractmethod
    def dispense(self) -> None:
        pass

    @abstractmethod
    def toString(self) -> str:
        pass

class NoQuarterState(State):
    def insertQuarter(self) -> None:
        print("Вы вставили монету\n")
        self.set_state(HasQuarterState)
        #print(type(self))

    def ejectQuarter(self) ->None:
        print("Вы не вставили монету\n")

    def turnCrank(self) -> None:
        print("Вы дернули рычаг, но монеты нет\n")

    def dispense(self) -> None:
        print("Сначала нужно заплатить\n")

    def toString(self) -> str:
        return 'Ожидание монеты\n'

class SoldOutState(State):
    def insertQuarter(self) -> None:
        print("Вы не можете вставить монету\n")

    def ejectQuarter(self) ->None:
        print("Вы не можете извлечь монету\n")

    def turnCrank(self) -> None:
        print("Вы повернули рычаг, но автомат пуст\n")

    def dispense(self) -> None:

        print("Автомат пуст\n")
class HasQuarterState(State):
    def insertQuarter(self) -> None:
        print("Вы не можете вставить ещё одну монету\n")

    def ejectQuarter(self) ->None:
        print("Монета возвращена")
        self.set_state(NoQuarterState)

    def turnCrank(self) -> None:
        print("Вы повернули рычаг...\n")
        winner = random.randint(0,1)
        if winner == 0 and self.getCount() > 0:
            self.set_state(WinnerState)
        else:
            self.set_state(SoldState)

    def dispense(self) -> None:
        print("Шарик не может быть выдан\n")

    def toString(self) -> str:
        return 'Ожидание поворота вычага\n'

class SoldState(State):
    def insertQuarter(self) -> None:
        print("Подождите, вы уже получили жвачку\n")

    def ejectQuarter(self) ->None:
        print("Извините, вы уже дернули за рычаг\n")

    def turnCrank(self) -> None:
        print("Поворачивать второй раз - бессмысленно\n")

    def dispense(self) -> None:
        self.releaseBall()
        if self.getCount() > 0:
            self.set_state(NoQuarterState)
        else:
            print("Упс, закончились шарики!\n")
            self.set_state(SoldOutState)

    def toString(self) -> str:
        print("Выдан шарик\n")

class WinnerState(State):
    def insertQuarter(self) -> None:
        print("Подождите, вы уже получили жвачку\n")

    def ejectQuarter(self) ->None:
        print("Извините, вы уже дернули за рычаг\n")

    def turnCrank(self) -> None:
        print("Поворачивать второй раз - бессмысленно\n")

    def dispense(self) -> None:
        print("ВЫ ВЫЙГРАЛИ! Вы получите 2 шарика\n")
        self.releaseBall()
        if self.getCount() == 0:
            self.set_state(SoldOutState)
        else:
            self.releaseBall()
            if self.getCount() > 0:
                self.set_state(NoQuarterState)
            else:
                print("Упс, автомат пуст!\n")
                self.set_state(SoldOutState)

    def toString(self) -> str:
        print("Получено 2 шарика, потому что Вы победитель!\n")


def main():
    gumballMashine = GumballMachine(10)

    print(gumballMashine.toString())

    gumballMashine.insertQuarter()
    gumballMashine.turnCrank()
    gumballMashine.insertQuarter()
    gumballMashine.turnCrank()

    gumballMashine.insertQuarter()
    gumballMashine.turnCrank()
if __name__ =="__main__":
     main()


