/*
 * Program: n42.bin
 * Function: FUN_00134774
 * Entry: 00134774
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00134774(void)

{
  uint uVar1;
  ushort local_28;
  ushort local_24 [2];
  ushort local_20 [2];
  ushort *local_1c;
  
  local_28 = _B_becod;
  B_eepcod1 = '\0';
  if (9 < CODINDEX) {
    uVar1 = 0;
    do {
      if ((&UNK_003fe894)[uVar1] != (&DAT_001c0217)[uVar1]) {
        local_28 = local_28 & 0xd0fc | 0x2803;
        B_eepcod1 = '\x01';
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while ((uVar1 < 10) && (B_eepcod1 == '\0'));
  }
  if ((B_eepcod1 == '\0') || (B_pwf != '\0')) {
    local_28 = local_28 & 0xd0fc | 0x2002;
  }
  local_24[0] = local_28;
  local_1c = local_24;
  local_20[0] = local_28;
  func_0xff222958(0xe,local_20);
  return;
}

