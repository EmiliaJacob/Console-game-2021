#include "field.h"

Field::Field()
{
    Field::Forward = nullptr;
    Field:Backward = nullptr;
    Field::Left = nullptr;
    Field::Right = nullptr;
}

void Field::Read(QJsonObject &json)
{
   Field::Id = json["id"].toString();
   Field::FieldRight = json["right"].toString();
   Field::FieldLeft = json["left"].toString();
   Field::FieldForward = json["forward"].toString();
   Field::FieldBackward = json["backward"].toString();
   Field::Description = json["description"].toString();
}
