bool MyList::Test_Begin(ListNode* pNode)
{
    // todo1 du
    return (pNode == pHead);
}

bool MyList::Test_End(ListNode* pNode)
{
    // todo2 du
    if (pNode == NULL)
        return false;
    return (pNode->pNext == NULL);
}

int MyList::Pocet_Prvku()
{
    // todo3 du
    int cnt = 0;
    ListNode* p = pHead;
    while (p != NULL)
    {
        cnt++;
        p = p->pNext;
    }
    return cnt;
}

void MyList::Tisk_Prvky_BezKrajnichHodnot()
{
    // todo4 du
    if (pHead == NULL || pHead->pNext == NULL)
        return;

    ListNode* p = pHead->pNext; // začínáme za prvním
    while (p->pNext != NULL)    // končíme před posledním
    {
        printf("%d;", p->value);
        p = p->pNext;
    }
}

int MyList::SumaCisel()
{
    // todo5 du
    int suma = 0;
    ListNode* p = pHead;
    while (p != NULL)
    {
        suma += p->value;
        p = p->pNext;
    }
    return suma;
}

void MyList::MoveMinHead()
{
    // todo6 du
    if (pHead == NULL || pHead->pNext == NULL)
        return;

    ListNode* pMin = pHead;
    ListNode* pMinPrev = NULL;
    ListNode* pPrev = NULL;
    ListNode* p = pHead;

    while (p != NULL)
    {
        if (p->value < pMin->value)
        {
            pMin = p;
            pMinPrev = pPrev;
        }
        pPrev = p;
        p = p->pNext;
    }

    if (pMin == pHead)
        return; // už je první

    // odpojit
    pMinPrev->pNext = pMin->pNext;
    // připojit na začátek
    pMin->pNext = pHead;
    pHead = pMin;
}

void MyList::MoveMaxTail()
{
    // todo7 du
    if (pHead == NULL || pHead->pNext == NULL)
        return;

    ListNode* pMax = pHead;
    ListNode* pMaxPrev = NULL;
    ListNode* pPrev = NULL;
    ListNode* p = pHead;

    while (p != NULL)
    {
        if (p->value > pMax->value)
        {
            pMax = p;
            pMaxPrev = pPrev;
        }
        pPrev = p;
        p = p->pNext;
    }

    if (pMax->pNext == NULL)
        return; // už je poslední

    // odpojit
    if (pMaxPrev != NULL)
        pMaxPrev->pNext = pMax->pNext;
    else
        pHead = pMax->pNext; // hypoteticky kdyby max bylo v head

    // najít konec
    ListNode* pLast = pHead;
    while (pLast->pNext != NULL)
        pLast = pLast->pNext;

    pLast->pNext = pMax;
    pMax->pNext = NULL;
}
