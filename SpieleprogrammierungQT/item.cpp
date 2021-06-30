#include "item.h"

Item::Item()
{

}

void Item::Read(QJsonObject &json)
{
   Item::Name = json["name"].toString();
   Item::Description = json["description"].toString();
   Item::LocationDescription = json["locationDescription"].toString();
}

void Item::Write(QJsonObject &json)
{
    json["name"] = Item::Name;
    json["description"] = Item::Description;
    json["locationDescription"] = Item::LocationDescription;
}
