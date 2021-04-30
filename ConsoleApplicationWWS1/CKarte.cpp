#include "stdafx.h"
#include "CKarte.h"

void CKarte::setzeZahlen(int zahlen[5])
{
    for (int i = 0; i < 5; i++)
    {
        m_kartenZahlen[i] = zahlen[i];
    }
}

void CKarte::streicheZahl(int zahl)
{
    for (int i = 0; i < 5; i++)
    {
        if (m_kartenZahlen[i] == zahl)
        {
            m_kartenZahlen[i] = 0;
        }
    }
}

bool CKarte::istFertig()
{
    bool fertig = true;

    for (int i = 0; i < 5; i++)
    {
        if (m_kartenZahlen[i] != 0)
        {
            fertig = false;
        }
    }

    return fertig;
}

CKarte::CKarte()
{
}

CKarte::~CKarte()
{
}
