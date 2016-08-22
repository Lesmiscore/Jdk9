/* == Start of generated table == */
/*
 * The following table is generated by running:
 *
 *   ./gen-indic-table.py IndicSyllabicCategory.txt IndicPositionalCategory.txt Blocks.txt
 *
 * on files with these headers:
 *
 * # IndicSyllabicCategory-9.0.0.txt
 * # Date: 2016-05-21, 02:46:00 GMT [RP]
 * # IndicPositionalCategory-9.0.0.txt
 * # Date: 2016-02-25, 00:48:00 GMT [RP]
 * # Blocks-9.0.0.txt
 * # Date: 2016-02-05, 23:48:00 GMT [KW]
 */

#include "hb-ot-shape-complex-indic-private.hh"


#define ISC_A   INDIC_SYLLABIC_CATEGORY_AVAGRAHA                /*  15 chars; Avagraha */
#define ISC_Bi  INDIC_SYLLABIC_CATEGORY_BINDU                   /*  67 chars; Bindu */
#define ISC_BJN INDIC_SYLLABIC_CATEGORY_BRAHMI_JOINING_NUMBER   /*  20 chars; Brahmi_Joining_Number */
#define ISC_Ca  INDIC_SYLLABIC_CATEGORY_CANTILLATION_MARK       /*  53 chars; Cantillation_Mark */
#define ISC_C   INDIC_SYLLABIC_CATEGORY_CONSONANT               /* 1907 chars; Consonant */
#define ISC_CD  INDIC_SYLLABIC_CATEGORY_CONSONANT_DEAD          /*  10 chars; Consonant_Dead */
#define ISC_CF  INDIC_SYLLABIC_CATEGORY_CONSONANT_FINAL         /*  62 chars; Consonant_Final */
#define ISC_CHL INDIC_SYLLABIC_CATEGORY_CONSONANT_HEAD_LETTER   /*   5 chars; Consonant_Head_Letter */
#define ISC_CK  INDIC_SYLLABIC_CATEGORY_CONSONANT_KILLER        /*   2 chars; Consonant_Killer */
#define ISC_CM  INDIC_SYLLABIC_CATEGORY_CONSONANT_MEDIAL        /*  22 chars; Consonant_Medial */
#define ISC_CP  INDIC_SYLLABIC_CATEGORY_CONSONANT_PLACEHOLDER   /*  16 chars; Consonant_Placeholder */
#define ISC_CPR INDIC_SYLLABIC_CATEGORY_CONSONANT_PRECEDING_REPHA       /*   1 chars; Consonant_Preceding_Repha */
#define ISC_CPrf        INDIC_SYLLABIC_CATEGORY_CONSONANT_PREFIXED      /*   2 chars; Consonant_Prefixed */
#define ISC_CS  INDIC_SYLLABIC_CATEGORY_CONSONANT_SUBJOINED     /*  90 chars; Consonant_Subjoined */
#define ISC_CSR INDIC_SYLLABIC_CATEGORY_CONSONANT_SUCCEEDING_REPHA      /*   4 chars; Consonant_Succeeding_Repha */
#define ISC_CWS INDIC_SYLLABIC_CATEGORY_CONSONANT_WITH_STACKER  /*   4 chars; Consonant_With_Stacker */
#define ISC_GM  INDIC_SYLLABIC_CATEGORY_GEMINATION_MARK         /*   2 chars; Gemination_Mark */
#define ISC_IS  INDIC_SYLLABIC_CATEGORY_INVISIBLE_STACKER       /*   7 chars; Invisible_Stacker */
#define ISC_ZWJ INDIC_SYLLABIC_CATEGORY_JOINER                  /*   1 chars; Joiner */
#define ISC_ML  INDIC_SYLLABIC_CATEGORY_MODIFYING_LETTER        /*   1 chars; Modifying_Letter */
#define ISC_ZWNJ        INDIC_SYLLABIC_CATEGORY_NON_JOINER              /*   1 chars; Non_Joiner */
#define ISC_N   INDIC_SYLLABIC_CATEGORY_NUKTA                   /*  24 chars; Nukta */
#define ISC_Nd  INDIC_SYLLABIC_CATEGORY_NUMBER                  /* 459 chars; Number */
#define ISC_NJ  INDIC_SYLLABIC_CATEGORY_NUMBER_JOINER           /*   1 chars; Number_Joiner */
#define ISC_x   INDIC_SYLLABIC_CATEGORY_OTHER                   /*   1 chars; Other */
#define ISC_PK  INDIC_SYLLABIC_CATEGORY_PURE_KILLER             /*  16 chars; Pure_Killer */
#define ISC_RS  INDIC_SYLLABIC_CATEGORY_REGISTER_SHIFTER        /*   2 chars; Register_Shifter */
#define ISC_SM  INDIC_SYLLABIC_CATEGORY_SYLLABLE_MODIFIER       /*  22 chars; Syllable_Modifier */
#define ISC_TL  INDIC_SYLLABIC_CATEGORY_TONE_LETTER             /*   7 chars; Tone_Letter */
#define ISC_TM  INDIC_SYLLABIC_CATEGORY_TONE_MARK               /*  42 chars; Tone_Mark */
#define ISC_V   INDIC_SYLLABIC_CATEGORY_VIRAMA                  /*  24 chars; Virama */
#define ISC_Vs  INDIC_SYLLABIC_CATEGORY_VISARGA                 /*  31 chars; Visarga */
#define ISC_Vo  INDIC_SYLLABIC_CATEGORY_VOWEL                   /*  30 chars; Vowel */
#define ISC_M   INDIC_SYLLABIC_CATEGORY_VOWEL_DEPENDENT         /* 602 chars; Vowel_Dependent */
#define ISC_VI  INDIC_SYLLABIC_CATEGORY_VOWEL_INDEPENDENT       /* 431 chars; Vowel_Independent */

#define IMC_B   INDIC_MATRA_CATEGORY_BOTTOM                     /* 300 chars; Bottom */
#define IMC_BR  INDIC_MATRA_CATEGORY_BOTTOM_AND_RIGHT           /*   2 chars; Bottom_And_Right */
#define IMC_L   INDIC_MATRA_CATEGORY_LEFT                       /*  57 chars; Left */
#define IMC_LR  INDIC_MATRA_CATEGORY_LEFT_AND_RIGHT             /*  21 chars; Left_And_Right */
#define IMC_x   INDIC_MATRA_CATEGORY_NOT_APPLICABLE             /*   1 chars; Not_Applicable */
#define IMC_O   INDIC_MATRA_CATEGORY_OVERSTRUCK                 /*  10 chars; Overstruck */
#define IMC_R   INDIC_MATRA_CATEGORY_RIGHT                      /* 258 chars; Right */
#define IMC_T   INDIC_MATRA_CATEGORY_TOP                        /* 342 chars; Top */
#define IMC_TB  INDIC_MATRA_CATEGORY_TOP_AND_BOTTOM             /*  10 chars; Top_And_Bottom */
#define IMC_TBR INDIC_MATRA_CATEGORY_TOP_AND_BOTTOM_AND_RIGHT   /*   1 chars; Top_And_Bottom_And_Right */
#define IMC_TL  INDIC_MATRA_CATEGORY_TOP_AND_LEFT               /*   6 chars; Top_And_Left */
#define IMC_TLR INDIC_MATRA_CATEGORY_TOP_AND_LEFT_AND_RIGHT     /*   4 chars; Top_And_Left_And_Right */
#define IMC_TR  INDIC_MATRA_CATEGORY_TOP_AND_RIGHT              /*  13 chars; Top_And_Right */
#define IMC_VOL INDIC_MATRA_CATEGORY_VISUAL_ORDER_LEFT          /*  19 chars; Visual_Order_Left */

#define _(S,M) INDIC_COMBINE_CATEGORIES (ISC_##S, IMC_##M)


static const INDIC_TABLE_ELEMENT_TYPE indic_table[] = {


#define indic_offset_0x0028u 0


  /* Basic Latin */

  /* 0028 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(CP,x),  _(x,x),  _(x,x),
  /* 0030 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0038 */ _(Nd,x), _(Nd,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

#define indic_offset_0x00b0u 24


  /* Latin-1 Supplement */

  /* 00B0 */  _(x,x),  _(x,x), _(SM,x), _(SM,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 00B8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 00C0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 00C8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 00D0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(CP,x),

#define indic_offset_0x0900u 64


  /* Devanagari */

  /* 0900 */ _(Bi,T), _(Bi,T), _(Bi,T), _(Vs,R), _(VI,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0908 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0910 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0918 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0920 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0928 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0930 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0938 */  _(C,x),  _(C,x),  _(M,T),  _(M,R),  _(N,B),  _(A,x),  _(M,R),  _(M,L),
  /* 0940 */  _(M,R),  _(M,B),  _(M,B),  _(M,B),  _(M,B),  _(M,T),  _(M,T),  _(M,T),
  /* 0948 */  _(M,T),  _(M,R),  _(M,R),  _(M,R),  _(M,R),  _(V,B),  _(M,L),  _(M,R),
  /* 0950 */  _(x,x), _(Ca,T), _(Ca,B),  _(x,T),  _(x,T),  _(M,T),  _(M,B),  _(M,B),
  /* 0958 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0960 */ _(VI,x), _(VI,x),  _(M,B),  _(M,B),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0968 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0970 */  _(x,x),  _(x,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0978 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),

  /* Bengali */

  /* 0980 */  _(x,x), _(Bi,T), _(Bi,R), _(Vs,R),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0988 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(x,x),  _(x,x), _(VI,x),
  /* 0990 */ _(VI,x),  _(x,x),  _(x,x), _(VI,x), _(VI,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0998 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 09A0 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 09A8 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 09B0 */  _(C,x),  _(x,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),  _(C,x),  _(C,x),
  /* 09B8 */  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(N,B),  _(A,x),  _(M,R),  _(M,L),
  /* 09C0 */  _(M,R),  _(M,B),  _(M,B),  _(M,B),  _(M,B),  _(x,x),  _(x,x),  _(M,L),
  /* 09C8 */  _(M,L),  _(x,x),  _(x,x), _(M,LR), _(M,LR),  _(V,B), _(CD,x),  _(x,x),
  /* 09D0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(M,R),
  /* 09D8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),
  /* 09E0 */ _(VI,x), _(VI,x),  _(M,B),  _(M,B),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 09E8 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 09F0 */  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 09F8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

  /* Gurmukhi */

  /* 0A00 */  _(x,x), _(Bi,T), _(Bi,T), _(Vs,R),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0A08 */ _(VI,x), _(VI,x), _(VI,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(VI,x),
  /* 0A10 */ _(VI,x),  _(x,x),  _(x,x), _(VI,x), _(VI,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0A18 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0A20 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0A28 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0A30 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(x,x),
  /* 0A38 */  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(N,B),  _(x,x),  _(M,R),  _(M,L),
  /* 0A40 */  _(M,R),  _(M,B),  _(M,B),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(M,T),
  /* 0A48 */  _(M,T),  _(x,x),  _(x,x),  _(M,T),  _(M,T),  _(V,B),  _(x,x),  _(x,x),
  /* 0A50 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0A58 */  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),  _(x,x),
  /* 0A60 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0A68 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0A70 */ _(Bi,T), _(GM,T), _(CP,x), _(CP,x),  _(x,x), _(CM,B),  _(x,x),  _(x,x),
  /* 0A78 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

  /* Gujarati */

  /* 0A80 */  _(x,x), _(Bi,T), _(Bi,T), _(Vs,R),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0A88 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(x,x), _(VI,x),
  /* 0A90 */ _(VI,x), _(VI,x),  _(x,x), _(VI,x), _(VI,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0A98 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0AA0 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0AA8 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0AB0 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0AB8 */  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(N,B),  _(A,x),  _(M,R),  _(M,L),
  /* 0AC0 */  _(M,R),  _(M,B),  _(M,B),  _(M,B),  _(M,B),  _(M,T),  _(x,x),  _(M,T),
  /* 0AC8 */  _(M,T), _(M,TR),  _(x,x),  _(M,R),  _(M,R),  _(V,B),  _(x,x),  _(x,x),
  /* 0AD0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0AD8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0AE0 */ _(VI,x), _(VI,x),  _(M,B),  _(M,B),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0AE8 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0AF0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0AF8 */  _(x,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

  /* Oriya */

  /* 0B00 */  _(x,x), _(Bi,T), _(Bi,R), _(Vs,R),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0B08 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(x,x),  _(x,x), _(VI,x),
  /* 0B10 */ _(VI,x),  _(x,x),  _(x,x), _(VI,x), _(VI,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0B18 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0B20 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0B28 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0B30 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0B38 */  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(N,B),  _(A,x),  _(M,R),  _(M,T),
  /* 0B40 */  _(M,R),  _(M,B),  _(M,B),  _(M,B),  _(M,B),  _(x,x),  _(x,x),  _(M,L),
  /* 0B48 */ _(M,TL),  _(x,x),  _(x,x), _(M,LR),_(M,TLR),  _(V,B),  _(x,x),  _(x,x),
  /* 0B50 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(M,T), _(M,TR),
  /* 0B58 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),
  /* 0B60 */ _(VI,x), _(VI,x),  _(M,B),  _(M,B),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0B68 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0B70 */  _(x,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0B78 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

  /* Tamil */

  /* 0B80 */  _(x,x),  _(x,x), _(Bi,T), _(ML,x),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0B88 */ _(VI,x), _(VI,x), _(VI,x),  _(x,x),  _(x,x),  _(x,x), _(VI,x), _(VI,x),
  /* 0B90 */ _(VI,x),  _(x,x), _(VI,x), _(VI,x), _(VI,x),  _(C,x),  _(x,x),  _(x,x),
  /* 0B98 */  _(x,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),  _(x,x),  _(C,x),  _(C,x),
  /* 0BA0 */  _(x,x),  _(x,x),  _(x,x),  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0BA8 */  _(C,x),  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),  _(C,x),  _(C,x),
  /* 0BB0 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0BB8 */  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(M,R),  _(M,R),
  /* 0BC0 */  _(M,T),  _(M,R),  _(M,R),  _(x,x),  _(x,x),  _(x,x),  _(M,L),  _(M,L),
  /* 0BC8 */  _(M,L),  _(x,x), _(M,LR), _(M,LR), _(M,LR),  _(V,T),  _(x,x),  _(x,x),
  /* 0BD0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(M,R),
  /* 0BD8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0BE0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0BE8 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0BF0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0BF8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

  /* Telugu */

  /* 0C00 */ _(Bi,T), _(Bi,R), _(Bi,R), _(Vs,R),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0C08 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(x,x), _(VI,x), _(VI,x),
  /* 0C10 */ _(VI,x),  _(x,x), _(VI,x), _(VI,x), _(VI,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0C18 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0C20 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0C28 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0C30 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0C38 */  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),  _(A,x),  _(M,T),  _(M,T),
  /* 0C40 */  _(M,T),  _(M,R),  _(M,R),  _(M,R),  _(M,R),  _(x,x),  _(M,T),  _(M,T),
  /* 0C48 */ _(M,TB),  _(x,x),  _(M,T),  _(M,T),  _(M,T),  _(V,T),  _(x,x),  _(x,x),
  /* 0C50 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(M,T),  _(M,B),  _(x,x),
  /* 0C58 */  _(C,x),  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0C60 */ _(VI,x), _(VI,x),  _(M,B),  _(M,B),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0C68 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0C70 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0C78 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

  /* Kannada */

  /* 0C80 */  _(x,x), _(Bi,T), _(Bi,R), _(Vs,R),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0C88 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(x,x), _(VI,x), _(VI,x),
  /* 0C90 */ _(VI,x),  _(x,x), _(VI,x), _(VI,x), _(VI,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0C98 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0CA0 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0CA8 */  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0CB0 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0CB8 */  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(N,B),  _(A,x),  _(M,R),  _(M,T),
  /* 0CC0 */ _(M,TR),  _(M,R),  _(M,R),  _(M,R),  _(M,R),  _(x,x),  _(M,T), _(M,TR),
  /* 0CC8 */ _(M,TR),  _(x,x), _(M,TR), _(M,TR),  _(M,T),  _(V,T),  _(x,x),  _(x,x),
  /* 0CD0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(M,R),  _(M,R),  _(x,x),
  /* 0CD8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(C,x),  _(x,x),
  /* 0CE0 */ _(VI,x), _(VI,x),  _(M,B),  _(M,B),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0CE8 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0CF0 */  _(x,x),_(CWS,x),_(CWS,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0CF8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

  /* Malayalam */

  /* 0D00 */  _(x,x), _(Bi,T), _(Bi,R), _(Vs,R),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0D08 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(x,x), _(VI,x), _(VI,x),
  /* 0D10 */ _(VI,x),  _(x,x), _(VI,x), _(VI,x), _(VI,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0D18 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0D20 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0D28 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0D30 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0D38 */  _(C,x),  _(C,x),  _(C,x),  _(x,x),  _(x,x),  _(A,x),  _(M,R),  _(M,R),
  /* 0D40 */  _(M,R),  _(M,R),  _(M,R),  _(M,B),  _(M,B),  _(x,x),  _(M,L),  _(M,L),
  /* 0D48 */  _(M,L),  _(x,x), _(M,LR), _(M,LR), _(M,LR),  _(V,T),_(CPR,x),  _(x,x),
  /* 0D50 */  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(CD,x), _(CD,x), _(CD,x),  _(M,R),
  /* 0D58 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(VI,x),
  /* 0D60 */ _(VI,x), _(VI,x),  _(M,B),  _(M,B),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0D68 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0D70 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 0D78 */  _(x,x),  _(x,x), _(CD,x), _(CD,x), _(CD,x), _(CD,x), _(CD,x), _(CD,x),

  /* Sinhala */

  /* 0D80 */  _(x,x),  _(x,x), _(Bi,R), _(Vs,R),  _(x,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0D88 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),
  /* 0D90 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(x,x),
  /* 0D98 */  _(x,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0DA0 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0DA8 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0DB0 */  _(C,x),  _(C,x),  _(x,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 0DB8 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(x,x),  _(C,x),  _(x,x),  _(x,x),
  /* 0DC0 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(x,x),
  /* 0DC8 */  _(x,x),  _(x,x),  _(V,T),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(M,R),
  /* 0DD0 */  _(M,R),  _(M,R),  _(M,T),  _(M,T),  _(M,B),  _(x,x),  _(M,B),  _(x,x),
  /* 0DD8 */  _(M,R),  _(M,L), _(M,TL),  _(M,L), _(M,LR),_(M,TLR), _(M,LR),  _(M,R),
  /* 0DE0 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(Nd,x), _(Nd,x),
  /* 0DE8 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 0DF0 */  _(x,x),  _(x,x),  _(M,R),  _(M,R),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

#define indic_offset_0x1000u 1336


  /* Myanmar */

  /* 1000 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 1008 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 1010 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 1018 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 1020 */  _(C,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),
  /* 1028 */ _(VI,x), _(VI,x), _(VI,x),  _(M,R),  _(M,R),  _(M,T),  _(M,T),  _(M,B),
  /* 1030 */  _(M,B),  _(M,L),  _(M,T),  _(M,T),  _(M,T),  _(M,T), _(Bi,T), _(TM,B),
  /* 1038 */ _(Vs,R), _(IS,x), _(PK,T), _(CM,R), _(CM,x), _(CM,B), _(CM,B),  _(C,x),
  /* 1040 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 1048 */ _(Nd,x), _(Nd,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(CP,x),  _(x,x),
  /* 1050 */  _(C,x),  _(C,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(M,R),  _(M,R),
  /* 1058 */  _(M,B),  _(M,B),  _(C,x),  _(C,x),  _(C,x),  _(C,x), _(CM,B), _(CM,B),
  /* 1060 */ _(CM,B),  _(C,x),  _(M,R), _(TM,R), _(TM,R),  _(C,x),  _(C,x),  _(M,R),
  /* 1068 */  _(M,R), _(TM,R), _(TM,R), _(TM,R), _(TM,R), _(TM,R),  _(C,x),  _(C,x),
  /* 1070 */  _(C,x),  _(M,T),  _(M,T),  _(M,T),  _(M,T),  _(C,x),  _(C,x),  _(C,x),
  /* 1078 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 1080 */  _(C,x),  _(C,x), _(CM,B),  _(M,R),  _(M,L),  _(M,T),  _(M,T), _(TM,R),
  /* 1088 */ _(TM,R), _(TM,R), _(TM,R), _(TM,R), _(TM,R), _(TM,B),  _(C,x), _(TM,R),
  /* 1090 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 1098 */ _(Nd,x), _(Nd,x), _(TM,R), _(TM,R),  _(M,R),  _(M,T),  _(x,x),  _(x,x),

#define indic_offset_0x1780u 1496


  /* Khmer */

  /* 1780 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 1788 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 1790 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 1798 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* 17A0 */  _(C,x),  _(C,x),  _(C,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),
  /* 17A8 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x), _(VI,x),
  /* 17B0 */ _(VI,x), _(VI,x), _(VI,x), _(VI,x),  _(x,x),  _(x,x),  _(M,R),  _(M,T),
  /* 17B8 */  _(M,T),  _(M,T),  _(M,T),  _(M,B),  _(M,B),  _(M,B), _(M,TL),_(M,TLR),
  /* 17C0 */ _(M,LR),  _(M,L),  _(M,L),  _(M,L), _(M,LR), _(M,LR), _(Bi,T), _(Vs,R),
  /* 17C8 */  _(M,R), _(RS,T), _(RS,T), _(SM,T),_(CSR,T), _(CK,T), _(SM,T), _(SM,T),
  /* 17D0 */ _(SM,T), _(PK,T), _(IS,x), _(SM,T),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 17D8 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(A,x), _(SM,T),  _(x,x),  _(x,x),
  /* 17E0 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* 17E8 */ _(Nd,x), _(Nd,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

#define indic_offset_0x1cd0u 1608


  /* Vedic Extensions */

  /* 1CD0 */ _(Ca,T), _(Ca,T), _(Ca,T),  _(x,x), _(Ca,O), _(Ca,B), _(Ca,B), _(Ca,B),
  /* 1CD8 */ _(Ca,B), _(Ca,B), _(Ca,T), _(Ca,T), _(Ca,B), _(Ca,B), _(Ca,B), _(Ca,B),
  /* 1CE0 */ _(Ca,T), _(Ca,R),  _(x,O),  _(x,O),  _(x,O),  _(x,O),  _(x,O),  _(x,O),
  /* 1CE8 */  _(x,O),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,B),  _(x,x),  _(x,x),
  /* 1CF0 */  _(x,x),  _(x,x), _(Vs,x), _(Vs,x), _(Ca,T),  _(x,x),  _(x,x),  _(x,x),
  /* 1CF8 */ _(Ca,x), _(Ca,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

#define indic_offset_0x2008u 1656


  /* General Punctuation */

  /* 2008 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),_(ZWNJ,x),_(ZWJ,x),  _(x,x),  _(x,x),
  /* 2010 */ _(CP,x), _(CP,x), _(CP,x), _(CP,x), _(CP,x),  _(x,x),  _(x,x),  _(x,x),

#define indic_offset_0x2070u 1672


  /* Superscripts and Subscripts */

  /* 2070 */  _(x,x),  _(x,x),  _(x,x),  _(x,x), _(SM,x),  _(x,x),  _(x,x),  _(x,x),
  /* 2078 */  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),
  /* 2080 */  _(x,x),  _(x,x), _(SM,x), _(SM,x), _(SM,x),  _(x,x),  _(x,x),  _(x,x),

#define indic_offset_0xa8e0u 1696


  /* Devanagari Extended */

  /* A8E0 */ _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T),
  /* A8E8 */ _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T), _(Ca,T),
  /* A8F0 */ _(Ca,T), _(Ca,T),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),  _(x,x),

#define indic_offset_0xa9e0u 1720


  /* Myanmar Extended-B */

  /* A9E0 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(M,T),  _(x,x),  _(C,x),
  /* A9E8 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* A9F0 */ _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x), _(Nd,x),
  /* A9F8 */ _(Nd,x), _(Nd,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(x,x),

#define indic_offset_0xaa60u 1752


  /* Myanmar Extended-A */

  /* AA60 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* AA68 */  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),  _(C,x),
  /* AA70 */  _(x,x),  _(C,x),  _(C,x),  _(C,x), _(CP,x), _(CP,x), _(CP,x),  _(x,x),
  /* AA78 */  _(x,x),  _(x,x),  _(C,x), _(TM,R), _(TM,T), _(TM,R),  _(C,x),  _(C,x),

}; /* Table items: 1784; occupancy: 69% */

INDIC_TABLE_ELEMENT_TYPE
hb_indic_get_categories (hb_codepoint_t u)
{
  switch (u >> 12)
  {
    case 0x0u:
      if (hb_in_range (u, 0x0028u, 0x003Fu)) return indic_table[u - 0x0028u + indic_offset_0x0028u];
      if (hb_in_range (u, 0x00B0u, 0x00D7u)) return indic_table[u - 0x00B0u + indic_offset_0x00b0u];
      if (hb_in_range (u, 0x0900u, 0x0DF7u)) return indic_table[u - 0x0900u + indic_offset_0x0900u];
      if (unlikely (u == 0x00A0u)) return _(CP,x);
      break;

    case 0x1u:
      if (hb_in_range (u, 0x1000u, 0x109Fu)) return indic_table[u - 0x1000u + indic_offset_0x1000u];
      if (hb_in_range (u, 0x1780u, 0x17EFu)) return indic_table[u - 0x1780u + indic_offset_0x1780u];
      if (hb_in_range (u, 0x1CD0u, 0x1CFFu)) return indic_table[u - 0x1CD0u + indic_offset_0x1cd0u];
      break;

    case 0x2u:
      if (hb_in_range (u, 0x2008u, 0x2017u)) return indic_table[u - 0x2008u + indic_offset_0x2008u];
      if (hb_in_range (u, 0x2070u, 0x2087u)) return indic_table[u - 0x2070u + indic_offset_0x2070u];
      if (unlikely (u == 0x25CCu)) return _(CP,x);
      break;

    case 0xAu:
      if (hb_in_range (u, 0xA8E0u, 0xA8F7u)) return indic_table[u - 0xA8E0u + indic_offset_0xa8e0u];
      if (hb_in_range (u, 0xA9E0u, 0xA9FFu)) return indic_table[u - 0xA9E0u + indic_offset_0xa9e0u];
      if (hb_in_range (u, 0xAA60u, 0xAA7Fu)) return indic_table[u - 0xAA60u + indic_offset_0xaa60u];
      break;

    default:
      break;
  }
  return _(x,x);
}

#undef _

#undef ISC_A
#undef ISC_Bi
#undef ISC_BJN
#undef ISC_Ca
#undef ISC_C
#undef ISC_CD
#undef ISC_CF
#undef ISC_CHL
#undef ISC_CK
#undef ISC_CM
#undef ISC_CP
#undef ISC_CPR
#undef ISC_CPrf
#undef ISC_CS
#undef ISC_CSR
#undef ISC_CWS
#undef ISC_GM
#undef ISC_IS
#undef ISC_ZWJ
#undef ISC_ML
#undef ISC_ZWNJ
#undef ISC_N
#undef ISC_Nd
#undef ISC_NJ
#undef ISC_x
#undef ISC_PK
#undef ISC_RS
#undef ISC_SM
#undef ISC_TL
#undef ISC_TM
#undef ISC_V
#undef ISC_Vs
#undef ISC_Vo
#undef ISC_M
#undef ISC_VI

#undef IMC_B
#undef IMC_BR
#undef IMC_L
#undef IMC_LR
#undef IMC_x
#undef IMC_O
#undef IMC_R
#undef IMC_T
#undef IMC_TB
#undef IMC_TBR
#undef IMC_TL
#undef IMC_TLR
#undef IMC_TR
#undef IMC_VOL

/* == End of generated table == */
