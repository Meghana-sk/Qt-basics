#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "utitlities.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Utitlities uobj;

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    //    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
    //                     &app, [url](QObject *obj, const QUrl &objUrl) {
           // if (!obj && url == objUrl)
             //   QCoreApplication::exit(-1);
    //    }, Qt::QueuedConnection);
    engine.load(url);
    if(engine.rootObjects().isEmpty())
        return -1;
    engine.rootContext()->setContextProperty("Utility",&uobj);

    return app.exec();

}
