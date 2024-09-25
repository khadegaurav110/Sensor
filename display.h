#ifndef DISPLAY_H
#define DISPLAY_H
#include<QObject>
#include<QDebug>
#include"qdebug.h"
class Display:public QObject
{
    Q_OBJECT
public:
    // Display(QObject *parent=nullptr):QObject(parent){};

   // public slots:
   // Q_INVOKABLE int  showwarning(int val)
   //  {
   //      return 10 +val;
   //  }

    void showwarning(int temp)
    {
        qDebug()<<"warn"<<temp;
    }

};

#endif // DISPLAY_H
