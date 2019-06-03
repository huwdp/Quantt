/*
    Qantt is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    HuwInterpreter is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with Qantt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef FILEIO_H
#define FILEIO_H

#include <QObject>
#include <QDate>
#include <QString>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QFile>
#include <QXmlStreamReader>
#include <QModelIndex>
#include <QXmlStreamAttribute>
#include <QXmlStreamAttributes>
#include <QTranslator>
#include <QImage>
#include <QPainter>
#include <QGraphicsScene>

class FileIO : public QObject
{
    Q_OBJECT
public:
    explicit FileIO(QObject *parent = 0);
    ~FileIO();
    QStandardItemModel *openFile(QString, QStandardItemModel*);
    bool saveFile(QString, QStandardItemModel*);
    bool exportFile(QString, QGraphicsScene*);
private:
    double version;
    QMessageBox message;
    QFile file;
    QStringList headerType;
    QXmlStreamReader reader;
    QXmlStreamWriter writer;
};


#endif // FILEIO_H
