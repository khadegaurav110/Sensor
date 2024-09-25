#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H



#include <QObject>
#include <QDebug>
#include <QTimer>

// Simulate hardware control class
class HardwareControl {
public:
    void heatWater() {
        qDebug() << "Heating water...";
        QTimer::singleShot(3000, []() { qDebug() << "Water is heated!"; });
    }

    void grindBeans() {
        qDebug() << "Grinding coffee beans...";
        QTimer::singleShot(2000, []() { qDebug() << "Beans are ground!"; });
    }

    void brewCoffee(const QString& coffeeType, int strength) {
        qDebug() << "Brewing" << coffeeType << "with strength level" << strength << "...";
        QTimer::singleShot(5000, []() { qDebug() << "Coffee is ready!"; });
    }

    void stopBrewing() {
        qDebug() << "Stopping brewing process...";
    }
};

// CoffeeMachine class interacting with the simulated hardware
class CoffeeMachine : public QObject {
    Q_OBJECT

public:
    explicit CoffeeMachine(QObject* parent = nullptr);

    // Hardware control instance
    HardwareControl hardwareControl;

public slots:
    void startBrewing(const QString& coffeeType, int strength, const QString& cupSize);
    void stopBrewing();
};

#endif // COFFEEMACHINE_H
