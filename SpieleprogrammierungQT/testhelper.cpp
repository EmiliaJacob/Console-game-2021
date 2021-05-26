#include "item.h"
#include "testhelper.h"

TestHelper::TestHelper()
{

}

void TestHelper::PrintQList(QList<Item> qlist)
{
    qDebug() << "ListContent: ";
   for(int i=0; i<qlist.size(); i++)
   {
       qDebug() << qlist[i].Name;
   }
}
