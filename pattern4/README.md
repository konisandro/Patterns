# *Инкапсуляция вызова*
**Мы выходим на новый уровень инкапсуляции** —
на этот раз будут инкапсулироваться вызовы методов.
*Инкапсуляция позволяет* решать и такие нетривиальные задачи, как регистрация или отмена вызовов.

Нам нужно сделать прототип пульта, который будет иметь семь программируемых ячеек (каждая из
которых связывается с отдельным домашним устройством)
и соответствующую кнопку «вкл/выкл» для каждой ячейки.
Кроме того, устройство оснащено кнопкой глобальной отмены. 

![Прототип пульта](изображение/Screenshot_2.png)

### *Реализуем интерфайс Command*
Интерфейс Command выглядит так:
 ``` 
  public interface Command {
     public void execute();
   }
   ```
  > Очень простой интерфейс:
   всего один метод **execute()**


### *Реализация команды для включения света*
Реализация команды выглядит примерно так:
```
class LightOnCommand : public Command
{
private:
    Light *light;
public:
    LightOnCommand(Light *light);
    void execute();
};
```

```
LightOnCommand::LightOnCommand(Light *light)
{
    this->light = light;
}

void LightOnCommand::execute() {
    light->on();
}

```
> Эта команда ключает свет(On).

### *Реализация команды для выключения света*
Реализация команды выглядит так:
```
class LightOffCommand : public Command
{
private:
    Light *light;
public:
    LightOffCommand(Light *light);
    void execute();
};
```
```
LightOffCommand::LightOffCommand(Light *light)
{
    this->light = light;
}

void LightOffCommand::execute() {
    light->off();
}
```




### *Реализация пульта*

```
class RemoteControl
{
private:
    Command **onCommands;
    Command **offCommands;
public:
    RemoteControl();
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    QString toString();

};
 ```
```
 RemoteControl::RemoteControl()
{
    onCommands = new Command*[7];
    offCommands = new Command*[7];

    Command *noCommand = new NoCommand();
    for (int i = 0; i < 7; i++) {
        onCommands[i] = noCommand;
        offCommands[i] = noCommand;
    }
}

void RemoteControl::setCommand(int slot, Command *onCommand, Command *offCommand) {
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot) {
    onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot) {
    offCommands[slot]->execute();
}

QString RemoteControl::toString() {
    QString text = "\n-------- Remote Control --------\n";
    for (int i = 0; i < 7; i++) {
        text += "[slot " +QString::number(i)+ "] " + onCommands[i]->metaObject()->className()+"\n\t";
        text += offCommands[i]->metaObject()->className();
        text += "\n";
    }
    return text;
}

```

### *Реализация команд*
```
class LightOffCommand : public Command
{
private:
    Light *light;
public:
    LightOffCommand(Light *light);
    void execute();
};
```
> Эта команда выключает свет(off).

### *Команда включения стерео устройства*
```
class StereOnWithCDCommand : public Command
{
private:
    Stereo *stereo;
public:
    StereOnWithCDCommand(Stereo *stereo);
    void execute();
};
```
```
StereOnWithCDCommand::StereOnWithCDCommand(Stereo *stereo)
{
    this->stereo = stereo;
}

void StereOnWithCDCommand::execute() {
    stereo->on();
    stereo->setCd();
    stereo->setVolume(11);
}
```
>Включение Stereo устройства.

### *Проверяем пульт в деле*
Тестируем пульт. 
В файл main.cpp вводим строки:
``` 
RemoteControl *remoteControl = new RemoteControl();

    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    Stereo *stereo = new Stereo("Living Room");

    LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
    LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);
    StereOnWithCDCommand *stereoOnWithCD = new StereOnWithCDCommand(stereo);
    StereoOffCommand *stereoOff = new StereoOffCommand(stereo);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->setCommand(2, stereoOnWithCD, stereoOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);

    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPushed(1);

    remoteControl->onButtonWasPushed(2);
    remoteControl->offButtonWasPushed(2);


