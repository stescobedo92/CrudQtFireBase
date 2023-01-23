#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QObject>

class DatabaseHandler : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseHandler(QObject *parent = nullptr);

signals:

};

#endif // DATABASEHANDLER_H
