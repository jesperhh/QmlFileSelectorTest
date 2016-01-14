#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlFileSelector>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.addImportPath("qrc:/qml");
    QQmlFileSelector* qfs = new QQmlFileSelector(&engine, &engine);
    qfs->setExtraSelectors({"new"});

    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

    return app.exec();
}
