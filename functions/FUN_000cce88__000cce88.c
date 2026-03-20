/*
 * Program: n42.bin
 * Function: FUN_000cce88
 * Entry: 000cce88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cce88(void)

{
  if (((B_lamka & B_lrka) == 0) && (DAT_003fb66d != '\0')) {
    DAT_003fb66c = '\x01';
  }
  else {
    DAT_003fb66c = '\0';
  }
  DAT_003fb66d = '\x01' - ((B_lamka & B_lrka) == 0);
  if (DAT_003fb66c == '\0') {
    FUN_000b258c(&DAT_003fb67c,0,_DAT_001cb630);
  }
  else {
    _DAT_003fb67c = (int)_LASHKAB << 0x10;
  }
  dlahkab_w = (word)((uint)_DAT_003fb67c >> 0x10);
  lasonhk_w = calc_value_from_y(&LALIUSHK,ushk_w);
  if (B_lr == '\0') {
    _DAT_003fb678 = (uint)lasolhk_w << 0x10;
  }
  else {
    FUN_000b2644(&DAT_003fb678,lasonhk_w,zlasohf_w);
  }
  lahkf_w = (word)((uint)_DAT_003fb678 >> 0x10);
  DAT_003fb694 = B_lr;
  DAT_003fb695 = B_lrssp;
  _DAT_003fb68e = lasolhk_w;
  _DAT_003fb690 = lasonhk_w;
  FUN_000b4890(&UNK_003fb688);
  lahkm_w = _DAT_003fb68c;
  lahkmz = DAT_003fb696;
  if (((B_lamka & B_lrka2) == 0) && (DAT_003fb66f != '\0')) {
    DAT_003fb66e = '\x01';
  }
  else {
    DAT_003fb66e = '\0';
  }
  DAT_003fb66f = '\x01' - ((B_lamka & B_lrka2) == 0);
  if (DAT_003fb66e == '\0') {
    FUN_000b258c(&DAT_003fb680,0,_ZLASHKAB);
  }
  else {
    _DAT_003fb680 = (int)_DAT_001cb62e << 0x10;
  }
  dlahkab2_w = (word)((uint)_DAT_003fb680 >> 0x10);
  lasonhk2_w = calc_value_from_y(&LALIUSHK2,ushk2_w);
  if (B_lr2 == '\0') {
    _DAT_003fb684 = (uint)lasolhk2_w << 0x10;
  }
  else {
    FUN_000b2644(&DAT_003fb684,lasonhk2_w,zlasohf2_w);
  }
  lahkf2_w = (word)((uint)_DAT_003fb684 >> 0x10);
  DAT_003fb6a4 = B_lr2;
  DAT_003fb6a5 = B_lrssp;
  _DAT_003fb69e = lasolhk2_w;
  _DAT_003fb6a0 = lasonhk2_w;
  FUN_000b4890(&UNK_003fb698);
  lahkm2_w = _DAT_003fb69c;
  lahkmz2 = DAT_003fb6a6;
  return;
}

