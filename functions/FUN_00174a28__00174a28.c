/*
 * Program: n42.bin
 * Function: FUN_00174a28
 * Entry: 00174a28
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00174a28(void)

{
  if (B_sbbvk == '\0') {
    B_sbblsu = 0;
    DAT_003faff6 = func_0xff21a054(DAT_001c7a2a,&DAT_001c7a2c,DAT_001c7a2b,&DAT_001c7a30,0x1c7a3a,ub
                                   ,lamsons_w);
  }
  else if (DAT_003faff6 == '\0') {
    B_sbblsu = 1;
  }
  else {
    DAT_003faff6 = DAT_003faff6 + -1;
  }
  if (B_sbbvk2 == '\0') {
    B_sbblsu2 = 0;
    DAT_003fb00a = func_0xff21a054(DAT_001c7a2a,&DAT_001c7a2c,DAT_001c7a2b,&DAT_001c7a30,0x1c7a3a,ub
                                   ,lamsons2_w);
  }
  else if (DAT_003fb00a == '\0') {
    B_sbblsu2 = 1;
  }
  else {
    DAT_003fb00a = DAT_003fb00a + -1;
  }
  if ((B_stend == '\0') || ((DAT_003fb013 & 1) != 0)) {
    if (DAT_003fafff == '\0') {
      B_abll = B_abll & 0xfb;
    }
    else {
      DAT_003fafff = DAT_003fafff + -1;
    }
  }
  else if (DAT_003fafff == '\0') {
    DAT_003fafff = DAT_001c79d0;
    B_abll = B_abll | 4;
  }
  else {
    DAT_003fafff = DAT_003fafff + -1;
  }
  if (B_stend == '\0') {
    DAT_003fb013 = DAT_003fb013 & 0xfe;
  }
  else {
    DAT_003fb013 = DAT_003fb013 | 1;
  }
  iplsu_w = (word)((int)_DAT_003faff8 * (uint)_DAT_001c7a28 >> 8);
  iplsuvj_w = iplsu_w + 0x8000;
  iplsu2_w = (word)((int)_DAT_003fb00c * (uint)_DAT_001c7a28 >> 8);
  iplsuvj2_w = iplsu2_w + 0x8000;
  if ((uint)lamsonb_w << 3 < 0x10000) {
    lalsuvj_w = (word)((uint)lamsonb_w << 3);
  }
  else {
    lalsuvj_w = 0xffff;
  }
  if ((uint)lamsonb2_w << 3 < 0x10000) {
    lalsuvj2_w = (word)((uint)lamsonb2_w << 3);
  }
  else {
    lalsuvj2_w = 0xffff;
  }
  if ((B_sls != '\0') && (B_sbbvk != '\0')) {
    flamsls = func_0xff2196d0(&DAT_001d0e00,nmot,rl);
  }
  return;
}

