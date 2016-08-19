#include "downloadmanager.h"
#include "ui_downloadmanager.h"
#include <iostream>
#include <QDebug>
#include <QUrl>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QString>
#include <QFile>
#include <QByteArray>

DownloadManager::DownloadManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DownloadManager)
{
    ui->setupUi(this);

    connect(&networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(fileDownloaded(QNetworkReply*)));
}

DownloadManager::~DownloadManager()
{
    delete ui;
}


void DownloadManager::on_pushButton_clicked()
{
    //get url and clear edit box
    QUrl fileUrl(ui->lineEdit->text());
    //ui->lineEdit->clear();
    qDebug() << fileUrl.toString();
    QNetworkRequest request(fileUrl);
    networkManager.get(request);

}

void DownloadManager::fileDownloaded(QNetworkReply *reply)
{
    //get downloaded file name
    //QString fileName = reply->rawHeader("Content-Disposition");
    QFile file("newFile");

    //qDebug() << fileName;

    //retrieve downloaded data
    QByteArray data = reply->readAll();

    reply->deleteLater();

    //open file for writing
    file.open(QIODevice::WriteOnly);
    file.write(data, data.size());
    file.close();



}
