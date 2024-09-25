// #include <QGuiApplication>
// #include <QQmlApplicationEngine>
// #include <QQmlContext>
// #include "coffeemachine.h"

// int main(int argc, char *argv[]) {
//     QGuiApplication app(argc, argv);

//     QQmlApplicationEngine engine;

//     // Create CoffeeMachine instance
//     CoffeeMachine coffeeMachine;
//     // Expose CoffeeMachine to QML
//     engine.rootContext()->setContextProperty("coffeeMachine", &coffeeMachine);

//     engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

//     if (engine.rootObjects().isEmpty())
//         return -1;

//     return app.exec();
// }
#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
