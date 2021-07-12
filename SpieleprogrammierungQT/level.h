#ifndef LEVEL_H
#define LEVEL_H

#include <field.h>
#include <QObject>


class Level : public QObject
{
    Q_OBJECT
private:
    QList<Field> mFields;
public:
    Level();
    Field* GetField(QString fieldId);
    void Combine(Item itemOne, Item itemTwo);
    QString UseItem(Field* CurrentField, QString itemName);
    void Read(const QJsonObject &json);
    void Write(QJsonObject &json);
    bool HasFieldEvent(QString fieldId);
    void ExecuteFieldEvent(QString fieldId);
signals:
    void issueConsoleOutput(QString output);
    void playerDiesRequest();
};

#endif // LEVEL_H
