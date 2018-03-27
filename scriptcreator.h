#ifndef SCRIPTCREATOR_H
#define SCRIPTCREATOR_H
#include <QVector>
#include <QDialog>
class ScriptCreator
{
   public:
    void createStandard();
    void createComprehensive();
    void createCustom(QVector<bool> options);
    void setDir(QString _dir);
   private:
    QString dir;
    bool copyScript(QString sourceDir, QString destinationDir, bool overWriteDirectory);
};

#endif
