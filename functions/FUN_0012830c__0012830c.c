/*
 * Program: n42.bin
 * Function: FUN_0012830c
 * Entry: 0012830c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012830c(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort local_20;
  ushort uStack_1e;
  ushort local_1c;
  ushort uStack_1a;
  ushort local_18;
  
  local_18 = CONCAT11(DAT_003fb7fd,DAT_003fb7fb);
  _DAT_003fe96a = CONCAT11(DAT_003fb801,DAT_003fb7ff);
  _DAT_003fe968 = CONCAT11(DAT_003fb805,DAT_003fb803);
  _DAT_003fe96a = _DAT_003fe96a ^ local_18;
  uVar1 = _DAT_003fe968 ^ local_18;
  _DAT_003fe968 = uVar1;
  if ((DAT_003fb7fb & 0x10) != 0) {
    _DAT_003fe968 = _DAT_003fe96a;
    _DAT_003fe96a = uVar1;
  }
  iVar2 = (uint)_DAT_003fe968 << (local_18 & 0xf);
  iVar3 = (uint)_DAT_003fe96a << (local_18 & 0xf);
  local_1c = (ushort)((uint)iVar3 >> 0x10);
  uStack_1e = (ushort)iVar2;
  _DAT_003fe968 = local_1c | uStack_1e;
  local_20 = (ushort)((uint)iVar2 >> 0x10);
  uStack_1a = (ushort)iVar3;
  _DAT_003fe96a = local_20 | uStack_1a;
  return;
}

