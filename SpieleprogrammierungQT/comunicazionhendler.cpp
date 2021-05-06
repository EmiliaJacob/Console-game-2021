#include "comunicazionhendler.h"
#include <QTextStream>
comunicazionhendler::comunicazionhendler(){
}


comunicazionhendler::~comunicazionhendler()
{

}
QString comunicazionhendler::playersays(QString command){
//        QString decodetcomand[] = interpreter->interpret(command);
//        TODO lock for decodetcomand in DB

         QString answer =  command
         /*vor line bracke*/+ "                                                                                             "
                            + "text";//command + DBanser;
         return answer;
    }

