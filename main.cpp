#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include"sensor.h"
#include"display.h"
#include<QQmlContext>

int main(int argc, char *argv[])
{

    Sensor sensor1;


    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
        Display display1;
     const QUrl url(QStringLiteral("qrc:/main.qml"));



    QObject::connect(&sensor1,&Sensor::temparaturetoohigh,&display1,&Display::showwarning);
   sensor1.set_tempareture(60);
     engine.rootContext()->setContextProperty("data1",&sensor1);
    engine.load(url);

    return app.exec();
}
