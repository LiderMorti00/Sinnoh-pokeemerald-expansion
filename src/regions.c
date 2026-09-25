#include "global.h"
#include "regions.h"


static const u16 sKantoSubregionMapsecs[KANTO_SUBREGION_COUNT][30] = {
    [KANTO_SUBREGION_KANTO] =
    {
        MAPSEC_NONE
    },
    [KANTO_SUBREGION_SEVII123] =
    {
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE
    },
    [KANTO_SUBREGION_SEVII45] =
    {
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE
    },
    [KANTO_SUBREGION_SEVII67] =
    {
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE,
        MAPSEC_NONE
    }
};

enum KantoSubRegion GetKantoSubregion(u32 mapSecId)
{
    for (u32 i = KANTO_SUBREGION_KANTO; i <= KANTO_SUBREGION_SEVII67; i++)
    {
        for (u32 j = 0; sKantoSubregionMapsecs[i][j] != MAPSEC_NONE; j++)
        {
            if (mapSecId == sKantoSubregionMapsecs[i][j])
                return i;
        }
    }
    return KANTO_SUBREGION_KANTO;
}
