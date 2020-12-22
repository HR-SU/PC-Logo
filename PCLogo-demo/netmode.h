#ifndef NETMODE_H
#define NETMODE_H

#include <QMainWindow>
#include <QTabWidget>
#include <QLabel>
#include <QPushButton>
#include <QUdpSocket>
#include <QHostInfo>
#include <QMessageBox>
#include <QScrollBar>
#include <QDateTime>
#include <QNetworkInterface>
#include <QProcess>
#include <QColorDialog>
#include <QTextCharFormat>
#include <QModelIndex>
#include <QtWebSockets/QWebSocket>
#include "canvas.h"
#include "codeeditor.h"
#include "chat.h"

namespace Ui {
class NetMode;
}

class NetMode : public QMainWindow
{
    Q_OBJECT

public:
    explicit NetMode(QWidget *parent = nullptr);
    ~NetMode();

private:
    Ui::NetMode *ui;
    QWebSocket m_webSocket;
    QUrl m_url;
    bool m_debug;
//    QUdpSocket *udpSocket;
//    qint16 port;
//    Chat *privateChat;

signals:
    void closed();

private slots:
    void onConnected();
    void onTextMessageReceived(QString message);

// protected:
//    void newParticipant(QString userName, QString localHostName,QString ipAddress);
//    void participantLeft(QString localHostName);
//    void sendMessage(MessageType type);
//    QString getIP();
//    QString getUserName();

// private slots:
//    void processPendingDatagrams();
//    void on_tableWidget_doubleClicked(QModelIndex index);
};

#endif // NETMODE_H
