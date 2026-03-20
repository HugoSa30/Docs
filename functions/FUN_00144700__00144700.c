/*
 * Program: n42.bin
 * Function: FUN_00144700
 * Entry: 00144700
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00144874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144700(void)

{
  uint uVar1;
  ushort uVar3;
  int iVar2;
  
  if ((((B_tprel >> 3 & 1) != 0) || ((DAT_001cb33d & 1) == 0)) || (B_nldg != '\0')) {
    DAT_003faa6f = 0;
  }
  B_ale = DAT_003faa6f & 1 | B_ale & 0xfe;
  temp_w1 = (ushort)CO_WNBM * 2 + 0x438;
  uVar3 = (ushort)(((uint)_W360_ALE_IMPL << 0x13) >> 0x15);
  temp_w2 = temp_w1 - uVar3;
  temp_w3 = temp_w1 - _DAT_001c1b2e;
  temp_w4 = temp_w1 + uVar3;
  B_enabale = 0;
  B_ralectr = 0;
  B_raleok = 0;
  B_undef = 0;
  B_strtswof = 1;
  tooth10ms = 0;
  ttstmpmx_l = FUN_001adb28();
  if (B_pwf != '\0') {
    DAT_003faa6f = 0;
  }
  B_ale = DAT_003faa6f & 1 | B_ale & 0xfe;
  uVar1 = ((uint)_W360_ALE_IMPL << 0x13) / 0x3c;
  uVar3 = (ushort)(uVar1 >> 0x13);
  if (0xff < uVar1 >> 0x13) {
    uVar3 = 0xff;
  }
  CO_WNBM = (byte)uVar3;
  uVar1 = (short)uVar3 * 0x74;
  CO_WAS = (word)uVar1;
  if (0x1c20 < uVar1) {
    CO_WAS = 0x1c20;
  }
  iVar2 = (0x3a - (short)(ushort)GAP_TOOTH) * (int)(short)uVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x3840 < iVar2) {
    iVar2 = 0x3840;
  }
  CO_GAP = (word)iVar2;
  return;
}

