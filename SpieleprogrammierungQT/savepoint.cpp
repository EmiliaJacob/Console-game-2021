#include "savepoint.h"

SavePoint::SavePoint()
{

}

void SavePoint::Read(QJsonObject &json)
{
    this->Name = json["name"].toString();
    this->fieldId = json["fieldId"].toString();
}

void SavePoint::Write(QJsonObject &json)
{
    json["name"] = this->Name;
    json["fieldId"] = this->fieldId;
}
