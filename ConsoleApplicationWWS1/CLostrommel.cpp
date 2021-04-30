#include "stdafx.h"
#include "CLostrommel.h"

int CLostrommel::ziehe()
{
    return rand() % 50 + 1;
}

CLostrommel::CLostrommel()
{
    srand((unsigned)time(NULL));
}

CLostrommel::~CLostrommel()
{
}
