#pragma once
class CKarte
{
private:
    int m_kartenZahlen[5];
public:
    void setzeZahlen(int zahlen[5]);
    void streicheZahl(int zahl);
    bool istFertig();

    CKarte();
    ~CKarte();
};