/*
 * Program: n42.bin
 * Function: FUN_00122194
 * Entry: 00122194
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00122194(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (param_2 == 0) {
    param_2 = 1;
  }
  _DAT_003fb2cc = param_1;
  _DAT_003fb2d0 = (param_1 + param_2) - 1;
  if (param_1 <= _DAT_003fb2d0) {
    if ((param_1 < _DAT_003fb2c4) || (_DAT_003fb2c8 - 1U < _DAT_003fb2d0)) {
      pbVar3 = *(byte **)(param_3 * 4 + 0x1cc28);
      uVar5 = 0;
      uVar2 = (uint)*pbVar3;
      if (uVar2 != 0xff) {
        do {
          iVar1 = (uVar2 & 0x7f) * 4;
          if ((*(uint *)(iVar1 + 0x1cbf8) <= param_1) &&
             (_DAT_003fb2d0 <= *(uint *)(iVar1 + 0x1cc04))) {
            if ((uVar2 & 0x80) == 0) {
              uVar4 = 4;
            }
            else {
              uVar4 = 0x84;
            }
          }
          uVar5 = uVar5 + 1 & 0xff;
          uVar2 = (uint)pbVar3[uVar5];
        } while ((uVar2 != 0xff) || (0x80 < uVar5));
      }
    }
    else if (DAT_003fb2c0 == '\0') {
      uVar4 = 0x82;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}

