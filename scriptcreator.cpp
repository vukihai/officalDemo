#include <QFile>
#include <QDir>
#include <scriptcreator.h>
void ScriptCreator::createStandard() {
     copyScript("C:/Users/vu dinh huong/Documents/build-untitled3-Desktop_Qt_5_10_1_MSVC2017_64bit-Debug/debug/standard",
                this->dir, true);
}
void ScriptCreator::createComprehensive() {
    copyScript("C:/Users/vu dinh huong/Documents/build-untitled3-Desktop_Qt_5_10_1_MSVC2017_64bit-Debug/debug/comprehensive",
               this->dir, true);
}
void ScriptCreator::createCustom(QVector<bool> options) {

}
void ScriptCreator::setDir(QString _dir) {
    this->dir = _dir;
}
bool ScriptCreator::copyScript(QString sourceDir, QString destinationDir, bool overWriteDirectory)
{
    QDir originDirectory(sourceDir);

    if (! originDirectory.exists())
    {
        return false;
    }

    QDir destinationDirectory(destinationDir);

    if(destinationDirectory.exists() && !overWriteDirectory)
    {
        return false;
    }
    else if(destinationDirectory.exists() && overWriteDirectory)
    {
        destinationDirectory.removeRecursively();
    }

    originDirectory.mkpath(destinationDir);

    foreach (QString directoryName, originDirectory.entryList(QDir::Dirs | \
                                                              QDir::NoDotAndDotDot))
    {
        QString destinationPath = destinationDir + "/" + directoryName;
        originDirectory.mkpath(destinationPath);
        copyScript(sourceDir + "/" + directoryName, destinationPath, overWriteDirectory);
    }

    foreach (QString fileName, originDirectory.entryList(QDir::Files))
    {
        QFile::copy(sourceDir + "/" + fileName, destinationDir + "/" + fileName);
    }

    /*! Possible race-condition mitigation? */
    QDir finalDestination(destinationDir);
    finalDestination.refresh();

    if(finalDestination.exists())
    {
        return true;
    }

    return false;
}
