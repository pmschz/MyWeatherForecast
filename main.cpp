#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QNetworkReply>
#include <QNetworkAccessManager>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

    QString styleSheet = "QWidget { font-size: 16px; }";
    app.setStyleSheet(styleSheet);

    QLabel *label = w.findChild<QLabel*>("lbltemprature");
    if (label) {
        qDebug() << "label found..";
        QFont font = label->font();
        font.setPointSize(40);  // Set the font size to 18
        label->setFont(font);
        label->setStyleSheet("QWidget { font-size: 50px; }");
    }

    w.show();
    return app.exec();
}

