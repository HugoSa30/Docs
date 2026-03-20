/*
 * Program: n42.bin
 * Function: FUN_0012c108
 * Entry: 0012c108
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0012c1f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012c108(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  B_enabale = 0;
  B_ralectr = 0;
  B_raleok = 0;
  B_undef = 0;
  B_strtswof = 1;
  tooth10ms = 0;
  ttstmpmx_l = FUN_001adb28();
  if ((B_ale & 1) != 0) {
    DAT_003faa6f = 1;
  }
  if (B_pwf != '\0') {
    DAT_003faa6f = 0;
  }
  B_ale = DAT_003faa6f & 1 | B_ale & 0xfe;
  uVar3 = ((uint)_W360_ALE_IMPL << 0x13) / 0x3c;
  uVar2 = (ushort)(uVar3 >> 0x13);
  if (0xff < uVar3 >> 0x13) {
    uVar2 = 0xff;
  }
  CO_WNBM = (byte)uVar2;
  uVar3 = (short)uVar2 * 0x74;
  CO_WAS = (word)uVar3;
  if (0x1c20 < uVar3) {
    CO_WAS = 0x1c20;
  }
  iVar1 = (0x3a - (short)(ushort)GAP_TOOTH) * (int)(short)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0x3840 < iVar1) {
    iVar1 = 0x3840;
  }
  CO_GAP = (word)iVar1;
  return;
}

