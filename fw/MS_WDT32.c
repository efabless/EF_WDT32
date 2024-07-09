#ifndef MS_WDT32_C
#define MS_WDT32_C

#include <MS_WDT32.h>

void WDT32_enable(uint32_t wdt_base, int is_enable){

    MS_WDT32_TYPE* wdt = (MS_WDT32_TYPE*)wdt_base;
    wdt->control = is_enable;
}

int WDT32_readTimer(uint32_t wdt_base){

    MS_WDT32_TYPE* wdt = (MS_WDT32_TYPE*)wdt_base;
    return (wdt->timer);
}

int WDT32_loadTimer(uint32_t wdt_base, int load_val){

    MS_WDT32_TYPE* wdt = (MS_WDT32_TYPE*)wdt_base;
    wdt->load = load_val;
}


int WDT32_getRIS(uint32_t wdt_base){

    MS_WDT32_TYPE* wdt = (MS_WDT32_TYPE*)wdt_base;
    return (wdt->RIS);
}

int WDT32_getMIS(uint32_t wdt_base){

    MS_WDT32_TYPE* wdt = (MS_WDT32_TYPE*)wdt_base;
    return (wdt->MIS);
}

void WDT32_setIM(uint32_t wdt_base, int mask){

    MS_WDT32_TYPE* wdt = (MS_WDT32_TYPE*)wdt_base;

    wdt->IM = mask;
}

int WDT32_getIM(uint32_t wdt_base){

    MS_WDT32_TYPE* wdt = (MS_WDT32_TYPE*)wdt_base;
    return (wdt->IM);
}

void WDT32_setICR(uint32_t wdt_base, int mask){

    MS_WDT32_TYPE* wdt = (MS_WDT32_TYPE*)wdt_base;
    wdt->IC = mask;
}
#endif // WDT32_C