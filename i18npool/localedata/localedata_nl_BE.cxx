#include <sal/types.h>

#include <stdio.h>

extern "C"
{
    static const sal_Unicode langID[] = { 0x6e, 0x6c, 0x0 };
    static const sal_Unicode langDefaultName[] = { 0x44, 0x75, 0x74, 0x63, 0x68, 0x0 };
    static const sal_Unicode countryID[] = { 0x42, 0x45, 0x0 };
    static const sal_Unicode countryDefaultName[]
        = { 0x42, 0x65, 0x6c, 0x67, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode Variant[] = { 0x0 };

    static const sal_Unicode* LCInfoArray[]
        = { langID, langDefaultName, countryID, countryDefaultName, Variant };

    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getLCInfo_nl_BE(sal_Int16& count)
    {
        count = SAL_N_ELEMENTS(LCInfoArray);
        return (sal_Unicode**)LCInfoArray;
    }

    static const sal_Unicode LC_CTYPE_Unoid[] = { 0x0 };
    static const sal_Unicode dateSeparator[] = { 0x2f, 0x0 };
    static const sal_Unicode thousandSeparator[] = { 0x2e, 0x0 };
    static const sal_Unicode decimalSeparator[] = { 0x2c, 0x0 };
    static const sal_Unicode decimalSeparatorAlternative[] = { 0x0 };
    static const sal_Unicode timeSeparator[] = { 0x3a, 0x0 };
    static const sal_Unicode time100SecSeparator[] = { 0x2c, 0x0 };
    static const sal_Unicode listSeparator[] = { 0x3b, 0x0 };
    static const sal_Unicode LongDateDayOfWeekSeparator[] = { 0x20, 0x0 };
    static const sal_Unicode LongDateDaySeparator[] = { 0x20, 0x0 };
    static const sal_Unicode LongDateMonthSeparator[] = { 0x20, 0x0 };
    static const sal_Unicode LongDateYearSeparator[] = { 0x20, 0x0 };
    static const sal_Unicode quotationStart[] = { 0x2018, 0x0 };
    static const sal_Unicode quotationEnd[] = { 0x2019, 0x0 };
    static const sal_Unicode doubleQuotationStart[] = { 0x201c, 0x0 };
    static const sal_Unicode doubleQuotationEnd[] = { 0x201d, 0x0 };
    static const sal_Unicode timeAM[] = { 0x41, 0x4d, 0x0 };
    static const sal_Unicode timePM[] = { 0x50, 0x4d, 0x0 };
    static const sal_Unicode measurementSystem[] = { 0x6d, 0x65, 0x74, 0x72, 0x69, 0x63, 0x0 };

    static const sal_Unicode* LCType[] = { LC_CTYPE_Unoid,
                                           dateSeparator,
                                           thousandSeparator,
                                           decimalSeparator,
                                           timeSeparator,
                                           time100SecSeparator,
                                           listSeparator,
                                           quotationStart,
                                           quotationEnd,
                                           doubleQuotationStart,
                                           doubleQuotationEnd,
                                           timeAM,
                                           timePM,
                                           measurementSystem,
                                           LongDateDayOfWeekSeparator,
                                           LongDateDaySeparator,
                                           LongDateMonthSeparator,
                                           LongDateYearSeparator,
                                           decimalSeparatorAlternative };

    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getLocaleItem_nl_BE(sal_Int16& count)
    {
        count = SAL_N_ELEMENTS(LCType);
        return (sal_Unicode**)LCType;
    }
    static const sal_Unicode replaceFrom0[] = { 0x0 };
    static const sal_Unicode replaceTo0[] = { 0x0 };
    static const sal_Unicode FormatKey0[] = { 0x46, 0x69, 0x78, 0x65, 0x64, 0x46, 0x6f, 0x72, 0x6d,
                                              0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement0[] = { 1 };
    static const sal_Unicode FormatType0[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage0[]
        = { 0x46, 0x49, 0x58, 0x45, 0x44, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex0[] = { 0 };
    static const sal_Unicode FormatCode0[]
        = { 0x53, 0x74, 0x61, 0x6e, 0x64, 0x61, 0x61, 0x72, 0x64, 0x0 };
    static const sal_Unicode FormatDefaultName0[] = { 0x0 };
    static const sal_Unicode FormatKey1[] = { 0x46, 0x69, 0x78, 0x65, 0x64, 0x46, 0x6f, 0x72, 0x6d,
                                              0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x0 };
    static const sal_Unicode defaultFormatElement1[] = { 1 };
    static const sal_Unicode FormatType1[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage1[]
        = { 0x46, 0x49, 0x58, 0x45, 0x44, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex1[] = { 1 };
    static const sal_Unicode FormatCode1[] = { 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName1[] = { 0x0 };
    static const sal_Unicode FormatKey2[] = { 0x46, 0x69, 0x78, 0x65, 0x64, 0x46, 0x6f, 0x72, 0x6d,
                                              0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x33, 0x0 };
    static const sal_Unicode defaultFormatElement2[] = { 0 };
    static const sal_Unicode FormatType2[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage2[]
        = { 0x46, 0x49, 0x58, 0x45, 0x44, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex2[] = { 2 };
    static const sal_Unicode FormatCode2[] = { 0x30, 0x2c, 0x30, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName2[] = { 0x0 };
    static const sal_Unicode FormatKey3[] = { 0x46, 0x69, 0x78, 0x65, 0x64, 0x46, 0x6f, 0x72, 0x6d,
                                              0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x34, 0x0 };
    static const sal_Unicode defaultFormatElement3[] = { 0 };
    static const sal_Unicode FormatType3[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage3[]
        = { 0x46, 0x49, 0x58, 0x45, 0x44, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex3[] = { 3 };
    static const sal_Unicode FormatCode3[] = { 0x23, 0x2e, 0x23, 0x23, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName3[] = { 0x0 };
    static const sal_Unicode FormatKey4[] = { 0x46, 0x69, 0x78, 0x65, 0x64, 0x46, 0x6f, 0x72, 0x6d,
                                              0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x35, 0x0 };
    static const sal_Unicode defaultFormatElement4[] = { 0 };
    static const sal_Unicode FormatType4[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage4[]
        = { 0x46, 0x49, 0x58, 0x45, 0x44, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex4[] = { 4 };
    static const sal_Unicode FormatCode4[]
        = { 0x23, 0x2e, 0x23, 0x23, 0x30, 0x2c, 0x30, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName4[] = { 0x0 };
    static const sal_Unicode FormatKey5[] = { 0x46, 0x69, 0x78, 0x65, 0x64, 0x46, 0x6f, 0x72, 0x6d,
                                              0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x36, 0x0 };
    static const sal_Unicode defaultFormatElement5[] = { 0 };
    static const sal_Unicode FormatType5[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage5[]
        = { 0x46, 0x49, 0x58, 0x45, 0x44, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex5[] = { 5 };
    static const sal_Unicode FormatCode5[]
        = { 0x23, 0x2e, 0x23, 0x23, 0x23, 0x2c, 0x30, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName5[] = { 0x0 };
    static const sal_Unicode FormatKey6[]
        = { 0x53, 0x63, 0x69, 0x65, 0x6e, 0x74, 0x69, 0x66, 0x69, 0x63, 0x46,
            0x6f, 0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement6[] = { 0 };
    static const sal_Unicode FormatType6[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage6[]
        = { 0x53, 0x43, 0x49, 0x45, 0x4e, 0x54, 0x49, 0x46, 0x49,
            0x43, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex6[] = { 6 };
    static const sal_Unicode FormatCode6[]
        = { 0x30, 0x2c, 0x30, 0x30, 0x45, 0x2b, 0x30, 0x30, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName6[] = { 0x0 };
    static const sal_Unicode FormatKey7[]
        = { 0x53, 0x63, 0x69, 0x65, 0x6e, 0x74, 0x69, 0x66, 0x69, 0x63, 0x46,
            0x6f, 0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x0 };
    static const sal_Unicode defaultFormatElement7[] = { 1 };
    static const sal_Unicode FormatType7[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage7[]
        = { 0x53, 0x43, 0x49, 0x45, 0x4e, 0x54, 0x49, 0x46, 0x49,
            0x43, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex7[] = { 7 };
    static const sal_Unicode FormatCode7[]
        = { 0x30, 0x2c, 0x30, 0x30, 0x45, 0x2b, 0x30, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName7[] = { 0x0 };
    static const sal_Unicode FormatKey8[]
        = { 0x53, 0x63, 0x69, 0x65, 0x6e, 0x74, 0x69, 0x66, 0x69, 0x63, 0x46,
            0x6f, 0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x33, 0x0 };
    static const sal_Unicode defaultFormatElement8[] = { 0 };
    static const sal_Unicode FormatType8[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage8[]
        = { 0x53, 0x43, 0x49, 0x45, 0x4e, 0x54, 0x49, 0x46, 0x49,
            0x43, 0x5f, 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex8[] = { 78 };
    static const sal_Unicode FormatCode8[]
        = { 0x23, 0x23, 0x30, 0x2c, 0x30, 0x30, 0x45, 0x2b, 0x30, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName8[] = { 0x0 };
    static const sal_Unicode FormatKey9[]
        = { 0x50, 0x65, 0x72, 0x63, 0x65, 0x6e, 0x74, 0x46, 0x6f, 0x72,
            0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement9[] = { 1 };
    static const sal_Unicode FormatType9[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage9[] = { 0x50, 0x45, 0x52, 0x43, 0x45, 0x4e, 0x54, 0x5f,
                                                0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex9[] = { 8 };
    static const sal_Unicode FormatCode9[] = { 0x30, 0x25, 0x0 };
    static const sal_Unicode FormatDefaultName9[] = { 0x0 };
    static const sal_Unicode FormatKey10[]
        = { 0x50, 0x65, 0x72, 0x63, 0x65, 0x6e, 0x74, 0x46, 0x6f, 0x72,
            0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x0 };
    static const sal_Unicode defaultFormatElement10[] = { 1 };
    static const sal_Unicode FormatType10[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage10[] = { 0x50, 0x45, 0x52, 0x43, 0x45, 0x4e, 0x54, 0x5f,
                                                 0x4e, 0x55, 0x4d, 0x42, 0x45, 0x52, 0x0 };
    static const sal_Unicode Formatindex10[] = { 9 };
    static const sal_Unicode FormatCode10[] = { 0x30, 0x2c, 0x30, 0x30, 0x25, 0x0 };
    static const sal_Unicode FormatDefaultName10[] = { 0x0 };
    static const sal_Unicode FormatKey11[]
        = { 0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x63, 0x79, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement11[] = { 1 };
    static const sal_Unicode FormatType11[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage11[]
        = { 0x43, 0x55, 0x52, 0x52, 0x45, 0x4e, 0x43, 0x59, 0x0 };
    static const sal_Unicode Formatindex11[] = { 12 };
    static const sal_Unicode FormatCode11[]
        = { 0x23, 0x2e, 0x23, 0x23, 0x30, 0x20, 0x5b, 0x24, 0x42, 0x46, 0x2d,
            0x38, 0x31, 0x33, 0x5d, 0x3b, 0x2d, 0x23, 0x2e, 0x23, 0x23, 0x30,
            0x20, 0x5b, 0x24, 0x42, 0x46, 0x2d, 0x38, 0x31, 0x33, 0x5d, 0x0 };
    static const sal_Unicode FormatDefaultName11[] = { 0x0 };
    static const sal_Unicode FormatKey12[]
        = { 0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x63, 0x79, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x0 };
    static const sal_Unicode defaultFormatElement12[] = { 0 };
    static const sal_Unicode FormatType12[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage12[]
        = { 0x43, 0x55, 0x52, 0x52, 0x45, 0x4e, 0x43, 0x59, 0x0 };
    static const sal_Unicode Formatindex12[] = { 13 };
    static const sal_Unicode FormatCode12[]
        = { 0x23, 0x2e, 0x23, 0x23, 0x30, 0x2c, 0x30, 0x30, 0x20, 0x5b, 0x24, 0x42, 0x46,
            0x2d, 0x38, 0x31, 0x33, 0x5d, 0x3b, 0x2d, 0x23, 0x2e, 0x23, 0x23, 0x30, 0x2c,
            0x30, 0x30, 0x20, 0x5b, 0x24, 0x42, 0x46, 0x2d, 0x38, 0x31, 0x33, 0x5d, 0x0 };
    static const sal_Unicode FormatDefaultName12[] = { 0x0 };
    static const sal_Unicode FormatKey13[]
        = { 0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x63, 0x79, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x33, 0x0 };
    static const sal_Unicode defaultFormatElement13[] = { 0 };
    static const sal_Unicode FormatType13[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage13[]
        = { 0x43, 0x55, 0x52, 0x52, 0x45, 0x4e, 0x43, 0x59, 0x0 };
    static const sal_Unicode Formatindex13[] = { 14 };
    static const sal_Unicode FormatCode13[]
        = { 0x23, 0x2e, 0x23, 0x23, 0x30, 0x20, 0x5b, 0x24, 0x42, 0x46, 0x2d, 0x38, 0x31,
            0x33, 0x5d, 0x3b, 0x5b, 0x52, 0x45, 0x44, 0x5d, 0x2d, 0x23, 0x2e, 0x23, 0x23,
            0x30, 0x20, 0x5b, 0x24, 0x42, 0x46, 0x2d, 0x38, 0x31, 0x33, 0x5d, 0x0 };
    static const sal_Unicode FormatDefaultName13[] = { 0x0 };
    static const sal_Unicode FormatKey14[]
        = { 0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x63, 0x79, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x34, 0x0 };
    static const sal_Unicode defaultFormatElement14[] = { 1 };
    static const sal_Unicode FormatType14[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage14[]
        = { 0x43, 0x55, 0x52, 0x52, 0x45, 0x4e, 0x43, 0x59, 0x0 };
    static const sal_Unicode Formatindex14[] = { 15 };
    static const sal_Unicode FormatCode14[]
        = { 0x23, 0x2e, 0x23, 0x23, 0x30, 0x2c, 0x30, 0x30, 0x20, 0x5b, 0x24,
            0x42, 0x46, 0x2d, 0x38, 0x31, 0x33, 0x5d, 0x3b, 0x5b, 0x52, 0x45,
            0x44, 0x5d, 0x2d, 0x23, 0x2e, 0x23, 0x23, 0x30, 0x2c, 0x30, 0x30,
            0x20, 0x5b, 0x24, 0x42, 0x46, 0x2d, 0x38, 0x31, 0x33, 0x5d, 0x0 };
    static const sal_Unicode FormatDefaultName14[] = { 0x0 };
    static const sal_Unicode FormatKey15[]
        = { 0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x63, 0x79, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x35, 0x0 };
    static const sal_Unicode defaultFormatElement15[] = { 0 };
    static const sal_Unicode FormatType15[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage15[]
        = { 0x43, 0x55, 0x52, 0x52, 0x45, 0x4e, 0x43, 0x59, 0x0 };
    static const sal_Unicode Formatindex15[] = { 16 };
    static const sal_Unicode FormatCode15[]
        = { 0x23, 0x2e, 0x23, 0x23, 0x30, 0x2c, 0x30, 0x30, 0x20, 0x43, 0x43, 0x43, 0x0 };
    static const sal_Unicode FormatDefaultName15[] = { 0x0 };
    static const sal_Unicode FormatKey16[]
        = { 0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x63, 0x79, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x36, 0x0 };
    static const sal_Unicode defaultFormatElement16[] = { 0 };
    static const sal_Unicode FormatType16[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage16[]
        = { 0x43, 0x55, 0x52, 0x52, 0x45, 0x4e, 0x43, 0x59, 0x0 };
    static const sal_Unicode Formatindex16[] = { 17 };
    static const sal_Unicode FormatCode16[]
        = { 0x23, 0x2e, 0x23, 0x23, 0x30, 0x2c, 0x2d, 0x2d, 0x20, 0x5b, 0x24,
            0x42, 0x46, 0x2d, 0x38, 0x31, 0x33, 0x5d, 0x3b, 0x5b, 0x52, 0x45,
            0x44, 0x5d, 0x2d, 0x23, 0x2e, 0x23, 0x23, 0x30, 0x2c, 0x2d, 0x2d,
            0x20, 0x5b, 0x24, 0x42, 0x46, 0x2d, 0x38, 0x31, 0x33, 0x5d, 0x0 };
    static const sal_Unicode FormatDefaultName16[] = { 0x0 };
    static const sal_Unicode FormatKey17[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement17[] = { 1 };
    static const sal_Unicode FormatType17[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage17[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex17[] = { 18 };
    static const sal_Unicode FormatCode17[] = { 0x44, 0x2f, 0x4d, 0x4d, 0x2f, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName17[] = { 0x0 };
    static const sal_Unicode FormatKey18[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x39, 0x0 };
    static const sal_Unicode defaultFormatElement18[] = { 1 };
    static const sal_Unicode FormatType18[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage18[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex18[] = { 19 };
    static const sal_Unicode FormatCode18[] = { 0x4e, 0x4e, 0x4e, 0x4e, 0x44, 0x20, 0x4d, 0x4d,
                                                0x4d, 0x4d, 0x20, 0x4a, 0x4a, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName18[] = { 0x0 };
    static const sal_Unicode FormatKey19[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x38, 0x0 };
    static const sal_Unicode defaultFormatElement19[] = { 1 };
    static const sal_Unicode FormatType19[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage19[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex19[] = { 20 };
    static const sal_Unicode FormatCode19[]
        = { 0x44, 0x44, 0x2f, 0x4d, 0x4d, 0x2f, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName19[] = { 0x0 };
    static const sal_Unicode FormatKey20[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x37, 0x0 };
    static const sal_Unicode defaultFormatElement20[] = { 0 };
    static const sal_Unicode FormatType20[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage20[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex20[] = { 21 };
    static const sal_Unicode FormatCode20[]
        = { 0x44, 0x44, 0x2f, 0x4d, 0x4d, 0x2f, 0x4a, 0x4a, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName20[] = { 0x0 };
    static const sal_Unicode FormatKey21[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x30, 0x0 };
    static const sal_Unicode defaultFormatElement21[] = { 0 };
    static const sal_Unicode FormatType21[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage21[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex21[] = { 22 };
    static const sal_Unicode FormatCode21[]
        = { 0x44, 0x20, 0x4d, 0x4d, 0x4d, 0x20, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName21[] = { 0x0 };
    static const sal_Unicode FormatKey22[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement22[] = { 0 };
    static const sal_Unicode FormatType22[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage22[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex22[] = { 23 };
    static const sal_Unicode FormatCode22[]
        = { 0x44, 0x20, 0x4d, 0x4d, 0x4d, 0x20, 0x4a, 0x4a, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName22[] = { 0x0 };
    static const sal_Unicode FormatKey23[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x36, 0x0 };
    static const sal_Unicode defaultFormatElement23[] = { 0 };
    static const sal_Unicode FormatType23[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage23[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex23[] = { 24 };
    static const sal_Unicode FormatCode23[]
        = { 0x44, 0x2e, 0x20, 0x4d, 0x4d, 0x4d, 0x2e, 0x20, 0x4a, 0x4a, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName23[] = { 0x0 };
    static const sal_Unicode FormatKey24[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x32, 0x0 };
    static const sal_Unicode defaultFormatElement24[] = { 0 };
    static const sal_Unicode FormatType24[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage24[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex24[] = { 25 };
    static const sal_Unicode FormatCode24[]
        = { 0x44, 0x20, 0x4d, 0x4d, 0x4d, 0x4d, 0x20, 0x4a, 0x4a, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName24[] = { 0x0 };
    static const sal_Unicode FormatKey25[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x37, 0x0 };
    static const sal_Unicode defaultFormatElement25[] = { 0 };
    static const sal_Unicode FormatType25[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage25[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex25[] = { 26 };
    static const sal_Unicode FormatCode25[]
        = { 0x44, 0x2e, 0x20, 0x4d, 0x4d, 0x4d, 0x4d, 0x20, 0x4a, 0x4a, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName25[] = { 0x0 };
    static const sal_Unicode FormatKey26[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x33, 0x0 };
    static const sal_Unicode defaultFormatElement26[] = { 0 };
    static const sal_Unicode FormatType26[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage26[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex26[] = { 27 };
    static const sal_Unicode FormatCode26[]
        = { 0x4e, 0x4e, 0x20, 0x44, 0x20, 0x4d, 0x4d, 0x4d, 0x20, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName26[] = { 0x0 };
    static const sal_Unicode FormatKey27[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x0 };
    static const sal_Unicode defaultFormatElement27[] = { 0 };
    static const sal_Unicode FormatType27[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage27[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex27[] = { 28 };
    static const sal_Unicode FormatCode27[]
        = { 0x4e, 0x4e, 0x20, 0x44, 0x44, 0x2f, 0x4d, 0x4d, 0x4d, 0x20, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName27[] = { 0x0 };
    static const sal_Unicode FormatKey28[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x34, 0x0 };
    static const sal_Unicode defaultFormatElement28[] = { 0 };
    static const sal_Unicode FormatType28[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage28[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex28[] = { 29 };
    static const sal_Unicode FormatCode28[] = { 0x4e, 0x4e, 0x20, 0x44, 0x20, 0x4d, 0x4d, 0x4d,
                                                0x4d, 0x20, 0x4a, 0x4a, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName28[] = { 0x0 };
    static const sal_Unicode FormatKey29[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x35, 0x0 };
    static const sal_Unicode defaultFormatElement29[] = { 0 };
    static const sal_Unicode FormatType29[] = { 0x6c, 0x6f, 0x6e, 0x67, 0x0 };
    static const sal_Unicode FormatUsage29[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex29[] = { 30 };
    static const sal_Unicode FormatCode29[] = { 0x4e, 0x4e, 0x4e, 0x4e, 0x44, 0x20, 0x4d, 0x4d,
                                                0x4d, 0x4d, 0x20, 0x4a, 0x4a, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName29[] = { 0x0 };
    static const sal_Unicode FormatKey30[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x38, 0x0 };
    static const sal_Unicode defaultFormatElement30[] = { 0 };
    static const sal_Unicode FormatType30[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage30[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex30[] = { 31 };
    static const sal_Unicode FormatCode30[] = { 0x4d, 0x4d, 0x2d, 0x44, 0x44, 0x0 };
    static const sal_Unicode FormatDefaultName30[] = { 0x0 };
    static const sal_Unicode FormatKey31[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x39, 0x0 };
    static const sal_Unicode defaultFormatElement31[] = { 0 };
    static const sal_Unicode FormatType31[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage31[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex31[] = { 32 };
    static const sal_Unicode FormatCode31[]
        = { 0x4a, 0x4a, 0x2d, 0x4d, 0x4d, 0x2d, 0x44, 0x44, 0x0 };
    static const sal_Unicode FormatDefaultName31[] = { 0x0 };
    static const sal_Unicode FormatKey32[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x30, 0x0 };
    static const sal_Unicode defaultFormatElement32[] = { 0 };
    static const sal_Unicode FormatType32[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage32[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex32[] = { 33 };
    static const sal_Unicode FormatCode32[]
        = { 0x4a, 0x4a, 0x4a, 0x4a, 0x2d, 0x4d, 0x4d, 0x2d, 0x44, 0x44, 0x0 };
    static const sal_Unicode FormatDefaultName32[]
        = { 0x49, 0x53, 0x4f, 0x20, 0x38, 0x36, 0x30, 0x31, 0x20, 0x28,
            0x45, 0x4e, 0x20, 0x32, 0x38, 0x36, 0x30, 0x31, 0x29, 0x0 };
    static const sal_Unicode FormatKey33[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x33, 0x0 };
    static const sal_Unicode defaultFormatElement33[] = { 0 };
    static const sal_Unicode FormatType33[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage33[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex33[] = { 34 };
    static const sal_Unicode FormatCode33[] = { 0x4d, 0x4d, 0x2f, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName33[] = { 0x0 };
    static const sal_Unicode FormatKey34[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x34, 0x0 };
    static const sal_Unicode defaultFormatElement34[] = { 0 };
    static const sal_Unicode FormatType34[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage34[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex34[] = { 35 };
    static const sal_Unicode FormatCode34[] = { 0x44, 0x44, 0x2f, 0x4d, 0x4d, 0x4d, 0x0 };
    static const sal_Unicode FormatDefaultName34[] = { 0x0 };
    static const sal_Unicode FormatKey35[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x35, 0x0 };
    static const sal_Unicode defaultFormatElement35[] = { 0 };
    static const sal_Unicode FormatType35[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage35[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex35[] = { 36 };
    static const sal_Unicode FormatCode35[] = { 0x4d, 0x4d, 0x4d, 0x4d, 0x0 };
    static const sal_Unicode FormatDefaultName35[] = { 0x0 };
    static const sal_Unicode FormatKey36[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x36, 0x0 };
    static const sal_Unicode defaultFormatElement36[] = { 0 };
    static const sal_Unicode FormatType36[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage36[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex36[] = { 37 };
    static const sal_Unicode FormatCode36[] = { 0x51, 0x51, 0x20, 0x4a, 0x4a, 0x0 };
    static const sal_Unicode FormatDefaultName36[] = { 0x0 };
    static const sal_Unicode FormatKey37[] = { 0x44, 0x61, 0x74, 0x65, 0x46, 0x6f, 0x72, 0x6d, 0x61,
                                               0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement37[] = { 0 };
    static const sal_Unicode FormatType37[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage37[] = { 0x44, 0x41, 0x54, 0x45, 0x0 };
    static const sal_Unicode Formatindex37[] = { 38 };
    static const sal_Unicode FormatCode37[] = { 0x57, 0x57, 0x0 };
    static const sal_Unicode FormatDefaultName37[] = { 0x0 };
    static const sal_Unicode FormatKey38[] = { 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement38[] = { 1 };
    static const sal_Unicode FormatType38[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage38[] = { 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex38[] = { 39 };
    static const sal_Unicode FormatCode38[] = { 0x55, 0x55, 0x3a, 0x4d, 0x4d, 0x0 };
    static const sal_Unicode FormatDefaultName38[] = { 0x0 };
    static const sal_Unicode FormatKey39[] = { 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x0 };
    static const sal_Unicode defaultFormatElement39[] = { 1 };
    static const sal_Unicode FormatType39[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage39[] = { 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex39[] = { 40 };
    static const sal_Unicode FormatCode39[]
        = { 0x55, 0x55, 0x3a, 0x4d, 0x4d, 0x3a, 0x53, 0x53, 0x0 };
    static const sal_Unicode FormatDefaultName39[] = { 0x0 };
    static const sal_Unicode FormatKey40[] = { 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x33, 0x0 };
    static const sal_Unicode defaultFormatElement40[] = { 0 };
    static const sal_Unicode FormatType40[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage40[] = { 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex40[] = { 41 };
    static const sal_Unicode FormatCode40[]
        = { 0x55, 0x55, 0x3a, 0x4d, 0x4d, 0x20, 0x41, 0x4d, 0x2f, 0x50, 0x4d, 0x0 };
    static const sal_Unicode FormatDefaultName40[] = { 0x0 };
    static const sal_Unicode FormatKey41[] = { 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x34, 0x0 };
    static const sal_Unicode defaultFormatElement41[] = { 0 };
    static const sal_Unicode FormatType41[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage41[] = { 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex41[] = { 42 };
    static const sal_Unicode FormatCode41[] = { 0x55, 0x55, 0x3a, 0x4d, 0x4d, 0x3a, 0x53, 0x53,
                                                0x20, 0x41, 0x4d, 0x2f, 0x50, 0x4d, 0x0 };
    static const sal_Unicode FormatDefaultName41[] = { 0x0 };
    static const sal_Unicode FormatKey42[] = { 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x35, 0x0 };
    static const sal_Unicode defaultFormatElement42[] = { 0 };
    static const sal_Unicode FormatType42[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage42[] = { 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex42[] = { 43 };
    static const sal_Unicode FormatCode42[]
        = { 0x5b, 0x55, 0x55, 0x5d, 0x3a, 0x4d, 0x4d, 0x3a, 0x53, 0x53, 0x0 };
    static const sal_Unicode FormatDefaultName42[] = { 0x0 };
    static const sal_Unicode FormatKey43[] = { 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x36, 0x0 };
    static const sal_Unicode defaultFormatElement43[] = { 0 };
    static const sal_Unicode FormatType43[] = { 0x73, 0x68, 0x6f, 0x72, 0x74, 0x0 };
    static const sal_Unicode FormatUsage43[] = { 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex43[] = { 44 };
    static const sal_Unicode FormatCode43[]
        = { 0x4d, 0x4d, 0x3a, 0x53, 0x53, 0x2c, 0x30, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName43[] = { 0x0 };
    static const sal_Unicode FormatKey44[] = { 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f, 0x72, 0x6d,
                                               0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x37, 0x0 };
    static const sal_Unicode defaultFormatElement44[] = { 0 };
    static const sal_Unicode FormatType44[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage44[] = { 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex44[] = { 45 };
    static const sal_Unicode FormatCode44[]
        = { 0x5b, 0x55, 0x55, 0x5d, 0x3a, 0x4d, 0x4d, 0x3a, 0x53, 0x53, 0x2c, 0x30, 0x30, 0x0 };
    static const sal_Unicode FormatDefaultName44[] = { 0x0 };
    static const sal_Unicode FormatKey45[]
        = { 0x44, 0x61, 0x74, 0x65, 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x31, 0x0 };
    static const sal_Unicode defaultFormatElement45[] = { 1 };
    static const sal_Unicode FormatType45[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage45[]
        = { 0x44, 0x41, 0x54, 0x45, 0x5f, 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex45[] = { 46 };
    static const sal_Unicode FormatCode45[] = { 0x44, 0x44, 0x2f, 0x4d, 0x4d, 0x2f, 0x4a, 0x4a,
                                                0x20, 0x55, 0x55, 0x3a, 0x4d, 0x4d, 0x0 };
    static const sal_Unicode FormatDefaultName45[] = { 0x0 };
    static const sal_Unicode FormatKey46[]
        = { 0x44, 0x61, 0x74, 0x65, 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x32, 0x0 };
    static const sal_Unicode defaultFormatElement46[] = { 0 };
    static const sal_Unicode FormatType46[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage46[]
        = { 0x44, 0x41, 0x54, 0x45, 0x5f, 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex46[] = { 47 };
    static const sal_Unicode FormatCode46[]
        = { 0x44, 0x44, 0x2f, 0x4d, 0x4d, 0x2f, 0x4a, 0x4a, 0x4a, 0x4a,
            0x20, 0x55, 0x55, 0x3a, 0x4d, 0x4d, 0x3a, 0x53, 0x53, 0x0 };
    static const sal_Unicode FormatDefaultName46[] = { 0x0 };
    static const sal_Unicode FormatKey47[]
        = { 0x44, 0x61, 0x74, 0x65, 0x54, 0x69, 0x6d, 0x65, 0x46, 0x6f,
            0x72, 0x6d, 0x61, 0x74, 0x73, 0x6b, 0x65, 0x79, 0x33, 0x0 };
    static const sal_Unicode defaultFormatElement47[] = { 0 };
    static const sal_Unicode FormatType47[] = { 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x0 };
    static const sal_Unicode FormatUsage47[]
        = { 0x44, 0x41, 0x54, 0x45, 0x5f, 0x54, 0x49, 0x4d, 0x45, 0x0 };
    static const sal_Unicode Formatindex47[] = { 50 };
    static const sal_Unicode FormatCode47[]
        = { 0x44, 0x44, 0x2f, 0x4d, 0x4d, 0x2f, 0x4a, 0x4a, 0x4a,
            0x4a, 0x20, 0x55, 0x55, 0x3a, 0x4d, 0x4d, 0x0 };
    static const sal_Unicode FormatDefaultName47[] = { 0x0 };

    static const sal_Int16 FormatElementsCount0 = 48;
    static const sal_Unicode* FormatElementsArray0[] = {
        FormatCode0,
        FormatDefaultName0,
        FormatKey0,
        FormatType0,
        FormatUsage0,
        Formatindex0,
        defaultFormatElement0,
        FormatCode1,
        FormatDefaultName1,
        FormatKey1,
        FormatType1,
        FormatUsage1,
        Formatindex1,
        defaultFormatElement1,
        FormatCode2,
        FormatDefaultName2,
        FormatKey2,
        FormatType2,
        FormatUsage2,
        Formatindex2,
        defaultFormatElement2,
        FormatCode3,
        FormatDefaultName3,
        FormatKey3,
        FormatType3,
        FormatUsage3,
        Formatindex3,
        defaultFormatElement3,
        FormatCode4,
        FormatDefaultName4,
        FormatKey4,
        FormatType4,
        FormatUsage4,
        Formatindex4,
        defaultFormatElement4,
        FormatCode5,
        FormatDefaultName5,
        FormatKey5,
        FormatType5,
        FormatUsage5,
        Formatindex5,
        defaultFormatElement5,
        FormatCode6,
        FormatDefaultName6,
        FormatKey6,
        FormatType6,
        FormatUsage6,
        Formatindex6,
        defaultFormatElement6,
        FormatCode7,
        FormatDefaultName7,
        FormatKey7,
        FormatType7,
        FormatUsage7,
        Formatindex7,
        defaultFormatElement7,
        FormatCode8,
        FormatDefaultName8,
        FormatKey8,
        FormatType8,
        FormatUsage8,
        Formatindex8,
        defaultFormatElement8,
        FormatCode9,
        FormatDefaultName9,
        FormatKey9,
        FormatType9,
        FormatUsage9,
        Formatindex9,
        defaultFormatElement9,
        FormatCode10,
        FormatDefaultName10,
        FormatKey10,
        FormatType10,
        FormatUsage10,
        Formatindex10,
        defaultFormatElement10,
        FormatCode11,
        FormatDefaultName11,
        FormatKey11,
        FormatType11,
        FormatUsage11,
        Formatindex11,
        defaultFormatElement11,
        FormatCode12,
        FormatDefaultName12,
        FormatKey12,
        FormatType12,
        FormatUsage12,
        Formatindex12,
        defaultFormatElement12,
        FormatCode13,
        FormatDefaultName13,
        FormatKey13,
        FormatType13,
        FormatUsage13,
        Formatindex13,
        defaultFormatElement13,
        FormatCode14,
        FormatDefaultName14,
        FormatKey14,
        FormatType14,
        FormatUsage14,
        Formatindex14,
        defaultFormatElement14,
        FormatCode15,
        FormatDefaultName15,
        FormatKey15,
        FormatType15,
        FormatUsage15,
        Formatindex15,
        defaultFormatElement15,
        FormatCode16,
        FormatDefaultName16,
        FormatKey16,
        FormatType16,
        FormatUsage16,
        Formatindex16,
        defaultFormatElement16,
        FormatCode17,
        FormatDefaultName17,
        FormatKey17,
        FormatType17,
        FormatUsage17,
        Formatindex17,
        defaultFormatElement17,
        FormatCode18,
        FormatDefaultName18,
        FormatKey18,
        FormatType18,
        FormatUsage18,
        Formatindex18,
        defaultFormatElement18,
        FormatCode19,
        FormatDefaultName19,
        FormatKey19,
        FormatType19,
        FormatUsage19,
        Formatindex19,
        defaultFormatElement19,
        FormatCode20,
        FormatDefaultName20,
        FormatKey20,
        FormatType20,
        FormatUsage20,
        Formatindex20,
        defaultFormatElement20,
        FormatCode21,
        FormatDefaultName21,
        FormatKey21,
        FormatType21,
        FormatUsage21,
        Formatindex21,
        defaultFormatElement21,
        FormatCode22,
        FormatDefaultName22,
        FormatKey22,
        FormatType22,
        FormatUsage22,
        Formatindex22,
        defaultFormatElement22,
        FormatCode23,
        FormatDefaultName23,
        FormatKey23,
        FormatType23,
        FormatUsage23,
        Formatindex23,
        defaultFormatElement23,
        FormatCode24,
        FormatDefaultName24,
        FormatKey24,
        FormatType24,
        FormatUsage24,
        Formatindex24,
        defaultFormatElement24,
        FormatCode25,
        FormatDefaultName25,
        FormatKey25,
        FormatType25,
        FormatUsage25,
        Formatindex25,
        defaultFormatElement25,
        FormatCode26,
        FormatDefaultName26,
        FormatKey26,
        FormatType26,
        FormatUsage26,
        Formatindex26,
        defaultFormatElement26,
        FormatCode27,
        FormatDefaultName27,
        FormatKey27,
        FormatType27,
        FormatUsage27,
        Formatindex27,
        defaultFormatElement27,
        FormatCode28,
        FormatDefaultName28,
        FormatKey28,
        FormatType28,
        FormatUsage28,
        Formatindex28,
        defaultFormatElement28,
        FormatCode29,
        FormatDefaultName29,
        FormatKey29,
        FormatType29,
        FormatUsage29,
        Formatindex29,
        defaultFormatElement29,
        FormatCode30,
        FormatDefaultName30,
        FormatKey30,
        FormatType30,
        FormatUsage30,
        Formatindex30,
        defaultFormatElement30,
        FormatCode31,
        FormatDefaultName31,
        FormatKey31,
        FormatType31,
        FormatUsage31,
        Formatindex31,
        defaultFormatElement31,
        FormatCode32,
        FormatDefaultName32,
        FormatKey32,
        FormatType32,
        FormatUsage32,
        Formatindex32,
        defaultFormatElement32,
        FormatCode33,
        FormatDefaultName33,
        FormatKey33,
        FormatType33,
        FormatUsage33,
        Formatindex33,
        defaultFormatElement33,
        FormatCode34,
        FormatDefaultName34,
        FormatKey34,
        FormatType34,
        FormatUsage34,
        Formatindex34,
        defaultFormatElement34,
        FormatCode35,
        FormatDefaultName35,
        FormatKey35,
        FormatType35,
        FormatUsage35,
        Formatindex35,
        defaultFormatElement35,
        FormatCode36,
        FormatDefaultName36,
        FormatKey36,
        FormatType36,
        FormatUsage36,
        Formatindex36,
        defaultFormatElement36,
        FormatCode37,
        FormatDefaultName37,
        FormatKey37,
        FormatType37,
        FormatUsage37,
        Formatindex37,
        defaultFormatElement37,
        FormatCode38,
        FormatDefaultName38,
        FormatKey38,
        FormatType38,
        FormatUsage38,
        Formatindex38,
        defaultFormatElement38,
        FormatCode39,
        FormatDefaultName39,
        FormatKey39,
        FormatType39,
        FormatUsage39,
        Formatindex39,
        defaultFormatElement39,
        FormatCode40,
        FormatDefaultName40,
        FormatKey40,
        FormatType40,
        FormatUsage40,
        Formatindex40,
        defaultFormatElement40,
        FormatCode41,
        FormatDefaultName41,
        FormatKey41,
        FormatType41,
        FormatUsage41,
        Formatindex41,
        defaultFormatElement41,
        FormatCode42,
        FormatDefaultName42,
        FormatKey42,
        FormatType42,
        FormatUsage42,
        Formatindex42,
        defaultFormatElement42,
        FormatCode43,
        FormatDefaultName43,
        FormatKey43,
        FormatType43,
        FormatUsage43,
        Formatindex43,
        defaultFormatElement43,
        FormatCode44,
        FormatDefaultName44,
        FormatKey44,
        FormatType44,
        FormatUsage44,
        Formatindex44,
        defaultFormatElement44,
        FormatCode45,
        FormatDefaultName45,
        FormatKey45,
        FormatType45,
        FormatUsage45,
        Formatindex45,
        defaultFormatElement45,
        FormatCode46,
        FormatDefaultName46,
        FormatKey46,
        FormatType46,
        FormatUsage46,
        Formatindex46,
        defaultFormatElement46,
        FormatCode47,
        FormatDefaultName47,
        FormatKey47,
        FormatType47,
        FormatUsage47,
        Formatindex47,
        defaultFormatElement47,
    };

    SAL_DLLPUBLIC_EXPORT sal_Unicode const* const* SAL_CALL
    getAllFormats0_nl_BE(sal_Int16& count, const sal_Unicode*& from, const sal_Unicode*& to)
    {
        count = FormatElementsCount0;
        from = replaceFrom0;
        to = replaceTo0;
        return (sal_Unicode**)FormatElementsArray0;
    }
    static const sal_Unicode DateAcceptancePattern0[] = { 0x44, 0x2f, 0x4d, 0x2f, 0x59, 0x0 };
    static const sal_Unicode DateAcceptancePattern1[] = { 0x44, 0x2f, 0x4d, 0x0 };
    static const sal_Int16 DateAcceptancePatternsCount = 2;
    static const sal_Unicode* DateAcceptancePatternsArray[] = {
        DateAcceptancePattern0,
        DateAcceptancePattern1,
    };

    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getDateAcceptancePatterns_nl_BE(sal_Int16& count)
    {
        count = DateAcceptancePatternsCount;
        return (sal_Unicode**)DateAcceptancePatternsArray;
    }
    extern sal_Unicode** SAL_CALL getCollatorImplementation_en_US(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getCollatorImplementation_nl_BE(sal_Int16& count)
    {
        return getCollatorImplementation_en_US(count);
    }
    extern sal_Unicode** SAL_CALL getCollationOptions_en_US(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getCollationOptions_nl_BE(sal_Int16& count)
    {
        return getCollationOptions_en_US(count);
    }
    extern sal_Unicode** SAL_CALL getSearchOptions_en_US(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getSearchOptions_nl_BE(sal_Int16& count)
    {
        return getSearchOptions_en_US(count);
    }
    extern sal_Unicode** SAL_CALL getIndexAlgorithm_en_US(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getIndexAlgorithm_nl_BE(sal_Int16& count)
    {
        return getIndexAlgorithm_en_US(count);
    }
    extern sal_Unicode** SAL_CALL getUnicodeScripts_en_US(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getUnicodeScripts_nl_BE(sal_Int16& count)
    {
        return getUnicodeScripts_en_US(count);
    }
    extern sal_Unicode** SAL_CALL getFollowPageWords_en_US(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getFollowPageWords_nl_BE(sal_Int16& count)
    {
        return getFollowPageWords_en_US(count);
    }
    extern sal_Unicode** SAL_CALL getAllCalendars_nl_NL(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getAllCalendars_nl_BE(sal_Int16& count)
    {
        return getAllCalendars_nl_NL(count);
    }
    static const sal_Unicode defaultCurrency0[] = { 1 };
    static const sal_Unicode defaultCurrencyUsedInCompatibleFormatCodes0[] = { 0 };
    static const sal_Unicode defaultCurrencyLegacyOnly0[] = { 0 };
    static const sal_Unicode currencyID0[] = { 0x45, 0x55, 0x52, 0x0 };
    static const sal_Unicode currencySymbol0[] = { 0x20ac, 0x0 };
    static const sal_Unicode bankSymbol0[] = { 0x45, 0x55, 0x52, 0x0 };
    static const sal_Unicode currencyName0[] = { 0x45, 0x75, 0x72, 0x6f, 0x0 };
    static const sal_Unicode currencyDecimalPlaces0[] = { 2 };

    static const sal_Unicode defaultCurrency1[] = { 0 };
    static const sal_Unicode defaultCurrencyUsedInCompatibleFormatCodes1[] = { 1 };
    static const sal_Unicode defaultCurrencyLegacyOnly1[] = { 0 };
    static const sal_Unicode currencyID1[] = { 0x42, 0x45, 0x46, 0x0 };
    static const sal_Unicode currencySymbol1[] = { 0x42, 0x46, 0x0 };
    static const sal_Unicode bankSymbol1[] = { 0x42, 0x45, 0x46, 0x0 };
    static const sal_Unicode currencyName1[] = { 0x42, 0x65, 0x6c, 0x67, 0x69, 0x73, 0x63, 0x68,
                                                 0x65, 0x20, 0x66, 0x72, 0x61, 0x6e, 0x6b, 0x0 };
    static const sal_Unicode currencyDecimalPlaces1[] = { 2 };

    static const sal_Unicode defaultCurrency2[] = { 0 };
    static const sal_Unicode defaultCurrencyUsedInCompatibleFormatCodes2[] = { 0 };
    static const sal_Unicode defaultCurrencyLegacyOnly2[] = { 0 };
    static const sal_Unicode currencyID2[] = { 0x4e, 0x4c, 0x47, 0x0 };
    static const sal_Unicode currencySymbol2[] = { 0x66, 0x6c, 0x0 };
    static const sal_Unicode bankSymbol2[] = { 0x4e, 0x4c, 0x47, 0x0 };
    static const sal_Unicode currencyName2[]
        = { 0x4e, 0x65, 0x64, 0x65, 0x72, 0x6c, 0x61, 0x6e, 0x64, 0x73,
            0x65, 0x20, 0x67, 0x75, 0x6c, 0x64, 0x65, 0x6e, 0x0 };
    static const sal_Unicode currencyDecimalPlaces2[] = { 2 };

    static const sal_Int16 currencyCount = 3;

    static const sal_Unicode* currencies[] = {
        currencyID0,
        currencySymbol0,
        bankSymbol0,
        currencyName0,
        defaultCurrency0,
        defaultCurrencyUsedInCompatibleFormatCodes0,
        currencyDecimalPlaces0,
        defaultCurrencyLegacyOnly0,
        currencyID1,
        currencySymbol1,
        bankSymbol1,
        currencyName1,
        defaultCurrency1,
        defaultCurrencyUsedInCompatibleFormatCodes1,
        currencyDecimalPlaces1,
        defaultCurrencyLegacyOnly1,
        currencyID2,
        currencySymbol2,
        bankSymbol2,
        currencyName2,
        defaultCurrency2,
        defaultCurrencyUsedInCompatibleFormatCodes2,
        currencyDecimalPlaces2,
        defaultCurrencyLegacyOnly2,
    };

    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getAllCurrencies_nl_BE(sal_Int16& count)
    {
        count = currencyCount;
        return (sal_Unicode**)currencies;
    }
    extern sal_Unicode** SAL_CALL getTransliterations_en_US(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getTransliterations_nl_BE(sal_Int16& count)
    {
        return getTransliterations_en_US(count);
    }
    extern sal_Unicode** SAL_CALL getForbiddenCharacters_nl_NL(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getForbiddenCharacters_nl_BE(sal_Int16& count)
    {
        return getForbiddenCharacters_nl_NL(count);
    }
    extern sal_Unicode** SAL_CALL getBreakIteratorRules_nl_NL(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getBreakIteratorRules_nl_BE(sal_Int16& count)
    {
        return getBreakIteratorRules_nl_NL(count);
    }
    extern sal_Unicode** SAL_CALL getReservedWords_nl_NL(sal_Int16& count);
    SAL_DLLPUBLIC_EXPORT sal_Unicode** SAL_CALL getReservedWords_nl_BE(sal_Int16& count)
    {
        return getReservedWords_nl_NL(count);
    }
    // ---> ContinuousNumbering
    extern const sal_Unicode*** SAL_CALL getContinuousNumberingLevels_en_US(sal_Int16& nStyles,
                                                                            sal_Int16& nAttributes);
    SAL_DLLPUBLIC_EXPORT const sal_Unicode*** SAL_CALL
    getContinuousNumberingLevels_nl_BE(sal_Int16& nStyles, sal_Int16& nAttributes)
    {
        return getContinuousNumberingLevels_en_US(nStyles, nAttributes);
    }
    // ---> OutlineNumbering
    extern const sal_Unicode**** SAL_CALL getOutlineNumberingLevels_en_US(sal_Int16& nStyles,
                                                                          sal_Int16& nLevels,
                                                                          sal_Int16& nAttributes);
    SAL_DLLPUBLIC_EXPORT const sal_Unicode**** SAL_CALL
    getOutlineNumberingLevels_nl_BE(sal_Int16& nStyles, sal_Int16& nLevels, sal_Int16& nAttributes)
    {
        return getOutlineNumberingLevels_en_US(nStyles, nLevels, nAttributes);
    }
} // extern "C"
