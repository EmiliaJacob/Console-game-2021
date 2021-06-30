#include "field.h"
#include "item.h"
#include <QJsonArray>

Field::Field()
{
}

void Field::Read(QJsonObject &json)
{
   Field::Id = json["id"].toString();
   Field::FieldRight = json["right"].toString();
   Field::FieldLeft = json["left"].toString();
   Field::FieldForward = json["forward"].toString();
   Field::FieldBackward = json["backward"].toString();
   Field::Description = json["description"].toString();

   QJsonArray itemArray = json["items"].toArray();
   for(int i=0; i<itemArray.size(); i++)
   {
           QJsonObject itemObject = itemArray[i].toObject();
           Item item; //TODO: Muss die Instanz hier wieder zerstört werden?
           item.Read(itemObject);
           Items.append(item);
   }
}

void Field::Write(QJsonObject &json)
{
    json["id"] = this->Id;
    json["forward"] = this->FieldForward;
    json["backward"] = this->FieldBackward;
    json["left"] = this->FieldLeft;
    json["right"] = this->FieldRight;
    json["description"] = this->Description;

    QJsonArray itemArray;

    for(Item &item : this->Items) // TODO: implement this elegant way into your other methods as well
    {
       QJsonObject itemObject;
       item.Write(itemObject);
       itemArray.append(itemObject);
    }

    json["items"] = itemArray;
}
