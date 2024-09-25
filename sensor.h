#ifndef SENSOR_H
#define SENSOR_H
#include<QObject>
class Sensor:public QObject
{
    Q_OBJECT
public:
    Sensor(QObject * parent=nullptr):QObject(parent),temparature(0){};

    Q_INVOKABLE void set_tempareture(int temp)
    {
        temparature=temp;
        if(temp>30)
        {
            emit temparaturetoohigh(temp);
        }
    }


    signals:
    void temparaturetoohigh(int value);


private:
    int temparature;

};

#endif // SENSOR_H
