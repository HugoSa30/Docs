/*
 * Program: n42.bin
 * Function: FUN_0012d794
 * Entry: 0012d794
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012d794(void)

{
  ushort local_30;
  ushort local_2c;
  ushort local_28 [2];
  ushort local_24 [2];
  ushort *local_20;
  ushort local_1c [2];
  ushort *local_18;
  
  dvvtnmx = 40000;
  dvvtrlmx_w = 64000;
  dvvtwnkmx = 0x708;
  dvvtwnkmx2 = 0x708;
  wnk_soll1 = 0x708;
  local_30 = _Z_dvpmn & 0xd0fc | 0x2002;
  local_28[0] = local_30;
  local_24[0] = local_30;
  local_20 = local_28;
  func_0xff222958(0x36,local_24);
  local_2c = _B_ftdvan & 0xd0fc | 0x2002;
  local_28[0] = local_2c;
  local_1c[0] = local_2c;
  local_18 = local_28;
  func_0xff222958(0x1a,local_1c);
  _DAT_003fac30 = 0x7080000;
  DAT_003fac2c = func_0xff221e78(&UNK_003fac2d,0,TDVERR);
  DAT_003fac1e = func_0xff221e78(&UNK_003fac1f,0,TVVTTVON);
  DAT_003fac24 = func_0xff221e78(&UNK_003fac25,0,DAT_001c3b48);
  DAT_003fac2e = func_0xff221e78(&UNK_003fac2f,0,DAT_001c3b4e);
  DAT_003fac26 = func_0xff221e78(&UNK_003fac27,0,DAT_001c3b4d);
  DAT_003fac1c = func_0xff221e78(&UNK_003fac1d,0,DAT_001c3b4c);
  DAT_003fac28 = func_0xff221e78(&UNK_003fac29,0,DAT_001c3b4b);
  dvvttestat = 5;
  exwnkrbt_w = 0x708;
  DAT_003fac20 = '\x01' - (B_vvtnlrem == DAT_003fac21);
  DAT_003fac21 = B_vvtnlrem;
  DAT_003fac36 = '\x01' - (B_vvtiorem == DAT_003fac37);
  DAT_003fac37 = B_vvtiorem;
  return;
}

