#include "dinnermenuiterator.h"

DinnerMenuIterator::DinnerMenuIterator(QList<MenuItem> strList)
{
    m_RstrList  = strList;
    pos = 0;
}

bool DinnerMenuIterator::hasNext()
{
    if(pos < m_RstrList.length())
        return true;
    else
        return false;

}

MenuItem DinnerMenuIterator::Next()
{

    return m_RstrList.at(pos++);

}

//QString DinnerMenuIterator::getName()
//{

//}
