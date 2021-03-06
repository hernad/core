#include <sal/types.h>

#include <stdio.h>

extern "C"
{
    static const sal_Unicode langID[] = { 0x61, 0x72, 0x0 };
    static const sal_Unicode langDefaultName[] = { 0x41, 0x72, 0x61, 0x62, 0x69, 0x63, 0x0 };
    static const sal_Unicode countryID[] = { 0x41, 0x45, 0x0 };
    static const sal_Unicode countryDefaultName[]
        = { 0x55, 0x6e, 0x69, 0x74, 0x65, 0x64, 0x20, 0x41, 0x72, 0x61, 0x62,
            0x20, 0x45, 0x6d, 0x69, 0x72, 0x61, 0x74, 0x65, 0x73, 0x0 };
    static const sal_Unicode Variant[] = { 0x0 };

    static const sal_Unicode* LCInfoArray[]
        = { langID, langDefaultName, countryID, countryDefaultName, Variant };

    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getLCInfo_ar_AE(sal_Int16& count)
    {
        count = SAL_N_ELEMENTS(LCInfoArray);
        return (sal_Unicode**)LCInfoArray;
    }
    extern sal_Unicode** SAL_CALL getLocaleItem_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getLocaleItem_ar_AE(sal_Int16& count)
    {
        return getLocaleItem_ar_SA(count);
    }
    static const sal_Unicode replaceTo0[]
        = { 0x5b, 0x24, 0x62f, 0x2e, 0x625, 0x200f, 0x2d, 0x33, 0x38, 0x30, 0x31, 0x5d, 0x0 };
    extern sal_Unicode const* const* SAL_CALL getAllFormats0_ar_SA(sal_Int16& count,
                                                                   const sal_Unicode*& from,
                                                                   const sal_Unicode*& to);
    SAL_DLLPUBLIC_EXPORT sal_Unicode const* const* SAL_CALL
    getAllFormats0_ar_AE(sal_Int16& count, const sal_Unicode*& from, const sal_Unicode*& to)
    {
        to = replaceTo0;
        const sal_Unicode* tmp;
        return getAllFormats0_ar_SA(count, from, tmp);
    }
    extern sal_Unicode** SAL_CALL getDateAcceptancePatterns_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getDateAcceptancePatterns_ar_AE(sal_Int16& count)
    {
        return getDateAcceptancePatterns_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getCollatorImplementation_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getCollatorImplementation_ar_AE(sal_Int16& count)
    {
        return getCollatorImplementation_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getCollationOptions_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getCollationOptions_ar_AE(sal_Int16& count)
    {
        return getCollationOptions_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getSearchOptions_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getSearchOptions_ar_AE(sal_Int16& count)
    {
        return getSearchOptions_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getIndexAlgorithm_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getIndexAlgorithm_ar_AE(sal_Int16& count)
    {
        return getIndexAlgorithm_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getUnicodeScripts_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getUnicodeScripts_ar_AE(sal_Int16& count)
    {
        return getUnicodeScripts_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getFollowPageWords_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getFollowPageWords_ar_AE(sal_Int16& count)
    {
        return getFollowPageWords_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getAllCalendars_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getAllCalendars_ar_AE(sal_Int16& count)
    {
        return getAllCalendars_ar_SA(count);
    }
    static const sal_Unicode defaultCurrency0[] = { 1 };
    static const sal_Unicode defaultCurrencyUsedInCompatibleFormatCodes0[] = { 1 };
    static const sal_Unicode defaultCurrencyLegacyOnly0[] = { 0 };
    static const sal_Unicode currencyID0[] = { 0x41, 0x45, 0x44, 0x0 };
    static const sal_Unicode currencySymbol0[] = { 0x62f, 0x2e, 0x625, 0x200f, 0x0 };
    static const sal_Unicode bankSymbol0[] = { 0x41, 0x45, 0x44, 0x0 };
    static const sal_Unicode currencyName0[] = { 0x41, 0x45, 0x44, 0x0 };
    static const sal_Unicode currencyDecimalPlaces0[] = { 2 };

    static const sal_Int16 currencyCount = 1;

    static const sal_Unicode* currencies[] = {
        currencyID0,
        currencySymbol0,
        bankSymbol0,
        currencyName0,
        defaultCurrency0,
        defaultCurrencyUsedInCompatibleFormatCodes0,
        currencyDecimalPlaces0,
        defaultCurrencyLegacyOnly0,
    };

    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getAllCurrencies_ar_AE(sal_Int16& count)
    {
        count = currencyCount;
        return (sal_Unicode**)currencies;
    }
    extern sal_Unicode** SAL_CALL getTransliterations_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getTransliterations_ar_AE(sal_Int16& count)
    {
        return getTransliterations_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getForbiddenCharacters_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getForbiddenCharacters_ar_AE(sal_Int16& count)
    {
        return getForbiddenCharacters_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getBreakIteratorRules_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getBreakIteratorRules_ar_AE(sal_Int16& count)
    {
        return getBreakIteratorRules_ar_SA(count);
    }
    extern sal_Unicode** SAL_CALL getReservedWords_ar_SA(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getReservedWords_ar_AE(sal_Int16& count)
    {
        return getReservedWords_ar_SA(count);
    }
    // ---> ContinuousNumbering
    extern const sal_Unicode*** SAL_CALL getContinuousNumberingLevels_ar_SA(sal_Int16& nStyles,
                                                                            sal_Int16& nAttributes);
    SAL_DLLPUBLIC_EXPORT const sal_Unicode*** SAL_CALL
    getContinuousNumberingLevels_ar_AE(sal_Int16& nStyles, sal_Int16& nAttributes)
    {
        return getContinuousNumberingLevels_ar_SA(nStyles, nAttributes);
    }
    // ---> OutlineNumbering
    extern const sal_Unicode**** SAL_CALL getOutlineNumberingLevels_ar_SA(sal_Int16& nStyles,
                                                                          sal_Int16& nLevels,
                                                                          sal_Int16& nAttributes);
    SAL_DLLPUBLIC_EXPORT const sal_Unicode**** SAL_CALL
    getOutlineNumberingLevels_ar_AE(sal_Int16& nStyles, sal_Int16& nLevels, sal_Int16& nAttributes)
    {
        return getOutlineNumberingLevels_ar_SA(nStyles, nLevels, nAttributes);
    }
} // extern "C"
