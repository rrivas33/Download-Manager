#ifndef DOWNLOADMANAGER_H
#define DOWNLOADMANAGER_H

#include <QMainWindow>
#include <QNetworkAccessManager>

namespace Ui {
class DownloadManager;
}

class DownloadManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit DownloadManager(QWidget *parent = 0);
    ~DownloadManager();

private slots:
    void on_pushButton_clicked();
    void fileDownloaded(QNetworkReply* reply);

private:
    Ui::DownloadManager *ui;
    QNetworkAccessManager networkManager;

};

#endif // DOWNLOADMANAGER_H
