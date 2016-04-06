#ifndef STATUS_H
#define STATUS_H

class Status
{
public:
    Status();
   virtual void insertQuater()=0;
   virtual void ejectQuater()=0;
   virtual void turnCrank()=0;
   virtual void depense()=0;
};

#endif // STATUS_H
