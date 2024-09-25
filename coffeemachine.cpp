
#include "coffeemachine.h"

// Constructor
CoffeeMachine::CoffeeMachine(QObject* parent) : QObject(parent) {}

// Slot: Start brewing
void CoffeeMachine::startBrewing(const QString& coffeeType, int strength, const QString& cupSize) {
    qDebug() << "Brewing started!";
    qDebug() << "Coffee Type:" << coffeeType;
    qDebug() << "Strength:" << strength;
    qDebug() << "Cup Size:" << cupSize;

    hardwareControl.heatWater();
    hardwareControl.grindBeans();

    QTimer::singleShot(5000, this, [=]() {
        hardwareControl.brewCoffee(coffeeType, strength);
    });
}

// Slot: Stop brewing
void CoffeeMachine::stopBrewing() {
    hardwareControl.stopBrewing();
}
